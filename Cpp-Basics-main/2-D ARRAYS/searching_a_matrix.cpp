#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    int x;
    cin>>x;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"element found"<<endl<<x<<' '<<"at"<<i<<' '<<j;
                c++;
            }
        }
    }
    if(c==0)
    {
        cout<<"no element found";
    }
    return 0;
}
