#include<iostream>
using namespace std;
int main ()
{
    for (int row=1;row<=3 ;row++ )
    {
        for(int col=1;col<=row ;col++ )
        {
            cout<<(char)(row+64);

        }
        cout<<endl;
    }
}
