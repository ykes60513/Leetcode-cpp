/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë11¤é
 *      Author: ICHIGO
 */
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:

	int romanToInt(string s) {

		int ans = 0;
		int last = INT_MAX;

		for (int i = 0; i < s.size(); i++) {

			if (map[s[i]] > last)
				ans += (map[s[i]] - 2 * last);
			else
				ans += map[s[i]];

			last = map[s[i]];
		}

		return ans;
	}

private:
	static unordered_map<char, int> map;
};

unordered_map<char, int> Solution::map = {
		{ 'I', 1 },
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },
		{ 'D', 500 },
		{ 'M', 1000 }
};
