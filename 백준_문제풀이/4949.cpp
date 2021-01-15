#include <iostream>
#include <string>
#include <stack>
using namespace std;
/*
균형잡힌 세상
문자열에 포함되는 괄호는 소괄호("()") 와 대괄호("[]")로 2종류이고, 문자열이 균형을 이루는 조건은 아래와 같다.

모든 왼쪽 소괄호("(")는 오른쪽 소괄호(")")와만 짝을 이뤄야 한다.
모든 왼쪽 대괄호("[")는 오른쪽 대괄호("]")와만 짝을 이뤄야 한다.
모든 오른쪽 괄호들은 자신과 짝을 이룰 수 있는 왼쪽 괄호가 존재한다.
모든 괄호들의 짝은 1:1 매칭만 가능하다. 즉, 괄호 하나가 둘 이상의 괄호와 짝지어지지 않는다.
짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다.
정민이를 도와 문자열이 주어졌을 때 균형잡힌 문자열인지 아닌지를 판단해보자.

*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(true)
    {
        string str;
        getline(cin,str);
        if(str==".") break;
        stack<char> s;
        int check=0;
        for(auto c:str)
        {
            if(c=='('||c=='['){
                s.push(c);
            }
            else if(c==')'){
                if(s.empty()==1 || s.top()!='('){
                    check=1;
                    break;//짝이 맞지 않는 경우
                }
                s.pop();//짝이 맞는 경우
            }   
            else if(c==']'){
                if(s.empty()==1 || s.top()!='['){
                    check=1;
                    break;//짝이 맞지 않는 경우
                }
                s.pop();//짝이 맞는 경우                
            }
        }
        if(s.empty()==0) check=1;
        if(check ==1) cout<<"no\n";
        else cout<<"yes\n";
    }
}
//s.empty를 꼭 확인해야 한다!!!!!!!!
