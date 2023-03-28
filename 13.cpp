#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int n = 5;
  char last = 65;
  for(int i=1; i<=n; ++i) {
    char count = i;
    while(count--) {
      cout<<last<<" ";
      ++last;
    }
    cout<<"\n";
  }
  return 0;
}
