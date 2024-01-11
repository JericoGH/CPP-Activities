#include <iostream>
using namespace std;

// structure is set to public by default. They are similar about everything other than that.
struct Tao {
	string pangalan;
	int edad;
	
};
// class is set to private by default.
class Person {
	public:
	string name;
	int age;
	
};

int main () {
	Tao unangTao;
	unangTao.pangalan = "Doremi";
	unangTao.edad = 11;
	
	Person person1;
	person1.name = "Sander";
	person1.age = 19;
}