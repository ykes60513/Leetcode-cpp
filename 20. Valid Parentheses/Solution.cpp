/*
 * Solution.cpp
 *
 *  Created on: 2021¦~10¤ë10¤é
 *      Author: ICHIGO
 */
#include<stack>
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	bool isValid(string s) {

		stack<int> stack;

		for(int i = 0; i < s.size(); i++){

			char c = s[i];

			if(c==')'){
				if(stack.empty())
					return false;
				else if(stack.top()=='(')
					stack.pop();
				else
					stack.push(c);
			}else if(c==']'){
				if(stack.empty())
					return false;
				else if(stack.top() == '[')
					stack.pop();
				else
					stack.push(c);
			}else if(c=='}'){
				if(stack.empty())
					return false;
				else if(stack.top() == '{')
					stack.pop();
				else
					stack.push(c);
			}else
				stack.push(c);

		}

		return stack.empty();
	}
};

