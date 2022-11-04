#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0)return 0;
    if(n==0||n==1)return n;
    int a=0,b=1;
    int s=a+b;
    while(s<=n){
        a=b;
        b=s;
        s=a+b;
    }
    if(abs(n-s)==abs(n-b))cout<<b<<" "<<s;
    else if(abs(n-s)>abs(n-b))cout<<b;
    else cout<<s;
}