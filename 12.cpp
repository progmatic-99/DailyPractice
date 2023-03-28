#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int n = 4;
  for(int i=1; i<=n; ++i) {
    for(int j=1; j<=i; ++j)
      cout<<j;
    for(int k=1; k<=(8-(2*i)); ++k)
      cout<<" ";
    for(int p=i; p>=1; --p)
      cout<<p;
    cout<<"\n";
  }
  return 0;
}
