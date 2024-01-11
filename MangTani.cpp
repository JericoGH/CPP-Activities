#include <iostream>
using namespace std;

struct Item {
	string name;
	int quantity;
	Item (string n, int q) : name(n), quantity(q) {}	
};

class Inventory {
	private:
		Item candies, chips, iceCream, bread, fruits;
	
	public:
		Inventory (int c, int ch, int iC, int b, int f) : 
			candies("Candies", c), chips("Chips", ch), iceCream("Ice Cream", iC),
			bread("Bread", b), fruits("Fruits", f) {}
		
	void totalInventory() {
		int total = candies.quantity + chips.quantity + iceCream.quantity + bread.quantity + fruits.quantity;
		cout << "MANG TANI SARI-SARI STORE\nPoint of Sale System" << endl;
		cout << candies.name << ": " << candies.quantity << endl;
		cout << chips.name << ": " << chips.quantity << endl;
		cout << iceCream.name << ": " << iceCream.quantity << endl;
		cout << bread.name << ": " << bread.quantity << endl;
		cout << fruits.name << ": " << fruits.quantity << endl;
		cout << "Total Inventory: " << total << endl;
	}	
};
	

int main () {
	
	Inventory mangTani(200, 100, 30, 60, 100);
	mangTani.totalInventory();

}