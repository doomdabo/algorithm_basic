#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<x) cout<<a[i]<<' ';
    }
    delete[] a;
    return 0;
}
