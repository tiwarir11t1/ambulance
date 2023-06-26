#include<bits/stdc++.h>
#include<climits>
using namespace std;
int LargestElement(int n)
{
  int max=INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (a[i]>max)  
    {
        max=a[i];
    }
    return max;
  }
  
}
int main(
    int a[10]={10,5,-8,6,8,15,50,25,-54,-98};
    int n=sizeof(a)/sizeof(a[0]);
    LargestElement(int n);
)