#include <iostream>
#include <queue>
using namespace std;

string board[1002];
int jh[1002][1002];
int fire[1002][1002];
int n,m;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            jh[i][j]=-1;
            fire[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++)
        cin>>board[i];
    /**불의 경로 체크**/
    queue <pair<int,int>> q1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(board[i][j]=='F'){
              q1.push({i,j});
              fire[i][j]=0;
          }
        }
    }
    while(!q1.empty()){
        pair<int,int> cur1=q1.front();
        q1.pop();
        for(int i=0;i<4;i++){
            int nx=cur1.first+dx[i];
            int ny=cur1.second+dy[i];
            if(nx<0||ny<0||nx>=n||ny>=m) continue;
            if(board[nx][ny]=='#'||fire[nx][ny]!=-1) continue;
            fire[nx][ny]=fire[cur1.first][cur1.second]+1;
            q1.push({nx,ny});
        }
    }
    /**지훈이의 경로 체크**/
    queue <pair<int,int>> q2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(board[i][j]=='J'){
              q2.push({i,j});
              jh[i][j]=0;
          }
        }
    }
    while(!q2.empty()){
        pair<int,int> cur2=q2.front();
        q2.pop();
        for(int i=0;i<4;i++){
            int nx=cur2.first+dx[i];
            int ny=cur2.second+dy[i];
            if(nx<0||nx>=n||ny<0||ny>=m){//탈출 성공
                cout<<jh[cur2.first][cur2.second]+1;
                return 0;
            }
            if(jh[nx][ny]!=-1||board[nx][ny]=='#') continue;
            if(fire[nx][ny]<=jh[cur2.first][cur2.second]+1&&fire[nx][ny]!=-1) continue;
        //지훈이가 (nx,ny)에 도달하는 시간:jh[cur2.first][cur2.second]+1
            jh[nx][ny]=jh[cur2.first][cur2.second]+1;
            q2.push({nx,ny});
        }
    }
    cout<<"IMPOSSIBLE";
}
