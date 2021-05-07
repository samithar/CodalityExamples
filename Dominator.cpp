#include <stack>
#include <iostream>
#include<vector>

using namespace std;

int solution(vector<int>& A) {
    // write your code in C++11 (g++ 4.8.2)
    stack<int> S;
    for (auto i : A) {
        if (!S.empty() && S.top() != i)
            S.pop();
        else
            S.push(i);
    }
    if (S.empty()) return -1;
    int candidate = S.top();
    int count = 0;
    int N = A.size();
    for (auto it = A.begin(); it < A.end(); ++it) {
        if (candidate == *it) ++count;
        if (count > N / 2) return (it - A.begin());
    }
  //  for (int i = 0; i < A.size(); i++) {
  //      if (candidate == A[i]) {
  //          return i;
  //      }
  //  }
    return -1;
}

int main(void) {
    vector<int> A;

    A = { 3,4,3,2,3,-1,3,3 };
    cout << solution(A) << endl;
}