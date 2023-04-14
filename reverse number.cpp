#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n>0)
  {
    int ld=n%10;
    int revNum=(revNum*10)+ld;
    n=n/10;
  }
  cout<<revNum<<endl;
}
