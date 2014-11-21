#include <stdio.h>
#include <stdlib.h>
long long int  _mergeSort(int arr[], int temp[], int left, int right);
long long int merge(int arr[], int temp[], int left, int mid, int right);
long long int mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
long long int _mergeSort(int arr[], int temp[], int left, int right)
{
  int mid;
  long long int inv_count=0;
  if (right > left)
  {
    mid = (right + left)/2;
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
long long int merge(int arr[], int temp[], int left, int mid, int right)
{
  int i, j, k;
  long long int inv_count = 0;

  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      inv_count = inv_count + (mid - i);
    }
  }
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  return inv_count;
}
int main(int argv, char** args)
{
    int n,m,x,y;
    long long int ans;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++) brr[i]=arr[i];
    ans=mergeSort(arr, n);
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        scanf("%d",&x);
        scanf("%d",&y);
        for(int i=0;i<x-1;i++){
        if(brr[i]>brr[x-1] && brr[i]<=y) ans--;
        if(brr[i]<=brr[x-1] && brr[i]>y) ans++;}
        for(int i=x;i<n;i++){
        if(brr[i]<brr[x-1] && brr[i]>=y) ans--;
        if(brr[i]>=brr[x-1] && brr[i]<y) ans++;}
        brr[x-1]=y;
  printf("%lld \n",ans);
  getchar();}
  return 0;
}

