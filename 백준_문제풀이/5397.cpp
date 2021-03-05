#include <iostream>
#include <list>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        list <char> l;
        l.clear();
        auto cursor=l.begin();
        for(auto c:str){
            if(c=='-'&&cursor!=l.begin()) cursor=l.erase(--cursor);
            else if(c=='<'&&cursor!=l.begin()) cursor--;
            else if(c=='>'&&cursor!=l.end()) cursor++;
            else if(c!='<'&&c!='>'&&c!='-') l.insert(cursor,c);
        }
        for(auto i:l) cout<<i;
        cout<<"\n";
    }
    return 0;

}
