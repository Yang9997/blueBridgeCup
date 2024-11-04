#include<iostream>
using namespace std;
int main(void)
{
    double m;
    double h;
    cin>>m;
    cin>>h;
    
    double bmi = m/h/h;

    if(bmi < 18.5)
        cout<<"Underweight";
    else if(bmi < 24)
        cout<<"Normal";
    else
    {
        cout<<bmi<<endl<<"Overweight";
    }

    return 0;

}