#include <iostream>
#include <queue>
#include <string>
using namespace std;

string board[102];
int dist[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>board[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            dist[i][j]=-1;
    queue <pair<int,int>> q;
    q.push({0,0});
    dist[0][0]=0;
    while(!q.empty()){
        pair<int,int> cur=q.front();
        q.pop();
        for(int dir=0; dir<4; dir++){
            int nx=cur.first+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0||ny<0||nx>=n||ny>=m) continue;
            if(dist[nx][ny]!=-1||board[nx][ny]!='1') continue;
            dist[nx][ny]=dist[cur.first][cur.second]+1;
            q.push({nx,ny});
        }
    }
    cout<<dist[n-1][m-1]+1;
}
