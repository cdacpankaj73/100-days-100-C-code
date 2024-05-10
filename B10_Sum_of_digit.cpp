/*author: pankaj dukare
Day 10: Program to Find the Sum of Digits of a Number in C++
*/
#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,digit;
    cout << "Enter the number to to fined sum of digit:";
    cin >>num;

    while(num>0)
    {
        digit=num%10;
        num/=10;
        sum+=digit;
         
    }

    cout<<"The sum of digit is "<<sum;
    return 0;

}
/*
Output:

Enter the number to to fined sum of digit:53496
The sum of digit is 27

Enter the number to to fined sum of digit:0
The sum of digit is 0
*/
