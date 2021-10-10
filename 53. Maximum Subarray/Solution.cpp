/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë10¤é
 *      Author: ICHIGO
 */

#include<vector>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int> &nums) {

		int sum = nums[0];
		int res = nums[0];

		for (int i = 1; i < nums.size(); i++) {

			sum = (sum < 0) ? nums[i] : sum + nums[i];
			res = max(res, sum);
		}

		return res;
	}
};
