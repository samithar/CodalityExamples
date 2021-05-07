#include <cassert>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#define SIZE 10000000
int num[SIZE];
int top_ptr=-1;

class Solution {
public:
    Solution() {
        // write your code in C++14 (g++ 6.2.0)

    }

    int isEmpty() {
        if (top_ptr == -1)
            return 1;
        else
            return 0;
    }

    int isFull() {
        if (top_ptr == (SIZE - 1))
            return 1;
        else
            return 0;
    }

    void push(int value) { //this should return value as to indiate whether can be pushed or not
        if (!isFull()) { //not full, insert
        ++top_ptr;
        num[top_ptr] = value;
        }
    }

    int top() {
        return num[top_ptr];
    }

    void pop() {
        if (!isEmpty()) {
            //temp = num[top]; returning the top
            --top_ptr;
        }
    }

    void begin() {
    }

    bool rollback() {
    }

    bool commit() {
    }
};


void test() {
    // Define your tests here
   // Solution sol;
   // sol.push(42);
   // assert(sol.top() == 42);
}

int main() {
    Solution sol;
    sol.push(42);
}