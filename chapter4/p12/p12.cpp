
#include<iostream>
using namespace std;
int main()
{
    for( int row=3;row>=1 ;row-- )
    {
        for(int col=1 ;col<=row ;col++ )
        {
            cout<<col%2;
        }
        cout<<endl;
    }
}
