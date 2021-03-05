#include<iostream>
#include<queue> 
using namespace std;

int board[1002][1002];
int dist[1002][1002];
int n,m;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>m>>n;
    queue <pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
            if(board[i][j]==1)
                q.push({i,j});//익은 토마토 q에 넣음
            if(board[i][j]==0)
                dist[i][j]=-1;//익지 않은 토마토 -1
        }   
    }
//익은 토마토 0, 토마토 없으면 0, 익지 않은 토마토 -1
    while(!q.empty()){
        pair<int,int> cur=q.front();
        q.pop();
        for(int dir=0;dir<4;dir++){
            int nx=cur.first+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0||ny<0||nx>=n||ny>=m) continue;
            if(dist[nx][ny]!=-1) continue;//익지 않은 토마토만 큐에 넣음
            dist[nx][ny]=dist[cur.first][cur.second]+1;
            q.push({nx,ny});
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dist[i][j]==-1){
                cout<<-1;
                return 0;
            }
            if(max<dist[i][j]) max=dist[i][j];
        }
    }
    cout<<max;
}
