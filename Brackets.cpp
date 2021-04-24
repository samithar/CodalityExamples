#include <stack>
#include<string>
using namespace std;

int solution(string &S) {
    // write your code in C++11 (g++ 4.8.2)

    stack<char> k;
    for (int i = 0; i < S.size(); ++i) {
        char c = S[i];
        //    cout << c << endl;
        if ('(' == c || '{' == c || '[' == c) {
            k.push(c);
        }
        else {
            if (k.empty()) return 0;
            char t = k.top();

            if ('}' == c && '{' != t) return 0;
            if (']' == c && '[' != t) return 0;
            if (')' == c && '(' != t) return 0;
            k.pop();
        }
    }
    if (k.empty())
        return 1;
    else
        return 0;
}
