#include<vector>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int solution(vector<int>& A) {
	int solution = 0;
	vector<int> Res;
	sort(A.begin(), A.end());
	
	Res.push_back(A[0] * A[1] * A[2]);
	Res.push_back(A[A.size()-1] * A[A.size() - 2] * A[A.size() - 3]);
	Res.push_back(A[0] * A[1] * A[A.size() - 1]);
	//Res.push_back(A[0] * A[A.size() - 1] * A[A.size() - 2]);
	sort(Res.begin(), Res.end());
	return Res[2];
}
int main(void) {
	vector<int> test{ -3,1,2,-2,5,6 };

	cout << solution(test) << endl;
}