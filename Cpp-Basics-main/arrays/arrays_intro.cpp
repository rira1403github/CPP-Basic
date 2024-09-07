/*#include <iostream>
using namespace std;

int main()
{
    int arr[4]={10,20,30,40};

    cout<<arr[3]<<endl<<arr[2]<<endl;
          
    return 0;
}*/
// to input an array from user
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}