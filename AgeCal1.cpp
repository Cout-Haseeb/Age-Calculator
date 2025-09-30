#include <iostream>
using namespace std;

int main() {
    int birthyear, birthmonth, birthday;
    cout << "Enter Your BirthDate (DD MM YYYY): ";
    cin >> birthday >> birthmonth >> birthyear;

    int currentyear, currentmonth, currentday;
    cout << "\nEnter Current Date (DD MM YYYY): ";
    cin >> currentday >> currentmonth >> currentyear;

    if (birthyear > 0 && birthyear < currentyear && birthmonth > 0 && birthmonth <= 12 && 
        birthday > 0 && birthday <= 31 && currentmonth > 0 && currentmonth <= 12 && 
        currentday > 0 && currentday <= 31) {

        int years = currentyear - birthyear;
        int months = currentmonth - birthmonth;
        int days = currentday - birthday;

        if (days < 0) {
            days += 30;  
            months -= 1;
        }

            if (months < 0) {
            months += 12;
            years -= 1;
        }

        cout << "\nYour Age is: " << years 
             << " Years, " << months 
             << " Months, " << days << " Days." << endl;
    }
}
