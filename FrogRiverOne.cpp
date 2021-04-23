#include <iostream>
#include<vector>
#include<numeric>
#include<set>
using namespace std;

int solution(int X, vector<int>& A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> s;
    int cnt = (int)A.size();
    for (int i = 0; i < cnt; i++) {
        s.insert(A[i]);
        if ((int)s.size() == X) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    vector<int> test{ 1
        ,3
        ,1
        ,4
        ,2
        ,3
        ,5
        ,4 };

    cout << solution(5, test);
}