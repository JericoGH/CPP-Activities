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
		
		cout << fName << " " << lName << " is created." << endl;
		// #1. inside the parennthesis are parameters. It requires a data to be inputted in the parameter.
		// #3. the value of variables inside the parameter will then be passed to the variables of the class to be
		// #3. passed on the main class to be outputted.
	}
	
};

int main () {
	Info jerico ("Goco", "Jerico", 19, "DHVSU", "BSIT", "Reading");
	// #2. the string Goco will be passed to the parameter of lName_p, process repeats until the last parameter.
	Info lorenzo ("Delos Santos", "Lorenzo", 18, "DHVSU", "BSIT", "Playing Guitar");
	// #2. the string Delos Santos will be passed to the parameter of lName_p, process repeats until the last parameter.

	
	cout << "First Name: " << jerico.fName << endl;
	cout << "Last Name: " << jerico.lName << endl;
	cout << "Age: " << jerico.age << endl;
	cout << "School: " << jerico.school << endl;
	cout << "Degree: " << jerico.degree << endl;
	cout << "Hobbies: " << jerico.hobby << endl << endl;
	
	cout << "First Name: " << lorenzo.fName << endl;
	cout << "Last Name: " << lorenzo.lName << endl;
	cout << "Age: " << lorenzo.age << endl;
	cout << "School: " << lorenzo.school << endl;
	cout << "Degree: " << lorenzo.degree << endl;
	cout << "Hobbies: " << lorenzo.hobby << endl;
	
}