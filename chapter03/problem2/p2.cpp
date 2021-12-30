#include<iostream>
using namespace std;
int main()
{
    //ternary operator
    int x=10,y=20,maximum,minimum;
    maximum = (x>y) ? x : y;
    minimum = (x>y) ? y : x;
    cout<<"Max= "<<maximum<< " Min= " << minimum <<endl;


}
