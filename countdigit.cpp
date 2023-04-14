#include<iostream>
using namespace std;
int count(int n)
{
while(n>0)
{
int lastdigit=n%10;
count=count+1;
n/=10;
}
return count;
}
