/*author: pankaj dukare
Day 3: Find the Sum of N Natural Numbers in C++
*/
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the number N to find sum of it:";
    cin>>num;

    for(int i=num;i>0;i--)
    {
        sum+=i;
    }

    cout<<"The sum natural number "<<num<<" is "<<sum;
    
    return 0;
}
/*
Output:
    Enter the number N to find sum of it:10
    The sum natural number 10 is 55
*/



