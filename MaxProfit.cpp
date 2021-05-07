#include<vector>
using namespace std;


int solution(vector<int>& A) {
    // write your code in C++11 (g++ 4.8.2)
    if (A.size() == 0) return 0;
    //finding the minimum value 
    int min_val = A[0];
    vector<int> vmin(A.size());
    for (size_t i = 0; i < A.size(); i++) {
        min_val = min(min_val, A[i]);
        vmin[i] = min_val;
    }

    vector<int> vmax(A.size());
    int max_val = A[int(A.size()) - 1];

    for (int i = int(A.size()) - 1; i >= 0; i--) {
        max_val = max(max_val, A[i]);
        vmax[i] = max_val;
    }

    int max_profit = 0;
    for (size_t i = 0; i < A.size(); i++) {
        max_profit = max(vmax[i] - vmin[i], max_profit);
    }

}
int main(void) {
    vector<int> A(6);
    A[0] = 23171;
    A[1] = 21011;
    A[2] = 21123;
    A[3] = 21366;
    A[4] = 21013;
    A[5] = 21367;
    solution(A);
}