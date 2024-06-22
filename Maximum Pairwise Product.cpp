#include <bits/stdc++.h>
using namespace std;

long long maxPairwiseProduct(const vector<int>& nums) {
    int n = nums.size();
    if (n < 2) {
        throw invalid_argument("Array must contain at least two elements.");
    }

    int max1 = max(nums[0], nums[1]);
    int max2 = min(nums[0], nums[1]);

    for (int i = 2; i < n; ++i) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }

    return static_cast<long long>(max1) * max2;
}

int main() {
    vector<int> nums = {10, 22, 5, 75, 65, 80, 30, 45};

    try {
        long long result = maxPairwiseProduct(nums);
        cout << "The maximum pairwise product is: " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
