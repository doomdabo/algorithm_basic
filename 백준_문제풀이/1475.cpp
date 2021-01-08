#include <iostream>
#include <algorithm>
using namespace std;
/*
다솜이는 은진이의 옆집에 새로 이사왔다. 
다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.

다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다. 
한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다.
다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최솟값을 출력하시오. 
(6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[10]={0,};

    while(1)
    {
        arr[n%10]++;
        if(n/10 == 0) break;
        n/=10;
    }
   int num =0;
    for(int i=0; i< 10; i++){
        if(i!=9 && i!=6) num = max(num, arr[i]);
    }
    
    cout << max(num, (arr[6] + arr[9] + 1) /2);
    return 0;
}
//(arr[9]+arr[6]+1)/2 를 생각해내는 정도?
