#include <iostream>
using namespace std;

int fact(int n)
{
    int fac;
    fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans;
    ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans;

    return 0;
}