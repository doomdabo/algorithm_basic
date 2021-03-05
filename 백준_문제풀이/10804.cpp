#include <iostream>
using namespace std;

int arr[22];

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1; i<21; i++){
        arr[i]=i;
    }
    for(int i=0;i<10;i++){
        int a,b;
        cin>>a>>b;
        int count=b-a+1;
        for(int j=a;j<a+count/2;j++){
            swap(arr[j],arr[b--]);
        }
    }
    for(int i=1;i<21;i++)
        cout<<arr[i]<<" ";
}
