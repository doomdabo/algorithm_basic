#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>> n;
    int count=0;
    if(n==1000)//result of 1000 and 999 is same
        n=999;

    if(n<100)//when n is smaller than 100
       count=n;//count is n
    else if(n>99)//if n is 3 digits
    {
        count+=99;
        for(int i=100;i<=n;i++)
        {
            int temp=i;
            //store each digit
            int n0=temp/100;//n0=321/100=3
            temp=temp%100;//temp=21
            int n1=temp/10;//n1=21/10=2
            int n2=temp%10;//n2=21%10=1
            if(n0-n1==n1-n2)
                count++;
        }
    }
    cout<<count;
    return 0;
}
