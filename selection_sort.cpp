#include <bits/stdc++.h>

using namespace std;

void my_swap(int *a, int *b) {
  cout<<"******************\n";
  cout<<a<<" "<<b<<"\n";
  int c;
  c = *a;
  *a = *b;
  *b = c;
  cout<<a<<" "<<b<<"\n";
  cout<<"******************\n";
}

void selection_sort(vector<int> &arr) {
  int len = arr.size();
  for (int i=0; i<len; ++i) {
    int min_idx = i;
    for (int j=i+1; j<=len; ++j) {
      if (arr[min_idx] > arr[j]) {
        min_idx = j;
//        cout<<min_idx<<"\n";
      }
    }
    swap(arr[i], arr[min_idx]);
    for(auto i: arr) {
      cout<<i<<" ";
    }
    cout<<"\n";
  }
}



int main() {
/*
  vector<int> arr;
  int num;

  while(cin>>num) {
    arr.push_back(num);
  }
*/
  vector<int> arr = {9,20,25,3,5,1};

  selection_sort(arr);


  return 0;
}
