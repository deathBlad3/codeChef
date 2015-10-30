#include<stdio.h>
#include<map>
using namespace std;
long long maxOf(long long a,long long b){
  return a>b?a:b;
}
map<long long int,long long int> ti;

long long calcMaxCoins(long long n){
  if(n==0)
    return 0;
  else if(ti[n]!=0)
    return ti[n];
  long long t = calcMaxCoins(n/2)+calcMaxCoins(n/3)+calcMaxCoins(n/4);
  ti[n]=maxOf(t,n);
  return ti[n];
}

int main(){
  long long n;
  while(scanf("%lld",&n)!=EOF)
    printf("%lld\n",calcMaxCoins(n));
  return 0;
}
