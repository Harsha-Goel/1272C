#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    char a[k];
    map<char,int> m;
    loop(i,0,k-1){
        cin>>a[i];
        m[a[i]]++;
    }
    ll len=0;
    ll cnt=0;
    loop(i,0,n-1){
        if(m[s[i]]){
            len++;
        }
        else{
            cnt+=len*(len+1)/2;
            len=0;
        }
    }
    if(len!=0){
        cnt+=len*(len+1)/2;
    }
    cout<<cnt nn;
    
    return 0;
}