#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef int64_t ll;

int main(){

    ll n;
    cin>>n;

    for(ll j=1;j<=2*n-1;j++){

        ll s=min(j,2*n-j);
        s=2*s-1;

        for(ll co=1;co<=2*n-1;co++){

            if(co>n-s/2-1 && co<=n+s/2){

                cout<<"*";
            }else{

                cout<<" ";
            }
        }
        cout<<"\n";
    }
}