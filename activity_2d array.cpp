#include <iostream>
using namespace std;

int main () {
	
	char ccsFox[3][3] = {{'C', 'C', 'S'}, {'F', 'O', 'X'}};
	
	for(int i = 0; i < 3; i++){
		cout << ccsFox[0][i] << " ";
	}
	cout << endl;
		for(int j = 0; j < 3; j++){
		cout << ccsFox[1][j] << " ";
	}
}