#include<iostream>
#include<vector>
#include<set>
using namespace std;

int solution(vector<int>& A) {
	set<int> Set1;
	for (int i = 0; i < A.size(); ++i) {
		Set1.insert(A[i]);
	}
	return Set1.size();
}
void main(void) {
	vector<int> test{ 1,2,3,1,2,1 };
	cout << solution(test) << endl;
}