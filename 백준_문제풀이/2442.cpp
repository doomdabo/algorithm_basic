#include<iostream>
#include<algorithm>
using namespace std;
/*
별 찍기 - 5
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제

별은 가운데를 기준으로 대칭이어야 한다.
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
            cout<<"*";
        cout<<"\n";
    }

    return 0;
}
