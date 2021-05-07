#include<vector>
using namespace std;

int solution(vector<int>& A) {
    int sz = A.size();
    if (sz < 3) { return 0; }

    vector<int> peaksVec;
    // detect all peaks
    for (int i = 1; i < sz - 1; i++) {
        if ((A[i] > A[i - 1]) && (A[i] > A[i + 1])) {
            peaksVec.push_back(i); i++;
        }
    }
    int numPeaks = peaksVec.size();
    if (numPeaks <= 1) { return numPeaks; }
    int ret = 0;

    // check all possible number of flags (sqrt(numPeaks))
    for (int f = 2; ((f - 1) * f) <= sz; f++) {
        int indP = 1; int setFlags = f - 1; int lastP = 0;
        // check if f flags is possible
        while ((indP < numPeaks) && (setFlags > 0)) {
            if ((peaksVec[indP] - peaksVec[lastP]) >= f) {
                lastP = indP;
                setFlags--;
            }
            indP++;
        }
        if (setFlags == 0) { ret = f; }
    }
    return ret;
}

int main(void) {
    vector<int> A(12);

        A[0] = 1;
        A[1] = 5;
        A[2] = 3;
        A[3] = 4;
        A[4] = 3;
        A[5] = 4;
        A[6] = 1;
        A[7] = 2;
        A[8] = 3;
        A[9] = 4;
        A[10] = 6;
        A[11] = 2;
        solution(A);

}