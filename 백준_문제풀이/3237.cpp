#include <iostream>
#include <algorithm>
using namespace std;
/*
두수의 합:
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다. 
ai의 값은 1보다 크거나 같고, 1000000보다 작거나 같은 자연수이다. 
자연수 x가 주어졌을 때, 
ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 
(ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.
*/
const int MAX = 100000;
int arr[MAX];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, X;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cin >> X;
    sort(arr, arr + N);

    int result = 0;
    for (int i = 0; i < N; i++)//이진탐색 이용
    {
        int low = 0, high = N - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (arr[mid] == X - arr[i])
                {
                    result++;
                    break;
                }
                else if (arr[mid] < X - arr[i])
                    low = mid + 1;
                else
                    high = mid - 1;
            }

    }
    cout << result / 2 << "\n";
    return 0;
}
