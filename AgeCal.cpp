#include <iostream>
using namespace std;
int main(){
    int birthyear,birthmonth,birthday;
    cout<<"Enter Your BirthDate (YYYY MM DD): ";
    cin>>birthyear>>birthmonth>>birthday;
    int currentyear,currentmonth,currentday;
    cout<<"\nEnter Current Date (YYYY MM DD): ";
    cin>>currentyear>>currentmonth>>currentday;
    if(birthyear>0 && birthyear<currentyear && birthmonth>0 && birthmonth<=12 && birthday>0 && birthday<=31 && currentmonth>0 && currentmonth<=12 &&currentday>0 && currentday<=31){
        int years, yearsd;
        years = currentyear - birthyear;
        yearsd = years * 365;
        int months, monthsd;
        months = currentmonth - birthmonth;
        monthsd = months * 30;
        yearsd= yearsd + monthsd;
        int days;
        days = currentday - birthday;
        yearsd = yearsd + days;
        years = yearsd / 365;
        yearsd = yearsd - (years * 365);
        months = yearsd / 30;
        days = yearsd - (months * 30);
        cout<<"\nYour Age is: "<<years<<" Years, "<<months<<" Months, "<<days<<" Days."<<endl;
        return 0;
    }
}