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
	vector<int> findDiagonalOrder(vector<vector<int>> &mat) {

		vector<int> ans;

		int m = mat.size();
		int n = mat[0].size();

		int row = 0;
		int col = 0;
		int d = 1;

		for (int i = 0; i < m * n; i++) {

			ans.push_back(mat[row][col]);
			row -= d;
			col += d;

			if (row >= m) {
				row = m - 1;
				col += 2;
				d = -d;
			}
			if (col >= n) {
				col = n - 1;
				row += 2;
				d = -d;
			}
			if (row < 0) {
				row = 0;
				d = -d;
			}
			if (col < 0) {
				col = 0;
				d = -d;
			}

		}

		return ans;
	}
};

