#include <iostream>
#include <string>
#include <stack>

using namespace std;
/*
안정적인 문자열
여는 괄호와 닫는 괄호만으로 이루어진 문자열이 주어진다. 
여기서 안정적인 문자열을 만들기 위한 최소 연산의 수를 구하려고 한다. 
안정적인 문자열의 정의란 다음과 같다.

빈 문자열은 안정적이다.
S가 안정적이라면, {S}도 안정적인 문자열이다.
S와 T가 안정적이라면, ST(두 문자열의 연결)도 안정적이다.
{}, {}{}, {{}{}}는 안정적인 문자열이지만, }{, {{}{, {}{는 안정적인 문자열이 아니다.

문자열에 행할 수 있는 연산은 여는 괄호를 닫는 괄호로 바꾸거나, 닫는 괄호를 여는 괄호로 바꾸는 것 2가지이다.
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int count=1;
    while(true)
    {
        string str;
        cin>>str;
        stack <char> s;
        int result=0;
        if(str[0]=='-') break;
        for(auto c:str)
        {
            if(c=='{') s.push(c);
            else if(c=='}'&& !s.empty() && s.top()=='{'){
                s.pop();
            }
            else
                s.push(c);
        }
        while(!s.empty())
        {
            char first=s.top();
            s.pop();
            char second=s.top();
            s.pop();
            if(first==second) result++;
            else result+=2;
        }
        cout<<count++<<". "<<result<<"\n";
    }
}
/*나중에 보니 33줄, 37줄을 그냥 합쳐도 될것같다.
if 34번째줄, else s.push(c)이런식으로.
아이디어는 일단 문자열을 검사하면서, {면 스택에 푸쉬
}이고, 스택이 비어있지 않고, 스택 맨위에 {가 있어서
짝이 맞는다면, 맨위{를 pop해준다.
}이고, 스택이 비어있거나, 짝이 안맞는 경우
일단 스택에 푸쉬해준다.
(즉, 짝이 맞으면 꺼내고, 안맞으면 스택에 넣어둔다.)
그리고 스택을 검사한다.
스택이 비어있을 때까지, 2개씩 짝을지어 검사하는데
이는 짝수라고 가정돼있기 때문에 가능하다.
맨위, 그 아래 문자를 변수로 지정한뒤 
두 문자가 같은경우, {{ or }}는 한번만 바꾸면 된다.
두 문자가 다른 경우, }{의 경우는 두번 바꿔야한다.*/
