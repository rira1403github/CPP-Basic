#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter a number:";
    cin>>n;

    bool flag=true;
    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            flag=false;
            cout<<"number is not prime";
            break; 
        }
    }
    if(flag==true)
    {
        cout<<"number is prime";
    }

}