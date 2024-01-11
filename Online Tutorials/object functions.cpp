#include <iostream>
using namespace std;

class Info  {
	public: // accessible to all classes
	string lName;
	string fName;
	string school;
	string degree;
	string hobby;
	int age;
	
	//constructor
	Info (string lName_p, string fName_p, int age_p, string school_p, string degree_p, string hobby_p) {
		lName = lName_p;
		fName = fName_p;
		age = age_p;
		school = school_p;
		degree = degree_p;
		hobby = hobby_p;
		
		cout << fName << " " << lName << " is created." << endl << endl;
	}
	
	string legalAge () { // example of an object functions. This function "legalAge" adds a function to an object
		if (age >= 18) {
			return "You are at legal age.";
		}
		else {
			return "You are minority age.";
		}
	}
};

int main () {
	Info jerico ("Goco", "Jerico", 19, "DHVSU", "BSIT", "Reading");
	Info lorenzo ("Delos Santos", "Lorenzo", 13, "DHVSU", "BSIT", "Playing Guitar");

	
	cout << "First Name: " << jerico.fName << endl;
	cout << "Last Name: " << jerico.lName << endl;
	cout << "Age: " << jerico.age << endl;
	cout << "School: " << jerico.school << endl;
	cout << "Degree: " << jerico.degree << endl;
	cout << "Hobbies: " << jerico.hobby << endl;
	cout << jerico.legalAge() << endl << endl;
	
	cout << "First Name: " << lorenzo.fName << endl;
	cout << "Last Name: " << lorenzo.lName << endl;
	cout << "Age: " << lorenzo.age << endl;
	cout << "School: " << lorenzo.school << endl;
	cout << "Degree: " << lorenzo.degree << endl;
	cout << "Hobbies: " << lorenzo.hobby << endl;
	cout << lorenzo.legalAge() << endl;
}