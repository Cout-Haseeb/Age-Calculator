#include <iostream>
using namespace std;

int main() {
    int birthyear, birthmonth, birthday;
    cout << "Enter Your BirthDate (YYYY MM DD): ";
    cin >> birthyear >> birthmonth >> birthday;

    int currentyear, currentmonth, currentday;
    cout << "\nEnter Current Date (YYYY MM DD): ";
    cin >> currentyear >> currentmonth >> currentday;

    if (birthyear > 0 && birthyear < currentyear && birthmonth > 0 && birthmonth <= 12 && 
        birthday > 0 && birthday <= 31 && currentmonth > 0 && currentmonth <= 12 && 
        currentday > 0 && currentday <= 31) {

        int years = currentyear - birthyear;
        int months = currentmonth - birthmonth;
        int days = currentday - birthday;

        // ✅ Borrow days if needed
        if (days < 0) {
            days += 30;  // assume 30 days per month
            months -= 1;
        }

        // ✅ Borrow months if needed
        if (months < 0) {
            months += 12;
            years -= 1;
        }

        cout << "\nYour Age is: " << years 
             << " Years, " << months 
             << " Months, " << days << " Days." << endl;
    }
}
