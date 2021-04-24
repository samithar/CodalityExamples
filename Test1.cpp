#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int size = A.size();
    int ans=0;
    if (A[0]< 0 && A[size-1] < 0) {
        ans = 1; //all negative
    }
    else {
        for (int idx = 0; idx < A.size(); idx++)
        {
            if (A[idx] == ans)
                ans += 1;
        }
    }
    return ans;
}

int main(void) {
    vector<int> test{ 1, 3, 6, 4, 1, 2 };
    cout << solution(test);

}