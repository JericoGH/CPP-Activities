#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct student {
	std::string studentName;
	int studentID, studentGrade[4];
};

struct grades {
	double highestGrade, averageGrade = 0;
};

std::string listStudentInfo [10] = {"Mark", "John", "Zo", "Gian", "Kate", "Izanagi", "Vince", "Yoshi", "Namatame", "Tenma"};
int listStudentInfo1 [5][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
								{90, 88, 98, 32, 67, 76, 86, 85, 67, 65},
								{56, 89, 65, 78, 97, 86, 87, 98, 87, 18},
								{97, 76, 97, 76, 92, 82, 86, 73, 87, 65},
								{84, 67, 87, 89, 90, 84, 92, 54, 87, 54}};
								
void grade_assign () {
	
	
};

//void grade_average(int studentGrade[0], int studentGrade[1], int studentGrade[2], int studentGrade[3]) {
//	grades gradeAve;
//	student studGrd;
//	for (int i = 0; i < 4; i++) {
//		gradeAve.averageGrade += studGrd.studentGrade[i];
//	}
//	gradeAve.averageGrade = gradeAve.averageGrade / 4;
//};


int main() {
	student newStudent[10];
	int i, j;
	
	for (i = 0; i < 10; i++) {
		newStudent[i].studentName = listStudentInfo[i];
		for (j = 1; j < 5; j++) {
			newStudent[i].studentGrade[j - 1] = listStudentInfo1[j][i];
		}
	};
	
	for (i = 0; i < 10; j++) {
		newStudent[i].studentID = listStudentInfo1[0][i];
	};
	
}

//1. Each Students should have multiple grades.
//2. Make a function that calculates their grades.
//3. Use 2d array to store student records?