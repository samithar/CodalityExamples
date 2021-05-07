#include<vector>

using namespace std;

int solution(vector<int> &A) {
    if (A.size() == 1) return A[0];

    long long sum = 0;
    long long result = A[0];

    for (size_t i = 0; i < A.size(); i++) {
        if (sum + A[i] > 0) {
            sum = max<long long>(A[i], sum + A[i]);
            result = max<long long>(sum, result);
        }
        else {
            sum = 0;
            result = max<long long>(A[i], result);
        }
    }

    return result;

}
int main(void) {
	vector<int> A {-1,-5,-6,-1,-10 };
	solution(A);

}