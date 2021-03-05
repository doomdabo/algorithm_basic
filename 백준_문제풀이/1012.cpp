#include<iostream>
#include<queue>

using namespace std;

#define X first
#define Y second
int n,m,k,t;
int board[52][52];
int vis[52][52];
int dy[4]={1,0,-1,0};
int dx[4]={0,1,0,-1};

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(int i=0;i<t;i++){
        for(int i=0;i<51;i++){
            for(int j=0;j<51;j++){
                board[i][j]=0;
                vis[i][j]=0;
            }
        }
        cin>>m>>n>>k;
        for(int j=0;j<k;j++){
            int a,b;
            cin>>a>>b;
            board[a][b]=1;
        }
        int count=0;

        for(int p=0;p<m;p++){
            for(int q=0;q<n;q++){
                if(vis[p][q]||board[p][q]!=1) continue;
                count++;
                queue<pair<int,int>> Q;
                vis[p][q]=1;
                Q.push({p,q});
                while(!Q.empty()){
                    pair<int,int> cur=Q.front();
                    Q.pop();
                    for(int dir=0;dir<4;dir++){
                        int nx=cur.X+dx[dir];
                        int ny=cur.Y+dy[dir];
                        if(nx<0||ny<0||nx>=m||ny>=n) continue;
                        if(board[nx][ny]!=1||vis[nx][ny]) continue;
                        vis[nx][ny]=1;
                        Q.push({nx,ny});
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
}
