#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int solution(vector<int> &A) {
	int retval = 0;
	if (A.size() < 3) {
		return 0;
	}
	sort(A.begin(), A.end());
	for (int i = 2; i < A.size(); ++i) {
		double P = A[i - 2];
		double Q = A[i - 1];
		int R = A[i];
		if ((P+ Q) > R) {
			retval=1;
			break;
		}
		else {
			retval = 0;
		}
	}
	return retval;
}

int main(void) {
	vector<int> S;
	S = { 10,2,5,1,8,20 };
	solution(S);
}