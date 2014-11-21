#include <stdio.h>
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    return (josephus(n - 1, k) + k-1) % n + 1;
}
int main()
{
  int n,k;
  while(1){
  scanf("%d %d",&n,&k);
  if(n==0 && k==0) return 0;
  printf("%d %d %d \n",n,k, josephus(n, k));}
  return 0;
}