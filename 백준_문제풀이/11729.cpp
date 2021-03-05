#include<iostream>
using namespace std;

void func(int a, int b, int n){//원판 n개를 기둥 a에서 b로 이동
    //base condition 정의
    if(n==1)
    {
        cout<<a<<" "<<b<<"\n";
        return;
    }
    func(a,6-a-b,n-1);//n-1개의 원판을 a에서 a,b가 아닌 기둥으로 이동
    cout<<a<<" "<<b<<"\n";//n번째 원판을 a->b로 이동
    func(6-a-b,b,n-1);//n-1게의 원판을 6-a-b에서 b로 이동
}
 
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cout<<(1<<n)-1<<"\n";//2^n-1 출력
    func(1,3,n);//n개의 원판을 장대 1에서 장대 3으로 이동
}
