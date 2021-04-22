// BinaryGap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
template <typename T, size_t N> const T* mybegin(const T(&a)[N]) { return a; }
template <typename T, size_t N> const T* myend(const T(&a)[N]) { return a + N; }
using namespace std;

int solution(int N) {
    int nbr_of_gap=10;
    int remainder;
    int cnt = 0;
    vector<int> binary_representation;
    vector<int> lengths;

    while (N != 0) {
        remainder = N % 2;
        N = N / 2;
        binary_representation.push_back(remainder);
    }
    reverse(binary_representation.begin(), binary_representation.end());


    
    for (auto i = binary_representation.begin(); i != binary_representation.end(); ++i) {
        if (*i == 1) {
            lengths.push_back(cnt);
            cnt = 0;

        }
        else if (*i == 0) {
            cnt++;
        }

   }
    
    int max = *max_element(lengths.begin(), lengths.end());
    return max;
}

int main()
{
   cout<< solution(529)<<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
