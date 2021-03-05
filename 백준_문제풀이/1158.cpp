#include <iostream>
#include <list>
using namespace std;
/*
요세푸스 문제는 다음과 같다.
1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 
이제 순서대로 K번째 사람을 제거한다. 
한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 
이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 
원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 
예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.
N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.
*/
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    list<int> l;
    for(int i=0;i<n;i++)
        l.push_back(i+1);
    cout<<"<";
    while(1){
        if(l.size()==1){
            cout<<l.front()<<">";
            l.pop_front();
            break;
        }
        for(int i=0;i<k-1;i++)
        {
            l.push_back(l.front());
            l.pop_front();
        }
        cout<<l.front()<<", ";
        l.pop_front();
    }
}
/*
7 3의 경우,
1~7을 list에 일단 넣는다.
1234567
2345671
3456712 를 만든다.
k-1만큼 list의 맨 앞 값을 뒤로 옮기는 방법 이용!
맨 앞 값인 3을 출력하고 pop
456712
567124
671245 를 만든다.
맨 앞 값 6 출력 후 pop
이걸 반복... size 1일때까지!
출력 양식 맞추기 위해 if조건 걸었음
*/
