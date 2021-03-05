#include<iostream>
#include<stack>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;
    int sum=0;
    cin>>k;
    stack <int> s;
    for(int i=0;i<k;i++){
        int n;
        cin>>n;
        if(n!=0) s.push(n);
        else s.pop();
    }
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    cout<<sum;
}
