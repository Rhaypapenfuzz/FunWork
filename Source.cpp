#include <iostream>
#include <string>
#include <fstream>
#include <conio.h> 
using namespace std;

const string filepath = "C:\\Users\\Rhaypapenfuzz\\source\\repos\\Lab 6\\Lab 6\\infile.txt";

bool is_hung(int);

int main() {
	ifstream infile;
	infile.open(filepath);
	int no_errors = 0, numberOfQuestions=0 ;
	char usersAnswer;
	while (infile) {

		numberOfQuestions++;
		if (numberOfQuestions > 16)
		{
			cout << "End of all my questions!!!   End of all my questions!!!\n";
			_getch();
			system("pause");
			return 0;
		}
		string a, b, c, d, e, f;
		getline(infile, a);
		getline(infile, b);
		getline(infile, c);
		getline(infile, d);
		getline(infile, e);
		getline(infile, f);
		cout << "*********** MY HANG MAN GAME **********************************\n";
		cout << a << endl << b << endl << c << endl << d << endl << e << endl;
		cout << "What is the correct answer in Capital Letters? ";
		cin >> usersAnswer;

		char correctAnswer = f[16];
		if (usersAnswer == correctAnswer) {
			cout << "CORRECT!!!!\n\n";
			cout << "***************************************************************\n";
		}

		else
		{
			no_errors++;
			if (no_errors > 7)
			{
				no_errors = 1;
				is_hung(no_errors);
				//cin.get();
			}
			else
			{
				is_hung(no_errors);
			}
		}
	}
	
}
bool is_hung(int no_errors)
{
	cout << "INCORRECT!!!!\n\n";
	if (no_errors == 1) {
		cout << "\t \t \t" << " O " << endl
		<< "***************************************************************\n";
	}
	if (no_errors == 2) {
		cout << "\t \t \t" << " O " << endl
		<< "\t \t \t" << " |" << endl
		<< "***************************************************************\n";

	}
	if (no_errors == 3) {
		cout << "\t \t \t" << " O " << endl
		<< "\t \t \t" << " |" << endl
		<< "\t \t \t" << " | " << endl
		<< "***************************************************************\n";
	}
	if (no_errors == 4) {
		cout << "\t \t \t" << " O " << endl
		<< "\t \t \t" << "/|" << endl
		<< "\t \t \t" << " | " << endl
		<< "***************************************************************\n";
	}
	if (no_errors == 5) {
		cout << "\t \t \t" << " O " << endl
			<< "\t \t \t" << "/|\\" << endl
			<< "\t \t \t" << " | " << endl
			<< "***************************************************************\n";
	}
	if (no_errors == 6) {
		cout << "\t \t \t" << " O " << endl
		<< "\t \t \t" << "/|\\" << endl
		<< "\t \t \t" << " | " << endl
		<< "\t \t \t" << "/ " << endl
		<< "***************************************************************\n";

	}
	if (no_errors == 7) {
		cout << "\t \t \t" << " O " << endl
		<< "\t \t \t" << "/|\\" << endl
		<< "\t \t \t" << " | " << endl
		<< "\t \t \t" << "/ \\" << endl
		<< "    YOU ARE HUNG  " << endl;
		_getch(); // To pause
		system("cls"); //to clear screen
		cout << "Another Special Trial from me to you.Enjoy and Try Again!!!!"<< endl;
	}

	return false;
}
/*
*********** MY HANG MAN GAME **********************************
Question: What relational operator means greater than or equal to?
A Answer: >
B Answer: >=
C Answer: =>
D Answer: <
What is the correct answer in Capital Letters? B
CORRECT!!!!

***************************************************************
*********** MY HANG MAN GAME **********************************
Question: What two values does a bool variable allow?
A Answer: 0 and 1
B Answer: True or false
C Answer: Yes and no
D Answer: 1 and 2
What is the correct answer in Capital Letters? F
INCORRECT!!!!

						 O
***************************************************************
*********** MY HANG MAN GAME **********************************
Question: Which relational expression (where x is 4 and y is 8) is true?
A Answer: x = y
B Answer: x > y
C Answer: x < = y
D Answer: x >= y
What is the correct answer in Capital Letters? F
INCORRECT!!!!

						 O
						 |
***************************************************************
*********** MY HANG MAN GAME **********************************
Question: If we place an if statement within an if statement, we are creating a
A Answer: If-Then-Else statement
B Answer: Multiway branch
C Answer: If-Then-Else-If statement
D Answer: Nested control structure
What is the correct answer in Capital Letters? F
INCORRECT!!!!

						 O
						 |
						 |
***************************************************************
*********** MY HANG MAN GAME **********************************
Question: The && and || operators are
Answer A: Binary operators
Answer B: Unary operators
Answer C: Secondary operators
Answer D: Primary operators
What is the correct answer in Capital Letters? F
INCORRECT!!!!

						 O
						/|
						 |
***************************************************************
*********** MY HANG MAN GAME **********************************
Question: To find out if either the test grade is an A or the quiz grade is an A we would write the expression
Answer A: testGrade = `A' || quizGrade = `A'
Answer B: testGrade = `A' && quizGrade = `A'
Answer C: testGrade == `A' && quizGrade == `A'
Answer D: testGrade ==`A' || quizGrade == `A'
What is the correct answer in Capital Letters? F
INCORRECT!!!!

						 O
						/|\
						 |
***************************************************************
*********** MY HANG MAN GAME **********************************
Question: Which two pairs of expressions are equivalent?
A Answer: !(a == b) and a != b
B Answer: !(a == b) and a =! B
C Answer: (a == b)! and a != b
D Answer: (a == b)! and a =! B
What is the correct answer in Capital Letters? D
INCORRECT!!!!

						 O
						/|\
						 |
						/
***************************************************************
*********** MY HANG MAN GAME **********************************
Question: Which operator has the lowest precedence?
A Answer: &&
B Answer: ==
C Answer: ||
D Answer: =
What is the correct answer in Capital Letters? D
CORRECT!!!!

***************************************************************
*********** MY HANG MAN GAME **********************************
Question: An assertion that must be true before a module is executed for the module to execute correctly is a
A Answer: Postcondition
B Answer: Precondition
C Answer: Priorcondition
D Answer: Subsequentcondition
What is the correct answer in Capital Letters? F
INCORRECT!!!!

						 O
						/|\
						 |
						/ \
	YOU ARE HUNG


*/