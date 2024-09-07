#include <iostream>
using namespace std;
int sum(int n)
{
    int S;
    S=0;
    for(int i=1;i<=n;i++)
    {
        S=S+i;
    }
    return S;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);

    return 0;
}