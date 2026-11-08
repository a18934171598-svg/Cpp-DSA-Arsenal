//#include<iostream>
//using namespace std;
//
//class Person {
//private:
//	string name;
//	int height;
//public:
//	void showInfo();
//	Person(string,int);
//	~Person();
//};
//// 成员函数的定义
//void Person::showInfo() {
//	cout << "我的姓名: " << name<< endl<<"身高 : "<<height<<"cm"<<endl;
//}
//// 带参数 初始化列表初始化
//Person::Person(string n,int h): name(n),height(h){
//	/*name = n;
//	height = h;*/
//	cout << "Person is being created!" << endl;
//}
//
//Person:: ~Person() {
//	cout << "Person is being deleted" << endl;
//}
//
//int main() {
//	Person XieTingfeng("谢霆锋",180);
//
//	XieTingfeng.showInfo();
//}