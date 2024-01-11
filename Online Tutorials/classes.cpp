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
	// it is automatically called when an object with a class "INFO" is created.
	Info () {
		cout << "A user is created." << endl;
	}
	
};

int main () {
	Info jerico; // creates an object.
	jerico.fName = "Jerico";
	jerico.lName = "Goco";
	jerico.age = 19;
	jerico.school = "DHVSU";
	jerico.degree = "Bachelor of Science in Information Technology";
	jerico.hobby = "Reading";
	
	Info lorenzo; // creates anoother object without requiring new placeholder.
	lorenzo.fName = "Lorenzo";
	lorenzo.lName = "Delos Santos";
	lorenzo.age = 19;
	lorenzo.school = "DHVSU";
	lorenzo.degree = "BSIT";
	lorenzo.hobby = "Playing Guitar";
	
	
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