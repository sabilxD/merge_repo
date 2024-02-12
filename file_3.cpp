#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int64_t ll;

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

        cout<<"[ ";
        for(ll i=0;i<a.size();i++){
            
            cout<<a[i];

            if(i+1!=a.size()){

                cout<<", ";
            }
        }
        cout<<" ]";
    }
}