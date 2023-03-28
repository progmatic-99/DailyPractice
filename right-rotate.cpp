#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (b==0) {
    cout<<a<<"\n";
    return a;
  }
  else
    return gcd(b, a%b);
}

int main(void) {
  int arr[2] = {1,2};
  int d = 3;
  int n = 2;

  d = d - n;
  d = d % n;
  cout<<"d = "<<d<<"\n";
  int i, j, k, tmp;
  int g_c_d = gcd(d, n);

  for(i = 0; i<g_c_d; ++i) {
    tmp = arr[i];
    j = i;

    while(true) {
      k = j+d;
      if (k>=n)  k-=n;
      if (k == i) break;

      arr[j] = arr[k];
      j = k;
    }
    arr[j] = tmp;
  }

  for(int i=0; i<n; ++i)  cout<<arr[i]<<" ";
}
