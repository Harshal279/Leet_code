# include <iostream>
using namespace std;
int main ()
{
    int inp ;
    int sum =0 ;
    int num ;
    cin >> inp ;
    while (inp!=0)
    {
        num = inp%10;
        cout << "num"<<num << endl;
        inp = inp/10 ;
        if (num==1)
        {
            sum = sum + num ;
            cout <<"sum"<< sum << endl;
        }
        cout <<"inp"<<inp << endl;
        
    }
    cout << sum << endl;
}