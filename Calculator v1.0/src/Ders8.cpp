#include <iostream>


using namespace std;

int main() {

	float a,b;

	string operation;

	cout << "Welcome to the EmrahGK's calculator.." << endl;

	cout << "(1 = Addition)" << endl;
	cout << "(2 = Subtraction)" << endl;
	cout << "(3 = Multiplication)" << endl;
	cout << "(4 = Division)" << endl;

	cout << "Please enter the operation: ";
	cin >> operation;

	if(operation == "Addition"){

		cout << "Please enter the first number: ";
		cin >> a;

		cout << "Please enter the second number: ";
		cin >> b;

		cout << "The sum of these numbers: " << float(a) + float(b) << endl;

	}

	else if(operation == "Subtraction"){

		cout << "Please enter the first number: ";
		cin >> a;

		cout << "Please enter the second number: ";
		cin >> b;

		cout << "The difference of these numbers: " << float(a) - float(b) << endl;

	}

	else if(operation == "Multiplication"){

		cout << "Please enter the first number: ";
		cin >> a;

		cout << "Please enter the second number: ";
		cin >> b;

		cout << "The product of these numbers: " << float(a) * float(b) << endl;

	}

	else if(operation == "Division"){

		cout << "Please enter the first number: ";
		cin >> a;

		cout << "Please enter the second number: ";
		cin >> b;

		cout << "The division of these numbers : " << float(a) / float(b) << endl;

	}

	else{
		cout << "You entered an invalid transaction. Please try again..";
	}

	return 0;
}
