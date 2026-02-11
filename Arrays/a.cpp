#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int i = 0;
    
    for (int j = 1; j < nums.size(); j++) {
      if (nums[j] != nums[i]) {
        nums[i + 1] = nums[j];
        i++;
      }
    }

    return (i + 1);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  Solution sol;

  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    cout << sol.removeDuplicates(nums) << "\n";
  }

  return 0;
}