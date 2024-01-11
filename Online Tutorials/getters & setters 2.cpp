#include <iostream>
using namespace std;

class Shirt {
	private:
		string Size;
		
	public:
		string Brand;
		string Color;
		
	Shirt (string aBrand, string aColor, string aSize) {
		Brand = aBrand;
		Color = aColor;
		setSize(aSize);
		
		cout << "You have created a shirt";
	}
	string getSize () {
		return Size;
	}
	
	void setSize (string aSize) {
		if (aSize == "XS" || aSize == "S" || aSize == "M" || aSize == "L" || aSize == "XL") {
			Size = aSize;
		}
		else Size = "Invalid Size";
	}
};

int main () {
	 Shirt outdoor ("Uniqlo", "Black", "S");
	 cout << outdoor.getSize();
}