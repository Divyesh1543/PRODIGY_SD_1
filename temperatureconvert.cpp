#include<iostream>
using namespace std;


int main()
{
    double celsius, fahrenheit, kelvin;

    int options;

    cout<<"Choose from the options below  "<<endl;

    cout<<"1. Celsius <<endl"<<endl;
    cout<<"2. Fahrenheit "<<endl;
    cout<<"3. Kelvin "<<endl;

    cout<<"Choose from the above ==> ";
    cin>>options;
    cout<<endl;



    switch(options)
    {
        case 1:
        {
            cout<<"Enter temperature in Celsius :";
            cin>>celsius;

            fahrenheit=((9.0 / 5.0) * celsius ) + 32.0;
            kelvin= celsius + 273.15;

            cout<<"Temperature in Fahrenheit is : "<<fahrenheit<<" "<<"F"<<endl;
            cout<<"Temperature in Kelvin is : "<<kelvin<<" "<<"K"<<endl;
        }

        break;

        case 2:
        {
            cout<<"Enter temperature in Fahrenheit :";
            cin>>fahrenheit;

            celsius=(fahrenheit - 32) / 1.8;
            kelvin=(fahrenheit - 32) * 5 / 9 + 273.15;

            cout<<"Temperature in Celsius is : "<<celsius<<" "<<"C"<<endl;
            cout<<"Temperature in Kelvin is :"<<kelvin<<" "<<"K"<<endl;
        }

        break;

        case 3:
        {
            cout<<"Enter temperature in Kelvin :";
            cin>>kelvin;
            
            celsius= kelvin - 273.15;
            fahrenheit=(kelvin - 273.15) * 9 / 5 + 32;
            
            cout<<"Temperature in Celsius is : "<<celsius<<" "<<"C"<<endl;
            cout<<"Temperature in Fahrenheit is :"<<fahrenheit<<" "<<"F"<<endl;

            
        }

        break;

        default:
         {
            cout<<"Invalid Input!!"<<endl;
         }
    }

    return 0;

}


    