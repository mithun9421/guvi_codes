#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
        cout<<"A is bigger";
        else if(b>c)
            cout<<"B is bigger";
            else
                cout<<"C is bigger";
    return 0;
}
