/*author: pankaj dukare
Day 4: Find the Sum of Numbers in a Given Interval in C++
*/
#include<iostream>
using namespace std;
int main()
{
    int first_num,last_num,sum=0;
    cout<<"Enter the number First and last number to find sum of between them:";
    cin>>first_num>>last_num;

    for(int i=first_num;i<last_num;i++)
    {
        sum+=i;
    }

    cout<<"The sum of between "<<first_num<<" and "<<last_num<<" is "<<sum;
    
    return 0;
}
/*
Output:
    Enter the number First and last number to find sum of between them:25 63
    The sum of between 25 and 63 is 1653
*/



