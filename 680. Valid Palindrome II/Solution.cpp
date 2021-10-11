/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë11¤é
 *      Author: ICHIGO
 */
#include<string>
using namespace std;

class Solution {
public:
	bool validPalindrome(string s) {

		int i = 0;
		int j = s.size() - 1;

		while (i < j) {

			if (s[i] != s[j]) {
				return helper(s.substr(i, j - i))
						|| helper(s.substr(i + 1, j - i));
			}

			i++;
			j--;
		}
		return true;
	}

	bool helper(string s) {

		int i = 0;
		int j = s.size() - 1;

		while (i < j) {

			if (s[i++] != s[j--])
				return false;
		}

		return true;
	}
};
