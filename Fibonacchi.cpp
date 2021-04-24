#include<iostream>
#include<vector>
using namespace std;
//Prints first fib numbers until N
vector<int> Fib(int N) {
	int first = 1;
	int second = 1;
	vector<int> ret;
	ret.push_back(first);
	ret.push_back(second);
	int result=0;
	while (result < N) {
		result = first + second;
		if (result > N) break;
		ret.push_back(result);
		first = second;
		second = result;
	}
	return ret;
}

int main(void) {
	int r=5;
	vector<int> result = Fib(1000000);
	for (int i = 0; i < result.size(); ++i) {
		cout << result[i] <<endl;
	}
	return 0;
}