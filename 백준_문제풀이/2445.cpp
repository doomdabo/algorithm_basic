#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int k=2*n-2*i-2;k>0;k--){
            cout<<" ";
        }
        for(int l=0;l<i+1;l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }
        for(int k=0;k<2*(i+1);k++){
            cout<<" ";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }         
}
