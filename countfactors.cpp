using namespace std;

int solution(int N) {
    unsigned int i = 1;
    int num = 0;
    while (i * i < (unsigned int)N) {
        if (N % i == 0) {
            num += 2;
        }

        i++;
    }
    return num + 1;
}
int main(void) {
	solution(24);
}