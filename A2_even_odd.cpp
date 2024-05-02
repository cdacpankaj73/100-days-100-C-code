/*author: pankaj dukare
Day 2: Check if a Number is Even or Odd in C++
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check it even or odd:";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number "<<num<<" is Even.";
    }
    else
    {
        cout<<"The number "<<num<<" is Odd.";
    }
    return 0;
}
/*
Output:
Enter the number to check it even or odd:26
The number 26 is Even.

Enter the number to check it even or odd:79
The number 79 is Odd.
*/