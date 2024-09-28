#include <iostream>
using namespace std ;
int main ()
{
    int num= 5 ,mask = 0, m;
    m = num ;
    if (num == 0 )
    {
        return 1;
    }
    while ( m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~num) & mask;
    cout << ans ;
}