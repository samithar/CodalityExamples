#include <iostream>
#include <vector>
using namespace std;


vector<int> solution(vector<int> &A, int K) {
	if (A.empty()) {
		return A;
	}
	else if (K == 0) {
		return A;
	}
	else {
		for (int i = 0; i < K; i++) {
			int last = A.back();
			A.pop_back();
			A.insert(A.begin(), last);
		}
		return A;
	}
}
int main(void) {
	vector<int> testval{ 1,2,3,4 };
	solution(testval, 1);
	for (auto i = testval.begin(); i != testval.end(); ++i)
	{
		cout << *i << ','<<endl;
	}

}