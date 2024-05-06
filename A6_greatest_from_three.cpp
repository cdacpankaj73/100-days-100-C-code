/*author: pankaj dukare
Day 6: C++ Program to find the Greatest of three numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter the number First and Second and third to fined Greatest:";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "The number " << num1 << " is greatest than " << num2 << " and "<<num3;
        }
        else
        {
            cout << "The number " << num3 << " is greatest than " << num1 << " and "<<num2;
        }
    }
    else if (num2 > num3)
    {
       cout << "The number " << num2 << " is greatest than " << num1 << " and "<<num3;
    }
    else
    {
       cout << "The number " << num3 << " is greatest than " << num1 << " and "<<num2;
    }
    return 0;
}
/*
Output:
        Enter the number First and Second and third to fined Greatest:156 23 75
        The number 156 is greatest than 23 and 75
        
        Enter the number First and Second and third to fined Greatest:28 67 23
        The number 67 is greatest than 28 and 23
        
        Enter the number First and Second and third to fined Greatest:23 45 69
        The number 69 is greatest than 23 and 45
        
*/
