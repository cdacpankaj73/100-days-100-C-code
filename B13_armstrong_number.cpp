/*author: pankaj dukare
Day 13: check number is Armstrong or not in C++
*/
#include <iostream>
#include<math.h>

using namespace std;
int finedNumLen(int num);
int main()
{
    int num,digit,sum=0,temp,len;
    cout << "Enter the number to fined it Armstrong or not:";
    cin >>num;

    temp=num;
    len=finedNumLen(num);
    while(num>0)
    {
        digit=num%10;
        num/=10;
        sum=sum+pow(digit,len);   
    }

    if(sum==temp)
    {
        cout<<"the number "<<temp<<" is armstrong number.";
    }
    else
    {
        cout<<"the number "<<temp<<" is not armstrong number.";
    }
   
    return 0;

}
int finedNumLen(int num)
{
    int len=0;
    while (num>0)
    {
        num=num/10;
        len++;
    }
    return len;   
}
/*
Output:
    Enter the number to fined it Armstrong or not:153
    the number 153 is armstrong number.

    Enter the number to fined it Armstrong or not:1634
    the number 1634 is armstrong number.

    Enter the number to fined it Armstrong or not:1586
    the number 1586 is not armstrong number.
*/
