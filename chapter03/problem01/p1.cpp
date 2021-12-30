#include<iostream>
using namespace std;
int main()
{
    //grading system code
    int marks;
    cout<<"Inter your marks:";
    cin>>marks;



    if(marks>100 || marks<0)
    {
        cout<<"This is the result";
    }
    else if (marks>=80 && marks<=100) //80 to 100
    {
        cout<<"A+";

    }
    else if(marks>=75 && 79>=marks)//75 to 79

    {
        cout<<"A-";
    }
    else if(marks>=70 && 74>=marks)//70 to 74
    {
        cout<<"A";
    }
    else if(marks>=65 && 69>=69)//65 to 69
    //65 to 69
    {
        cout<<"B+";
    }
    else if(marks>=60 && 64>=marks)//60 to 64
    {
        cout<<"B";
    }
    else if(marks >=55 && 59>=marks)//55 to 59
    {
        cout<<"B-";
    }
    else if(marks >=50 && 54>=marks)//50 to 54
    {
        cout<<"C+";
    }
    else if(marks >=45 && 49>=marks)//45 to 49
    {
        cout<<"C";
    }
    else if(marks >=40 && 45>=marks)//40 to 45
    {
        cout<<"D";
    }
    else{
        cout<<"F";
    }

}


