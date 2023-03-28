#include<bits/stdc++.h>

using namespace std;

int main(void) {
  int i = 5;
  while(i > 0) {
    for(int j=1; j<=i; ++j)
      cout<<j;
    --i;
    cout<<"\n";
  }
  return 0;
}
