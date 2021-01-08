#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
/*
strfry:
strfry 함수는 입력된 문자열을 무작위로 재배열하여 새로운 문자열을 만들어낸다. 

두 개의 문자열에 대해, 2번째 문자열이 1번째 문자열에 strfry 함수를 적용하여 얻어질 수 있는지 판단하라.
*/

/*배열에 정렬된 상태로 넣는다->정렬->비교*/

int main(void)
{
    ios_base::sync_with_stdio;
    cin.tie(0);
    int num;
    cin>>num;
    int arr[1000];
    for(int i=0; i<num; i++)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
            arr[i]=0;
        else
            arr[i]=1;
    }
    for(int i=0;i<num;i++)
    {
        if(arr[i]==0)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
}
