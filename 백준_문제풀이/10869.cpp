#include<iostream>
using namespace std;
/*
사칙연산
두 자연수 A와 B가 주어진다.
이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 
출력하는 프로그램을 작성하시오. 
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";
    cout<<a-b<<"\n";
    cout<<a*b<<"\n";
    cout<<a/b<<"\n";
    cout<<a%b;

}
