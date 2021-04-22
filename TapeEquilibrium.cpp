#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int solution(vector<int> &A) {

	vector<int> p,n,diff;
	for (int i = 1; i < (int)A.size(); ++i) {
		n =vector<int>(A.begin() + i, A.end());
		p= vector<int>(A.begin(), (A.end()-(A.size()-i)));
		int sum_p =accumulate(n.begin(), n.end(), 0);
		int sum_n=accumulate(p.begin(), p.end(), 0);
		int abs_diff = abs(sum_n - sum_p);
		diff.push_back(abs_diff);
		
	}
	return *min_element(diff.begin(), diff.end());
}
int main(void) {
	vector<int> test{ 3,1,2,4,3 };
	cout<<solution(test)<<endl;

}