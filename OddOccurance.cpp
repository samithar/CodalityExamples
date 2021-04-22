#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int>&A) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 0;
    for (int i = 0; i < (int)A.size(); i++) {
        result =result^ A[i];
    }

    return result;
}

int main(void) {
    vector<int> A{ 1,1,5,2,3,2,3 };
    cout << solution(A) << endl;
}