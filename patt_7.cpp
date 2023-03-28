#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int n = 5;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<(n-i-1); ++j)
      cout<<" ";
    int stars = (i*2) + 1;
    for(int k=0; k<stars; ++k)
      cout<<"*";
    cout<<"\n";
  }
  for(int i=n; i>0; --i) {
    for(int j=0; j<=(n-i-1); ++j)
      cout<<" ";
    int stars = (i*2) - 1;
    for(int k=stars; k>0; --k)
      cout<<"*";
    cout<<"\n";
  }
  return 0;
}
