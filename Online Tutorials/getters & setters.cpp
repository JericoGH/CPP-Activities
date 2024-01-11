#include <iostream>
using namespace std;

class Info  { // think of class as a blueprint of an object.
	private: // can only be accessed in this class, execpt a getter is used.
	string dept;
	
	public: // accessible to all classes
	string lName;
	string fName;
	string school;
	string degree;
	string hobby;
	int age;
	
	//constructor
	// #2 dept_p now has the value and it will pass it to setDept.
	Info (string lName_p, string fName_p, int age_p, string school_p, string degree_p, string dept_p, string hobby_p) {
		lName = lName_p;
		fName = fName_p;
		age = age_p;
		school = school_p;
		degree = degree_p;
		setDept(dept_p);
		hobby = hobby_p;
		
		cout << fName << " " << lName << " is created." << endl << endl;
	}
	
	// getter function. "dept" variable is now accessible via getDept.
	string getDept() { 
		return dept;
	}
	// #3 setDept now has the value, With a satisfied condition, the dept will obtain the data.
	void setDept (string dept_p) {
		if (dept_p == "CCS" || dept_p == "CEA" || dept_p == "LAW" || dept_p == "CHTM" || dept_p == "CSSP") {
			dept = dept_p;
		}
		else dept = "Invalid Department";
	}
	
	string legalAge() {
		if (age >= 18) {
			return "You are at legal age.";
		}
		else {
			return "You are minority age.";
		}
	}
};

int main () {
	// #1 this data will be passed to the constructor.
	Info jerico ("Goco", "Jerico", 19, "DHVSU", "BSIT", "CCS", "Reading");
	Info lorenzo ("Delos Santos", "Lorenzo", 13, "DHVSU", "BSIT", "CEA", "Playing Guitar");
	
	cout << "First Name: " << jerico.fName << endl;
	cout << "Last Name: " << jerico.lName << endl;
	cout << "Age: " << jerico.age << endl;
	cout << "School: " << jerico.school << endl;
	cout << "Degree: " << jerico.degree << endl;
	// #4 dept now has the value, since the value of dept is accessible via getDept, we use getDept for output.
	cout << "Department: " << jerico.getDept() << endl;
	cout << "Hobbies: " << jerico.hobby << endl;
	cout << jerico.legalAge() << endl << endl;
	
	cout << "First Name: " << lorenzo.fName << endl;
	cout << "Last Name: " << lorenzo.lName << endl;
	cout << "Age: " << lorenzo.age << endl;
	cout << "School: " << lorenzo.school << endl;
	cout << "Degree: " << lorenzo.degree << endl;
	cout << "Department: " << lorenzo.getDept() << endl;
	cout << "Hobbies: " << lorenzo.hobby << endl;
	cout << lorenzo.legalAge() << endl;
}