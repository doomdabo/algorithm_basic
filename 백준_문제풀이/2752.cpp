#include <iostream>
/*
세수 정렬:
숫자 세 개가 주어졌을 때, 
가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.
*/
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    while(true)
    {
        if(a<b&&b<c){
            cout<<a<<" "<<b<<" "<<c;
            break;
        }
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        if(b>c){
            int temp=b;
            b=c;
            c=temp;
        }
    }
}
