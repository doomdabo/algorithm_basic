#include<iostream>
#include<queue>
using namespace std;

int vis[100002];
int n,k;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    vis[n]=1;
    queue<int> q;
    q.push(n);
    while(vis[k]==0){
        int cur=q.front(); 
        q.pop();
        if(cur-1>=0&&vis[cur-1]==0){
            vis[cur-1]=vis[cur]+1;
            q.push(cur-1);
        }
        if(cur+1<=100000&&vis[cur+1]==0){
            vis[cur+1]=vis[cur]+1;
            q.push(cur+1);
        }
        if(cur*2<=100000&&vis[cur*2]==0){
            vis[cur*2]=vis[cur]+1;
            q.push(cur*2);
        }        
    }
    cout<<vis[k]-1;
}
