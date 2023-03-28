#include <bits/stdc++.h>

using namespace std;

int get_divisor(int n) {
  map<int, int> mp;
  for(int i=2; i*i<=n; ++i) {
    int count = 0;
    while(n%i != 0) {
      n /= i;
      ++count;
    }

    if(count)
      mp[i] = count;
  }
  if(n)
    mp[n] = 1;

  int ans = 1;
  for(auto it: mp) {
    int pw = 1;
    int sum = 0;
    for(int i=it.second+1; i>=1; --i){
    }
  }

  return n;
}

int main(void)
{
  int n;
  cin>>n;

  int sum = 1;
  for(int i=2; i<=n; ++i)
    sum += get_divisor(i);

  cout<<sum<<"\n";

  return 0;
}
