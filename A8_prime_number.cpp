/*author: pankaj dukare
Day 8: C++ Program to Check Whether the Number is Prime or Not
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to check it prime or not:";
    cin >> num;

    int flag=1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"The number "<<num<<" is not prime number.";
    }
    else
    {
        cout<<"The number "<<num<<" is prime number.";
    }
    return 0;
}
/*
Output:
    Enter the number to check it prime or not:43
    The number 43 is prime number.
    
    Enter the number to check it prime or not:25
    The number 25 is not prime number.
*/
