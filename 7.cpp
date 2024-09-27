# include <iostream>
using namespace std ;
int main ()
{
    int inp , num = 0 , sum = 0 ;
    cin >> inp ;
    while (inp != 0)
    {
        num = inp % 10 ;
        if ((sum > INT_MAX/10) || (sum < INT_MIN/10))
        {
            return 0;
        }
        sum = ( sum * 10 ) + num ;
        inp = inp / 10 ;
    }
    cout << sum << endl;
}