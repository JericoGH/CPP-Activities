#include <iostream>
using namespace std;

class Student {// constructors cannot be inherited, getter and setter is used as an alternative.
	public:
		string name;
		
		// setter
		void setName (string aName) {name = aName;}
		
		// getter
		string getName () {return name;}
		
		// object functions
		void introduceSelf () {
			cout << "Hello my name is " << name << endl;
		}
		
		void study () {
			cout << name << " is studying" << endl;
		}
};
// inheritance
// all of the functions the class "Student" has is passed to "LazyStudent"
class LazyStudent : public Student { // inheritance syntax
	public:
		void sleepInClass () {
			cout << name << " Slept in Class" << endl;
		}
		
		// overriding function
		void study () { // the variable "study" now has a different function inside LazyStudent only.
			cout << name << " is too lazy to study." << endl;
		}
};

class DiligentStudent : public Student {
	public:
		void study () {
			cout << "This nigga is studying twice as hard than anyone." << endl;
		}
	
};

int main () {
	Student student1;
	student1.setName("Jerico");
	student1.introduceSelf();
	student1.study();
	
	LazyStudent student2;
	student2.setName("NatNat");
	student2.introduceSelf();
	student2.study();
	student2.sleepInClass();
	
	DiligentStudent student3;
	student3.setName("Vince");
	student3.introduceSelf();
	student3.study();
}         