#include <iostream>
using namespace std;
/*별찍기 3
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., 
N번째 줄에는 별 1개를 찍는 문제
*/

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--)
            cout<<"*";
        cout<<"\n";
    }
}
