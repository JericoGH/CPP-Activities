#include <iostream>
#include <vector>    //This library is used to access/use vector and its functions.
#include <cstdlib>   //This library is used for flush and other miscellaneous functions used for the program
#include <stack>     //This library is used to access/use stack and its functions.
#include <unistd.h>  //This is for sleep function.
#include <windows.h> //This is for console color.

using std::cout;
using std::endl;
using std::cin;

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); //This function allow us to assign color to the console texts.

#define divider "============================================================================\n"
//This is a defined divider that was frequently used in almost every parts of the program.

struct Book { //Structs holds the attributes for the objects created in each functions.
	std::string title;
	std::string author;
	std::string ISBN;
};

struct Student {
  std::stack <std::string> name;
  std::stack <std::string> section;
  std::stack <std::string> time;
};

struct book_default {
	std::string default_books[3][10]={
    {"The Great Gatsby", "Pride and Prejudice", "Me Before You", "Harry Potter and the Sorcerer's Stone", "To Kill a Mockingbird", "The Lies of Locke Lamora", "The Fault in Our Stars", "The Road", "Into Thin Air", "People We Meet on Vacation"},
	{"F. Scott Fitzgerald", "Jane Austen", "Jojo Moyes", "J.K. Rowling", "Harper Lee", "Scott Lynch", "John Green", "Cormac McCarthy", "Jon Krakauer", "Emily Henry"},
    {"978-0-7432-7356-5", "9780141439518", "9780143130154", "9780590353427", "9780061120084", "978055358841", "9780142424179", "9780307387899", "9780385494786", "9781984806758"}};
     //This is 2d array that holds the default books in the system.
};

std::vector<Book> library; //vector is used as a resizeable array that stores the book information.
std::vector<Book> returning_books; //This vector is used for the returning books.

void assign_books() { //this functionn fills the vectors with default values.
	book_default book_def;
	for(int c=0;c<10;c++){
		std::string titles = book_def.default_books[0][c];
		std::string authors = book_def.default_books[1][c];
		std::string ISBNs = book_def.default_books[2][c];

		library.push_back({titles, authors, ISBNs}); //this function is used to insert values on the vector.
	}
}

void loading_effect() { //Adds a loading behavior whenever used.
	for (int u = 0; u < 3; u++) {
		cout << "." << std::flush; //flush updates the stream.
		sleep(1); //sleep adds ddelay on the displaying of the output.
	}
	system("cls"); //this function clears the screen.
}

void invalid(){  //Prompts invalid input.
	SetConsoleTextAttribute(color, 04);
	cout << "Invalid choice. Please try again";
	loading_effect();
	SetConsoleTextAttribute(color, 06);
	return;
}

void student_log(Student& studentObj){  //This function is used for entering student information before and after accessing the library.
	char answer;
	do{
		std::string student_info[3];
	  	cout<< divider << " ** Student Log ** "<< endl<< divider;
	  	cout<< divider << "Enter student name :: ";
	  	getline(cin, student_info[0]);
		cout<< divider << "Enter student section :: ";
	 	getline(cin, student_info[1]);
		cout<< divider << "Enter time of arrival :: ";
	  	getline(cin, student_info[2]);
	  	studentObj.name.push(student_info[0]);
	  	studentObj.section.push(student_info[1]);
	  	studentObj.time.push(student_info[2]);
	  	cout<< divider << "Do you want to enter another student info? (Press 'y' to add another one and any key and go to the main menu.) ";
	  	cin>> answer;
	  	cin.ignore();
	  	cout<< divider << "Please wait";
	  	loading_effect();
	}while(answer == 'y' || answer == 'Y');
}

void display_log(Student& studentObj){  //This function prints out the student log.
	char cont;
	std::string student_info[studentObj.name.size()+1][3];
	int size=studentObj.name.size();
	for(int i=0;i<studentObj.name.size();i++){
		student_info[i][0]=studentObj.name.top();
 		student_info[i][1]=studentObj.section.top();
   		student_info[i][2]=studentObj.time.top();
	}
  
  cout<< divider << "** Student Log **" << endl <<divider;
	for(int d=0;d<size;d++){
		cout<< "Name    :: "<< studentObj.name.top() <<endl;
   		cout<< "Section :: "<< studentObj.section.top() <<endl;
    	cout<< "Time    :: "<< studentObj.time.top() <<endl;
    	cout<< divider;
    	studentObj.name.pop();    
    	studentObj.section.pop();
    	studentObj.time.pop();
	}
  	for(int a=0;a<size;a++){
 		studentObj.name.push(student_info[a][0]);
 		studentObj.section.push(student_info[a][1]);
  	 	studentObj.time.push(student_info[a][2]);
  		cout<< "Enter a key to continue :: ";
  		cin>>cont;
  		cin.ignore();
  		cout<< "Please wait";
  		loading_effect();
  		return;
	}
}

void show_default(std::vector<Book> &library) { //Refenced parameters are used to access the values inside a vector.
                                                //This function shows the default books initially stored in the system.
	book_default book_def;                    
	SetConsoleTextAttribute(color, 11);
	char answer;
	cout << divider << "Here are the default books available in the library ::"<< endl << divider;
	std::string labels[3] = {"[Title] ","[Author] ","[ISBN] "};
	for (int g = 0; g < 10; g++) {
	    for (int h = 0; h < 3; h++) {
			cout << labels[h] << ":: " << book_def.default_books[h][g] << endl;
		}
		cout << divider;
	}
	cout << divider << "Select any key to go back to main screen ::";
	cin >> answer;
	cin.ignore(); //disregards the recent input value.
	cout << "Please wait";
	loading_effect();
}

void show_books(const std::vector<Book>& library) { //This function shows all available and user inputted books.
	char answer;
	SetConsoleTextAttribute(color, 13);
	cout << divider << "Here are the books in the library :: " << endl << divider;
	for (int i = 0; i < library.size(); i++) {
		cout << "<" << i + 1 << "> " << library[i].title << endl;
		cout << "  Author :: " << library[i].author << endl;
	    cout << "  ISBN :: " << library[i].ISBN << endl << endl;
  	}
	cout<<divider<<"Select any key to go back to main screen:";
	cin>>answer;
	cout<<"Please wait";
	loading_effect();
}

void borrow_books(std::vector<Book>& library, std::vector<Book>& returning_books) { //This function allows the user to take books stored in the library.
	char answer;
	SetConsoleTextAttribute(color, 05);
	do {
		cout << divider << "Here are the books in the library :: " << endl << divider;
			for (int i = 0; i < library.size(); i++) {
				cout << "<" << i + 1 << "> " << library[i].title << endl;
			}
			
		int book_choice;
		cout << divider << "Enter the number of the book you want to borrow :: ";
		cin >> book_choice;
		
		if (book_choice < 1 || book_choice > library.size()) {
			SetConsoleTextAttribute(color, 04);
			cout << "Invalid book choice..." << endl;
      		cout << "Please try again";
      		loading_effect();
			return;
		}

    returning_books.push_back(library[book_choice - 1]); //this is used to insert the borrowed books in the returning_books vector.
    library.erase(library.begin() + book_choice - 1); //this removes an element inside the vector books.
    cout << "You have borrowed the book " << returning_books.back().title << "." << endl;
    cout << "Do you want to borrow another book? (y/n) ";
    cin >> answer;
    system("cls");

    if (answer == 'n') {
		cout << "Please wait";
		loading_effect();}
	} while (answer == 'y' || answer == 'Y');
}

void return_books(std::vector<Book> &returning_books) { //This is a function that allows user to return books that was borrowed.
	char answer;
	SetConsoleTextAttribute(color, 06);
	do {
	  int choice;
		if (returning_books.size() > 0) {
			cout << divider<< "Select which book you want to return :: " << endl << divider;
			for (int i = 0; i < returning_books.size(); i++) {
				cout << "[" << i + 1 << "] " << returning_books[i].title <<endl<<divider;
			}
		cin >> choice;
		library.push_back(returning_books[choice-1]);
		cin.ignore();
		
		if (choice <1 || choice > returning_books.size()) {
			cout << "Invalid choice, please try again...\n Returning to main screen";
			loading_effect();
			return;
			}
			
		SetConsoleTextAttribute(color, 02);
		cout << divider << "Thank you! "<< returning_books[choice-1].title << " has been returned." << endl;
		returning_books.erase(returning_books.begin() + choice - 1);
     	SetConsoleTextAttribute(color, 05);
		cout << "Do you want to return another one? (Press 'y' to insert more and any key to return to the main menu.)";
		cin >> answer;
		system("cls");
			  
		if (answer == 'n') {
			cout << "Returning to main menu. Please wait";
			loading_effect();
			}
		}
		else {
			cout << divider <<"Sorry, there are no borrowed books as of the moment.\n Try borrowing first in the Borrowing Books page";
			loading_effect();
			return;
		}
	}
	while(answer == 'y');
}

void insert_books(std::vector<Book>& library) { //allows user to input books to be stored on the vector library.
	SetConsoleTextAttribute(color, 03);
	Book newBook; // Initialize a new Book object to store the book details.
	char answer;
	do {
		cout << divider << "Enter the book details that you want to Insert :: \n" << divider << endl;
		cout << "[ Enter Book Title ] ::  ";
		cin.clear();  //This function clears the user input for the next one to be read.
		getline(cin, newBook.title); 
		cout << "[ Enter Book Author ] :: ";
		getline(cin, newBook.author); 
		cout << "[ Enter ISBN ] :: ";
		getline(cin, newBook.ISBN); 
		
		library.push_back(newBook); 
		cout << divider << "Do you want to add another book? (Press 'y' to insert more and any key to return to the main menu.)";
		cin >> answer;
		cin.ignore();
		system("cls");
		if (answer != 'y') {
			cout << "\nPlease wait";
			loading_effect();
		}
	}
	while (answer == 'y');
}

void action_selection(Student& studentObj) { //This function that handles library functions. This is the main menu of the program.
	SetConsoleTextAttribute(color, 06);
	std::string prompt[8] = {" <1> Show Default Books"," <2> Show Available Books", " <3> Borrow Books", " <4> Return Books", " <5> Insert Books", " <6> Open Student Log", " <7> Display Student Log", " <8> Exit Program"};
	int choice;
	do {
		cout<< divider << " * Welcome to Group 6's Mini Library !!! *" << endl << divider << endl;
		cout << divider;
		for (auto prompts : prompt) {  
			cout << prompts << endl;
		}
	cout << divider;
	cin >> choice;
    cin.clear();
    cin.ignore();
	system("cls");

		switch (choice) { //this is a function that allows user to select an option from the screen then executes the code assigned to each cases.
			case 1: show_default(library); //These are parameterized voids.
				break;
			case 2: show_books(library);
				break;
			case 3: borrow_books(library, returning_books);
				break;
			case 4: return_books(returning_books);
	        	break;
			case 5: insert_books(library);
	        	break;
      		case 6: student_log(studentObj);
            break;
	  		case 7: display_log(studentObj);
	    		break;
			case 8: SetConsoleTextAttribute(color, 02);
	        		cout <<divider << "~~* Thank you for coming! *~~" << endl <<divider << endl;
	        		exit(EXIT_SUCCESS);  //this ends the progeam and returns 1.
	    		break;
			default: invalid();
        		break;
		}
	} while (true);
}

int main() {
	Student studentObj;
  	assign_books();
  	student_log(studentObj);
  	action_selection(studentObj);
  	return 0;
}