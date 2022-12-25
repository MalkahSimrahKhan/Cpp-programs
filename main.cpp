#include <iostream>

using namespace std;

int main()
{

   float m1,m2,m3,m4,m5,sum,avg;
    cout<<"Enter marks of 1st student"<<endl;
    cin>>m1;
    cout<<"Enter marks of 2nd student"<<endl;
    cin>>m2;
    cout<<"Enter marks of 3rd student"<<endl;
    cin>>m3;
    cout<<"Enter marks of 4th student"<<endl;
    cin>>m4;
    cout<<"Enter marks of 5th student"<<endl;
    cin>>m5;
    sum=m1+m2+m3+m4+m5;
    cout<<"Sum="<<sum<<endl;
    avg=sum/5;
    cout<<"Average marks of five students="<<avg<<endl;

}
