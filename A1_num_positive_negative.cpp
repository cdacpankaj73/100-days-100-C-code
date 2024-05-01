/*author: pankaj dukare
Day1: Check if a Number is Positive or Negative in C++
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to check it positive or negative:";
    cin>>num;
    if(num==0)
    {
        cout<<"The number "<<num<<" is Zero so it neither positive nor negative.";
    }
    else if(num>0)
    {
        cout<<"The number "<<num<<" is Positive.";
    }
    else
    {
        cout<<"The number "<<num<<" is Negative.";
    }
    return 0;
}
/*
Output:
Enter the number to check it positive or negative:0
The number 0 is Zero so it neither positive nor negative.

Enter the number to check it positive or negative:45
The number 45 is Positive.

Enter the number to check it positive or negative:-83
The number -83 is Negative.
*/