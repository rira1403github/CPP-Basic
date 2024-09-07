#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i=0;i<n;i++)
    {
        maxNo=max(maxNo,arr[i]);/*max()is an in built libraray function in c++,
                                 that gives max of two numbers*/
        minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<endl<<minNo<<endl;
    return 0;
}