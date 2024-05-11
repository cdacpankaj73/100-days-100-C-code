/*author: pankaj dukare
Day 10: C++ Program to find the Reverse of a Number
*/
#include <iostream>
using namespace std;
int main()
{
    int num,digit,revnum=0;
    cout << "Enter the number to reversed it:";
    cin >>num;

    while(num>0)
    {
        digit=num%10;
        num/=10;
        revnum=revnum*10+digit;
         
    }

    cout<<"The reverse of number is "<<revnum;
    return 0;

}
/*
Output:
    Enter the number to reversed it:23568
    The reverse of number is 86532
*/
