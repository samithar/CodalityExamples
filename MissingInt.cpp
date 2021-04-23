#include<set>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int>& A) {
	
		int missing = 1;

		sort(A.begin(), A.end());

		for (int idx = 0; idx < A.size(); idx++)
		{
			if (A[idx] == missing)
				missing += 1;
		}

		return missing;
	
}
int main(void) {
	vector<int> test{ -1,-2,10 };
	cout << solution(test) << endl;
}