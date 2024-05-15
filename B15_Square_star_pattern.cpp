/*author: pankaj dukare
Day 15:C++ Program for printing Square star pattern.
*/
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of row:";
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}

/*
Output:
    Enter the number of row:7
    * * * * * * *
    * * * * * * *
    * * * * * * *
    * * * * * * *
    * * * * * * *
    * * * * * * *
    * * * * * * *
*/
