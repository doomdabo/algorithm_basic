#include<iostream>
#include<map>
using namespace std;
/*개수세기
총 n개의 정수가 주어졌을 때 정수 v가 몇 개?
첫줄에 정수개수n,둘째줄 정수 공백으로 구분,셋째줄 v
*/
int main(void)
{
    /*cin 수행 전에 cout버퍼 비우지 않게*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,temp,v;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(m.find(temp)==m.end())//만약 새로 들어가는 원소
        {
            m.insert({temp,1});
        }
        else//원래 있으면 value값만 증가
        {
            m.find(temp)->second++;
        }
    }
    cin>>v;
    cout<<m.find(v)->second;
    return 0;
}
