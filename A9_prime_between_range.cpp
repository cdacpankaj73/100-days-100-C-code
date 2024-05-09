/*author: pankaj dukare
Day 9: Program to find Prime Numbers in a given range in C++
*/
#include <iostream>
using namespace std;
int main()
{
    int start,end,flag;
    cout << "Enter the starting and ending number of range:";
    cin >>start>>end;

    cout<<"The prime number between "<<start<<" and "<<end<<" are :";

    for(int i=start;i<=end;i++)
    {
        flag=1;
        if(i<2)
        {
            continue;
        }
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<< i<<" ";
        }
    
    }
    return 0;
}
/*
Output:

Enter the starting and ending number of range:1 100
The prime number between 1 and 100 are :2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

Enter the starting and ending number of range:150 250
The prime number between 150 and 250 are :151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 

*/
