//sum of sub arrays
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    int crr=0;
    for(int i=0;i<n;i++)
    {
        crr=0;
        for (int j=i;j<n;j++)
        {
            crr+=arr[j];
            cout<<crr<<endl;
        }
    }
    return 0;
}