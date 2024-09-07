#include <iostream>
#include <math.h>
using namespace std;

int BinaryToDecimal(int n)
{
    int ans;
    int y,sum;
    int x;
    x=0;
    sum=0;
    while(n>0)
    {
        y=n%10;
        ans=(y*pow(2,x));
        x++;
        sum+=ans;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<BinaryToDecimal(n)<<endl;
}