#include <iostream>
using namespace std;
/*
숫자의 개수:
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 
0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
예를 들어 A = 150, B = 266, C = 427 이라면 
A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,result;
    cin>>a>>b>>c;
    result=a*b*c;
    int arr[10]={0,};//초기화 작업
    while(result!=0)
    {
        arr[result%10]++;//마지막 자리부터 판별하며 배열에 저장
        result/=10;//자리수 하나씩 줄이기
    }
    for(int i=0;i<10;i++)//출력
        cout<<arr[i]<<"\n";
}
