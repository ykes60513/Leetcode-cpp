/*
 * Solution2.cpp
 *
 *  Created on: 2021¦~10¤ë20¤é
 *      Author: ICHIGO
 */
#include<vector>
using namespace std;

class Solution2 {
public:
	vector<int> plusOne(vector<int> &digits) {

		for (int i = digits.size() - 1; i >= 0; i--) {

			if (digits[i]++ < 9)
				return digits;

			digits[i] = 0;
		}

		vector<int> newNum(digits.size() + 1, 0);
		newNum[0] = 1;
		return newNum;

	}
};

