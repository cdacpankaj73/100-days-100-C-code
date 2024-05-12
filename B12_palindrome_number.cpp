/*author: pankaj dukare
Day 12: check number is Palindrome or not in C++
*/
#include <iostream>
using namespace std;
int main()
{
    int num,digit,revnum=0,temp;
    cout << "Enter the number to find it palindrome or not:";
    cin >>num;

    temp=num;

    while(num>0)
    {
        digit=num%10;
        num/=10;
        revnum=revnum*10+digit;
         
    }

    if(revnum==temp)
    {
        cout<<"the number "<<temp<<" is palindrome number.";
    }
    else
    {
        cout<<"the number "<<temp<<" is not palindrome number.";
    }
   
    return 0;

}
/*
Output:
    Enter the number to find it palindrome or not:45254
    the number 45254 is palindrome number.

    Enter the number to find it palindrome or not:7562
    the number 7562 is not palindrome number.
*/
