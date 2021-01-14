#include<iostream>
#include<list>
using namespace std;
/*
에디터:
한 줄로 된 간단한 에디터를 구현하려고 한다. 
이 편집기는 영어 소문자만을 기록할 수 있는 편집기로,
최대 600,000글자까지 입력할 수 있다.

이 편집기에는 '커서'라는 것이 있는데, 커서는 문장의 맨 앞(첫 번째 문자의 왼쪽), 
문장의 맨 뒤(마지막 문자의 오른쪽), 또는 문장 중간 임의의 곳(모든 연속된 두 문자 사이)에 위치할 수 있다. 
즉 길이가 L인 문자열이 현재 편집기에 입력되어 있으면, 커서가 위치할 수 있는 곳은 L+1가지 경우가 있다.
L	커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
D	커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
B	커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
P $	$라는 문자를 커서 왼쪽에 추가함
*/
int main(void)
{
    ios_base::sync_with_stdio;
    cin.tie(0);
    /*문자열 입력받음*/
    string str;
    cin>>str;
    /*입력받은 문자열 list에 저장*/
    list <char> l;
    for(auto c:str)
        l.push_back(c);
    auto cursor=l.end();//커서의 위치를 맨 뒤로 보낸다.
    int num;
    cin>>num;

    for(int i=0; i<num;i++)
    {
        //명령어 입력받기
        char op;
        cin>>op;
        if(op=='L')
        {
            if(cursor!=l.begin()) 
                cursor--;
        }
        else if(op=='D')
        {
            if(cursor!=l.end()) 
                cursor++;
        }
        else if(op=='B')
        {
            if(cursor!=l.begin())
            {
                cursor--;
                cursor=l.erase(cursor);
            }  
        }
        else
        {
            char c;
            cin>>c;
            l.insert(cursor,c);
        }
    }
    for(auto i:l) cout<<i;
    return 0;
}
