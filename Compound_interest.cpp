#include<bits/stdc++.h>
using namespace std;
int main(){
    double p,r,t;
    cin>>p>>r>>t;
    double ci;
    ci=p*(pow((1+r/100),t));
    cout<<fixed<<setprecision(2)<<ci;
}