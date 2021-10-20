/*
 * main.cpp
 *
 *  Created on: 2021¦~10¤ë16¤é
 *      Author: ICHIGO
 */

#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main() {

	int ans[5] = { 3, 1, 2 };
	cout << ans[1] << endl;

	int size = sizeof(ans) / sizeof(*ans);
	cout << size << endl;

	sort(ans, ans + size);

	for (const int &item : ans)
		cout << item << " ";

	cout<<endl;

	sort(ans, ans + size, greater<int>());
	for(const int& item : ans)
		cout<< item << " ";

	return 0;

}

