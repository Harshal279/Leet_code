#include <iostream>
using namespace std ;
int main()
{   int n ;   
    int sum = 0;
    int prod = 1;
    cin >> n ;
    while (n!=0)
    {
        int num = n%10 ;
        sum = sum + num ;
        prod = prod * num ;
        n = n/10;
    }
    int answer = prod - sum ;
    cout << answer;

}
