#include<iostream>
int main()
{
  cin>>a>>b;
  cin>>limit;
  do
  {
    temp = a + b;
    b = a;
    a = temp;
  }while(temp<limit)
  cout<<temp;
}
