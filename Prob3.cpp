#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void data_copy(char* pStr) {
	struct data {
		uint8_t c[32];
		uint32_t value;
	};
	struct data x = { {},0x12345678 };
	printf("%08x\n", x.value);
}
int main(void) {
	char* str ="This is the string passed for c \x30\x30\x7A\x42";
	data_copy();

}