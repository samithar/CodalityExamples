#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Student {
public:
	int age;
	string name;
};

queue<Student> puttoQ(Student &s) {
	queue<Student> studentqueue;
	studentqueue.push(s);
	return studentqueue;
}


int main(void) {
	Student Sam;
	Sam.age = 30;
	Sam.name = "Sam";

	Student Mike{ 40,"mike" };


	queue<Student> somequeue;
	somequeue=puttoQ(Sam);


	somequeue.push(Student{ 20,"PushTest" });

	Student copy;
	copy = somequeue.back();
	cout << copy.name<<endl;
	cout << copy.age<<endl;

}