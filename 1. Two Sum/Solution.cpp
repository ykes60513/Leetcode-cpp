/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë10¤é
 *      Author: ICHIGO
 */
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {

	vector<int> twoSum(vector<int> &nums, int target) {

		unordered_map<int, int> map;
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			int numberToFind = target - nums[i];

			//if numberToFind is found in map, return them
			if (map.find(numberToFind) != map.end()) {
				//+1 because indices are NOT zero based
				result.push_back(map[numberToFind] + 1);
				result.push_back(i + 1);
				return result;
			}

			//number was not found. Put it in the map.
			map[nums[i]] = i;
		}
		return result;
	}
};
