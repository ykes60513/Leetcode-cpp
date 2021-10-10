/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë10¤é
 *      Author: ICHIGO
 */
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s = "";

        for(int i = 0; i < strs[0].length(); i++){

            char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++){

            	if( i >= strs[j].length() || strs[j][i] != c)
            		return s;
            }

            s = s + c;
        }
        return strs[0];
    }
};
