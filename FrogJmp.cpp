#include <iostream>
using namespace std;

int solution(int X, int Y, int D) {
	int res= (int)((Y - X)/D);
	if ((Y-X)%D!=0) {
		return res+1;
	}
	else {
		return res;
	}

}
int main(void) {
	cout<<solution(10, 85, 30)<<endl;
}