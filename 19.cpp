#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int n = 5;
  for(int i=n; i>=1; --i) {
    for(int j=i; j>=1; --j) {
      cout<<"*";
    }
    for(int k=0; k<=(10-2*i); ++k) {
      cout<<" ";
    }
   for(int j=i; j>=1; --j) {
    cout<<"*";
    }
   cout<<"\n";
  }
   for(int i=1; i<=n; ++i) {
    for(int j=1; j<=i; ++j) {
      cout<<"*";
    }
    for(int k=(10-2*i); k>=0; --k) {
      cout<<" ";
    }
   for(int j=1; j<=i; ++j) {
    cout<<"*";
    }
   cout<<"\n";
  }
  return 0;
}
