/*author: pankaj dukare
Day 7: Program to Check Whether a Year is a Leap Year or Not in C++
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year to check leap year or not:";
    cin >> year;

    if (year%100==0)
    {
        if (year%400==0)
        {
            cout <<"The year "<<year<<" is leap year.";
        }
        else
        {
            cout <<"The year "<<year<<" is not leap year.";
        }
    }
    else if(year%4==0)
    {
            cout <<"The year "<<year<<" is leap year.";
    }
    else 
    {
       cout <<"The year "<<year<<" is not leap year.";
    }
    return 0;
}
/*
Output:
    Enter the year to check leap year or not:2004
    The year 2004 is leap year.
        
    Enter the year to check leap year or not:2100
    The year 2100 is not leap year.
*/
