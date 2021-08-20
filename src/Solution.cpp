//
// Created by Kamalkhan Artykbayev on 19.08.2021.
//

#include "Solution.h"
#include "map"
#include "vector"

Solution::Solution() {
}

Solution::~Solution() {
}

vector<int> Solution::twoSum(vector<int> &nums, int target) {
    map<int, int> m;
    vector<int> v;
    for (int i = 0; i <= nums.size(); i++) {
        if (m.find(target - nums[i]) != m.end()) {
            v.push_back(m[target - nums[i]]);
            v.push_back(i);
            return v;

        }
        m[nums[i]] = i;
    }
    return v;
}



