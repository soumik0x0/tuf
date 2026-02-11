#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums) {
        int temp = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            nums[i - 1] = nums[i];
        }

        nums[nums.size() - 1] = temp;
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

        sol.rotate(nums);

        for (const auto& it : nums) {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}