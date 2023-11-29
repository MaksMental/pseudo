#include <iostream>
using namespace std;

float get_monthly_sales() {
    float monthly_sales;
    cout << "Podaj miesieczna wartosc sprzedazy pracownika: ";
    cin >> monthly_sales;
    return monthly_sales;
}

void get_salary(float monthly_sales, float advance_payment) {
    float salary = monthly_sales * advance_payment;

    float advance_taken;
    cout << "Podaj zaliczke wzieta przez pracownika: ";
    cin >> advance_taken;

    salary -= advance_taken;

    cout << "Wyplata dla pracownika wynosi " << salary << endl;
}

int main() {
    const float T1 = 0.10;
    const float T2 = 0.12;
    const float T3 = 0.14;
    const float T4 = 0.16;
    const float T5 = 0.18;
    float monthly_sales;

    monthly_sales = get_monthly_sales();

    if (monthly_sales > 999 && monthly_sales < 10000) {
        get_salary(monthly_sales, T1);
    }
    else if (monthly_sales >= 10000 && monthly_sales < 15000) {
        get_salary(monthly_sales, T2);
    }
    else if (monthly_sales >= 15000 && monthly_sales < 18000) {
        get_salary(monthly_sales, T3);
    }
    else if (monthly_sales >= 18000 && monthly_sales < 22000) {
        get_salary(monthly_sales, T4);
    }
    else {
        get_salary(monthly_sales, T5);
    }

    return 0;
}
