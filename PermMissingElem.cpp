#include<iostream>
#include <vector>
#include <numeric>
using namespace std;

int solution(vector<int> &A) {
	int res = 0;
	long size = A.size();
	long sum = ((size + 1) * (size + 2)) / 2;
	long vec_sum = accumulate(A.begin(), A.end(), 0);
	return (int)sum-vec_sum;
}
int main(void) {
	vector<int> test{ 1,2,3,5 };
	cout << solution(test) << endl;

}