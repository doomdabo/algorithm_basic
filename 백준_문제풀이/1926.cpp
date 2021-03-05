#include<iostream>
#include<queue>
using namespace std;
#define X first
#define Y second
int board[502][502];
bool vis[502][502];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>board[i][j];
    int max_area=0;
    int num=0;//그림의 수
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]!=1||vis[i][j]) continue;
            num++;//그림의 수 카운트
            queue<pair<int,int>> q;
            q.push({i,j});
            vis[i][j]=1;
            int temp=0;
            while(!q.empty()){
                pair<int,int> cur=q.front();
                q.pop();
                temp++;//넓이 체크
                for(int dir=0;dir<4;dir++){//상하좌우 체크
                    int nx=cur.X+dx[dir];
                    int ny=cur.Y+dy[dir];
                    if(nx<0||ny<0||nx>=n||ny>=m) continue;
                    if(vis[nx][ny]||board[nx][ny]!=1) continue;
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
            if(max_area<temp) max_area=temp;
        }
    }
    cout<<num<<"\n"<<max_area;
}
