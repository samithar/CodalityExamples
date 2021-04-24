#include <vector>

using namespace std;

int solution(vector<int>& A, vector<int>& B) {
    const size_t N = A.size();
    vector<int> stack;
    int bodycount = 0;
    for (size_t i = 0; i < N; ++i) {
        if (B[i]) {
            stack.push_back(A[i]);
        }
        else {
            while (stack.size() && stack.back() < A[i]) {
                stack.pop_back();
                ++bodycount;
            }
            if (stack.size()) {
                ++bodycount;
            }
        }
    }
    return N - bodycount;
}

int main(void) {
    vector<int> A {4,3,2,1,5};
    vector<int> B {0,1,0,0,0};
    solution(A, B);


}