#include <iostream>

using namespace std;

using ll=long long;

ll POW(ll a, ll b, ll m){
    //base condition
    if (b==1) return a%m;
    //(a^2n)=(a^n)*(a^n)
    ll val=POW(a,b/2,m);
    val=val*val%m;
    if(b%2==0) return val;//b가 짝수
    return val*a%m;//b가 홀수면 a를 한번 더 곱해야함.
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;

    cout<<POW(a,b,c);
}
