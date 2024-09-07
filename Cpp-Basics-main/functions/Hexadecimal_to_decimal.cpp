#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int HexadecimalToDecimal(string n){
        int sum=0;
        int s=n.size();
        for(int i=0;i<=s-1;i++){
            int x;
            x=0;
            if(n[i]>='0' && n[i]<='9'){
                sum+=((int(n[i])-'0')*pow(16,x));
                x++;
            }
            else if(n[i]>=(char)'A' && n[i]<=(char)'F'){
                sum+=((int(n[i]-'A')+10))*pow(16,x);
                x++;
            }
        }
    return sum;
}
    
int main(){
    string n;
    cin>>n;
    cout<<HexadecimalToDecimal(n)<<endl;
