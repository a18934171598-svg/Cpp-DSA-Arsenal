#include<iostream>
#include<ctime>
using namespace std;
void getSeconds(unsigned long*);

int main() {

	unsigned long sec;

	getSeconds(&sec);
	cout<<"当前的时间是: "<< sec;
}

void  getSeconds(unsigned long *ptr){
	*ptr = time(NULL);
}