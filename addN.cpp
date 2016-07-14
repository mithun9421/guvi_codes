#include <iostream>
using namespace std;
int main()
{
    int a[100],count=0,num;
    cin>>num;
    for(int i = 0;i<num;i++)
    {
        cin>>a[i];
        count = count+a[i];
        //cout<<count;
    }
    cout<<count;
    return 0;
}
