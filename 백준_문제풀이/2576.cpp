#include<iostream>
using namespace std;
/*
홀수
7개의 자연수가 주어질 때, 
이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 
고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오.

예를 들어, 7개의 자연수 12, 77, 38, 41, 53, 92, 85가 주어지면 
이들 중 홀수는 77, 41, 53, 85이므로 그 합은
77 + 41 + 53 + 85 = 256이 되고,
41 < 53 < 77 < 85
이므로 홀수들 중 최솟값은 41이 된다.
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[7];
    int min=100;
    int sum=0;
    int count=0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        
        if(arr[i]%2==1){
            count++;
            sum+=arr[i];
            if(min>arr[i]) min=arr[i];
        }
    }
    if(count==0) cout<<"-1";
    else cout<<sum<<"\n"<<min;

}
