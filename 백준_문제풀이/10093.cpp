#include<iostream>
#include<algorithm>
using namespace std;
/*
숫자 
두 양의 정수가 주어졌을 때, 
두 수 사이에 있는 정수를 모두 출력하는 프로그램을 작성하시오.


*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    if(a!=b){ 
        cout<<b-a-1<<"\n";
        for(long long i=a+1;i<b;i++)
            cout<<i<<" ";
    }
    else {
        cout<<0<<"\n"; 
    }
    return 0;
}
//a>b인 경우와, a==b인 경우 고려할 것
//자료형이 long long.. int형은 2.1*10^9까지 표현 가능
//long long형은 9.2*10^18까지 표현 가능
