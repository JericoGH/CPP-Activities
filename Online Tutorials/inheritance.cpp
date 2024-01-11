#include <iostream>
using namespace std;
// INHERITANCE IS NOT POSSIBLE WHEN CONSTRUCTORS ARE USED INSIDE A CLASS TO BE INHERITED FROM.
class Info  { // think of class as a blueprint of an object.
	private: // accessible inl in this class
	string dept;
	
	public: // accessible to all classes
	string lName;
	string fName;
	string school;
	string degree;
	string hobby;
	int age;
	
	//constructor
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
	
	string getDept() { 
		return dept;
	}
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

class Info_VIP : public Info {
	public:
	void three_sizes () {
		cout << "1, 2, 3" << endl;;
	}
};

int main () {
	Info jerico ("Goco", "Jerico", 19, "DHVSU", "BSIT", "CCS", "Reading");
	Info lorenzo ("Delos Santos", "Lorenzo", 13, "DHVSU", "BSIT", "CEA", "Playing Guitar");
	Info_VIP sam ("Pauco", "Sam", 19, "HAU", "BSEMC", "SOC", "Drawing");

	
	cout << "First Name: " << jerico.fName << endl;
	cout << "Last Name: " << jerico.lName << endl;
	cout << "Age: " << jerico.age << endl;
	cout << "School: " << jerico.school << endl;
	cout << "Degree: " << jerico.degree << endl;
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
	
	cout << "First Name: " << sam.fName << endl;
	cout << "Last Name: " << sam.lName << endl;
	cout << "Age: " << sam.age << endl;
	cout << "School: " << sam.school << endl;
	cout << "Degree: " << sam.degree << endl;
	cout << "Department: " << sam.getDept() << endl;
	cout << "Hobbies: " << sam.hobby << endl;
	cout << sam.legalAge() << endl;
	cout << sam.three_sizes();
}