#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int result=0;
    cin>>a>>b>>c;
    if(a==b&&b==c)
        result=10000+1000*a;
    else if(a!=b&&b!=c&&a!=c)
        result=(a>b?(a>c?a:c):(b>c?b:c))*100;
    else
    {
        int temp=0;
        if(a==b||a==c)
            temp=a;
        if(b==c)
            temp=b;
        result=1000+temp*100;
    }
    cout<<result;
    return 0;
}
