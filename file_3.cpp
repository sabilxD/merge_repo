#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int64_t ll;

ostream& operator << (ostream& out,vector<ll> &a){

    out<<"[ ";
    for(ll i=0;i<a.size();i++){
        
        out<<a[i];

        if(i+1!=a.size()){

            out<<", ";
        }
    }
    out<<" ]";
    return out;
}

int main(){

    ll T;
    cin>>T;

    for(ll I=1;I<=T;I++){

        vector<ll> a;
        ll n;
        cin>>n;
        a.resize(n);
        for(ll j=0;j<n;j++){

            cin>>a[j];
        }

        sort(a.begin(),a.end(),greater<>());

        cout<<a<<"\n";
    }
}