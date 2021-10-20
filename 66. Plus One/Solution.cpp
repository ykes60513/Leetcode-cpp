/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë20¤é
 *      Author: ICHIGO
 */
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int> &digits) {

		vector<int> ans;

		int t = digits[digits.size() - 1] + 1;
		int carry = t / 10;
		int num = t % 10;
		ans.push_back(num);

		for (int i = digits.size() - 2; i >= 0; i--) {

			num = digits[i] + carry;

			ans.insert(ans.begin(), num % 10);

			carry = num / 10;

		}

		if (carry != 0)
			ans.insert(ans.begin(), carry);

		return ans;

	}
};

