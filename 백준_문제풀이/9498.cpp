#include<iostream>
using namespace std;
/*
시험성적
시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 
나머지 점수는 F를 출력하는 프로그램을 작성하시오.
*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    if(n>=90) cout<<"A";
    else if(n<90&&n>=80) cout<<"B";
    else if(n<80&&n>=70) cout<<"C";
    else if(n<70&&n>=60) cout<<"D";
    else cout<<"F";

}
