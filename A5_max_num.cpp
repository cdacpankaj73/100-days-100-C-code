/*author: pankaj dukare
Day 5: Find the Greatest of the Two Numbers in C++
*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the number First and Second to fined maximum:";
    cin>>num1>>num2;

    if(num1==num2)
    {
        cout<<"The number "<<num1<<" and "<<num2<<" are equal.";
    }
    else if (num1>num2)
    {
        cout<<"The number "<<num1<<" is greater then "<<num2;
    }
    else
    {
         cout<<"The number "<<num2<<" is greater then "<<num1;
    }
    return 0;
}
/*
Output:
    Enter the number First and Second to fined maximum:12 12
    The number 12 and 12 are equal.
    
    Enter the number First and Second to fined maximum:56 98
    The number 98 is greater then 56
    
    Enter the number First and Second to fined maximum:56 98
    The number 98 is greater then 56
    
*/



