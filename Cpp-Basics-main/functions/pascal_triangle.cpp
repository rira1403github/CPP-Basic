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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int ans;
            ans=fact(i)/((fact(i-j)*fact(j)));
            cout<<ans;
        }
        cout<<endl;
    
    }
    return 0;
}