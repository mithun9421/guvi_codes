#include<iostream>
using namespace std;
int main()
{
  int num,temp = 1;
  cin>>num;
  for(int i = 0; i < num; i++)
  {
    temp = temp * i; 
  }
  cout<<temp;
}
