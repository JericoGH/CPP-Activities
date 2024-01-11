#include <iostream>
using namespace std;

int main () {
	string arr[2][7] = {{"Student Name", "ENGLISH", "MATH", "SCIENCE", "ICT", "AVERAGE"}, 
						{"Claire", "Cheska", "Shaira", "Adrian", "Aden  ", "Mark  ", "Rafael"}};
	float arr2[5][7] = {{90, 95, 91, 85, 87, 80, 81}, {85, 80, 92, 89, 92, 78, 85},
						{95, 85, 97, 87, 86, 77, 75}, {91, 89, 89, 92, 93, 75, 87},
						{90.25, 87.25, 92.25, 88.25, 89.50, 77.50, 82.00}};
						
	for (int i = 0; i < 6; i++) {
		cout << arr[0][i] << "     ";
	}
	cout << endl;
	
	for (int j = 0; j < 7; j++) {
		cout << "   " << arr[1][j] << "     ";
		for (int k = 0; k < 5; k++) {
			cout << "   " << arr2[k][j] << "      ";
		}
		cout << endl;
	}
	double totalAve;
	for (int l = 0; l < 7; l++) {
	totalAve += arr2[4][l];
	}
	totalAve = totalAve / 7;
	
	cout << "No. of Students: 7\t" << "Total Class Average: " << totalAve;
}