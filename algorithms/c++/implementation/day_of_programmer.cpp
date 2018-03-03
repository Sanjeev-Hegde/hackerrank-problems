#include <iostream>
#include <string>

using namespace std;

bool checkLeapYearJulianCalendar(int year){
    return (year%4 == 0);
}
bool checkLeapYearGregorianCalendar(int year){
    if((year%400==0)|| ((year%4==0)&&(year%100!=0))){
        return true;
    }
    else{
        return false;
    }
}
string solveLeapYear(int year){
    return "12.09." + to_string(year);
}
string solveNonLeapYear(int year){
    return "13.09." + to_string(year);
}

string solve(int year){
    if(year<1917){
        if(checkLeapYearJulianCalendar(year)){
                return solveLeapYear(year);
        }
        else{
                return solveNonLeapYear(year);
        }
    }
    else if(year== 1918){
        return "26.09.1918";
    }
    else{
        if(checkLeapYearGregorianCalendar(year)){
                return solveLeapYear(year);
        }
        else{
                return solveNonLeapYear(year);
        }
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}