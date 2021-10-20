/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë16¤é
 *      Author: ICHIGO
 */
#include <vector>
using namespace std;

class Solution {
public:
	int pivotIndex(vector<int> &nums) {

		int sum = 0;
		for (const int &item : nums)
			sum += item;

		int preSum = 0;
		for (int i = 0; i < nums.size(); i++) {

			if (preSum == sum - nums[i] - preSum)
				return i;

			preSum += nums[i];
		}

		return -1;
	}
};

