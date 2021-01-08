#include <iostream>

using namespace std;
/*
방배정:
남학생은 남학생끼리, 여학생은 여학생끼리 방을 배정해야 한다. 
또한 한 방에는 같은 학년의 학생들을 배정해야 한다. 
물론 한 방에 한 명만 배정하는 것도 가능하다.

한 방에 배정할 수 있는 최대 인원 수 K가 주어졌을 때, 
조건에 맞게 모든 학생을 배정하기 위해 필요한 방의 최소 개수를 구하는 프로그램을 작성하시오.
*/
int main(void)
{
    ios_base::sync_with_stdio;
    cin.tie(0);
    int n,k,s,y;
    int result=0;
    cin>>n>>k;
    int arr[2][6]={0,};//배열 초기화
    for(int i=0;i<n;i++)
    {
        //성별과 학년 입력받아 2차원 배열에 저장
        cin>>s>>y;
        arr[s][y-1]++;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr[i][j]%k==0)
                result+=arr[i][j]/k;
            else
                result+=arr[i][j]/k+1;
        }
    }
    cout<<result;
}
//2차원 배열 사용하는 것이 관건.
