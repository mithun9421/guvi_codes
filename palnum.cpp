#include <iostream>
using namespace std;
int main()
{
    int num,moddev;
    cin>>num;
    int temp = num;
    int count=0;
    while(num!=0)
    {
         moddev = num%10;
     count = (count*10)+moddev;

     num = num/10;
    }
   //cout<<count;
   if(temp == count)
    cout<<"palindrome";
    else
    cout<<"Not a palindrome";
    return 0;
}
