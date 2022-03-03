#include<bits/stdc++.h>
using namespace std;
void orderedMatrix(int a,int b)
{
  int arr[a][b];
  int count=1;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      arr[i][j]=count++;
    }
  }

  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int a,b;
  cin>>a>>b;
  orderedMatrix(a,b);
  return 0;
}