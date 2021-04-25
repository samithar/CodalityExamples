#include <string>
#include<stack>
#include<iostream>
using namespace std;
int solution(string &S) {
	int input_size = S.length();
	stack<char> brackst_str;
	for (int i = 0; i < input_size; ++i) {
		if (S[i] == '(') {
			brackst_str.push(S[i]);
		}
		else if (S[i]==')'){
			if (brackst_str.empty()) {
				return 0;
			}
			else if (brackst_str.top() == '(') {
				brackst_str.pop();
			}
			else { //not closed
				return 0;
			}
		}

	}
	if (brackst_str.empty()) {
		return 1;
	}
	else {
		return 0;
	}
}
int main(void) {
	string S = "())";
	cout << solution(S) << endl;
}