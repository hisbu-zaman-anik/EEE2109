#include<iostream>
using namespace std;
int main()
{
    int i=6; // for postfix increment
    //------------------------Postfix increment---------------------
    //1
    cout<<"Before increment = "<<i<<endl;
    //2
    cout<<"Postfix increment = "<<i++<<endl;
    //3
    cout<<"After increment = "<<i<<endl;


    int j=9; // for prefix increment
    //------------------------prefix increment---------------------
    //1
    cout<<"Before increment = "<<j<<endl;
    //2
    cout<<"Prefix increment = "<<++j<<endl;
    //3
    cout<<"After increment = "<<j<<endl;






    int m=5; // for postfix deccrement
    //------------------------Postfix decrement---------------------
    //1
    cout<<"Before increment = "<<m<<endl;
    //2
    cout<<"Postfix increment = "<<m--<<endl;
    //3
    cout<<"After increment = "<<m<<endl;


    int n=9; // for prefix increment
    //------------------------prefix decrement---------------------
    //1
    cout<<"Before increment = "<<n<<endl;
    //2
    cout<<"Prefix increment = "<<--n<<endl;
    //3
    cout<<"After increment = "<<n<<endl;


}
