#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i,x,count;
    count=0;
    int arr[50];
    for (i=0;n>0;i++)
    {
        x=n%2;
        arr[i]=x;
        n=n/2;
        count++;
    }
    for(i=count-1;i>0;i--)
    {
        cout<<arr[i];
    }
    return 0;

}        


               



 











































