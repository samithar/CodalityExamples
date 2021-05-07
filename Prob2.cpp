#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void AddNemaTail(unsigned char* msg) {


	unsigned char Checksum;
	unsigned int Pos;
	unsigned char TempStr[6];
	Checksum = 0;
	for (Pos = 1; msg[Pos]; Checksum ^= msg[Pos++]) {
		;
	}
	sprintf(TempStr, "*%2X\r\n", Checksum);
	strcat(msg, TempStr);
}