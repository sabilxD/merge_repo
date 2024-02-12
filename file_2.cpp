#include <iostream>

using namespace std;

float a2(int p1, float p2, float p3){

    return p2*p3 + p1;
}

int a1(float p1){

    return a2(p1,p1,p1)+7;
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    cout<<a1(a)+a2(b,a,c)<<"\n";
    
    cout<<"Hello File1\n";
}