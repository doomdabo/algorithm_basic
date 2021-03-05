#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int y=0,m=0;
    for (int i=0; i<n;i++){
        int temp;
        cin>>temp;
        y+=((temp/30)+1)*10;
        m+=((temp/60)+1)*15;
    }
    if(y<m) cout<<"Y "<<y;
    else if(y==m) cout<<"Y M "<<y;
    else cout<<"M "<<m;
    return 0;
}
