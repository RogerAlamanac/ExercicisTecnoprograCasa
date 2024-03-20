#include <iostream>
#include <vector>
//#include <string>
void ExPointers1() {
	int a;
	int b;
	int* ptrA = &a;
	int* ptrB = &b;
	std::cout << "WRITE TWO INTEGERS" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << &ptrA << std::endl;
	std::cout << &ptrB << std::endl;
}

void ExPointers2() {
	int myArray[] = { 1, 4, 2, 6 };
	//myArray = { 4, 4, 2 };
	int sum = 0;
	int avr;
	for (int elem:myArray) {
		sum += elem;
	}
	avr = sum / 4;
	std::cout << "MITJANA: " << avr << std::endl;

}

void ExPointers3() {
	int vowels=0;
	char myArray[] = { 'A', 'B', 'E'};
	for (int elem:myArray) {
		if (elem == 'A' || elem == 'E' || elem == 'I' || elem == 'O' || elem == 'U') vowels++;
	}
	std::cout << vowels << std::endl;
}

void swap(int* a, int* b) {
	int aux = *a;
	*a = *b;
	*b = aux;
	std::cout << *a << " " << *b << std::endl;
}

void ExPointer5() {
	char buffer[] = "A char buffer.";
	char* ptr = buffer; 

	std::cout<<"String with even positions only: ";

	for (int i = 0; ptr[i] != '\0'; ++i) {
		if (i % 2 == 0) {
			std::cout<<("%c", ptr[i]);
		}
	}

	std::cout << std::endl;

}

void ExPointer6(int* a, int size) {
	std::cin >> *a;
	int myArray[] = { 5, 2, 8, 4, 1, 7 };
	for (int i = 0; i < size; ++i) {
		if (*a == myArray[i]) std::cout << "Adreça del punter: " << a << std::endl << "Valor del punter: " << a << std::endl;
		else if(i>=size&&*a != myArray[i]) std::cout << "Adreça del punter: nullptr" << std::endl << "Valor del punter: 0xFFFFFFF" << std::endl;
	}
}

void ExFunctions1(int a) {
	std::cout << "Hello! Printing value "<< a <<", which is an integer"<< std::endl;
}

void ExFunctions1(std::string a) {
	std::cout << "Hello! Printing value " << a << ", which is a string" << std::endl;
}

void ExFunctions1(float c) {
	std::cout << "Hello! Printing value " << c << ", which is an integer" << std::endl;
}

void ExFunctions2() {
	int size;
	int sum = 0;
	int fibo = 1;
	int result;
	std::cin >> size;
	for (int i = 0; i < size; ++i) {

		result = sum + fibo;
		std::cout << result << std::endl;
		sum=result;
	}
}

void ExFunctions3( int size) {
	int result = 1;
	for (int num = 1; num <= size; ++num) {
		result *= num;
	}
	std::cout << result << std::endl;
}

void ExFunction4() {
	std::vector<int>myArray = { 4, 5, 1, 6, -1, 7, -1, 8, 9 };
	std::vector<int>::iterator it = myArray.begin();
	for (int elem : myArray) {
		if(elem==-1) elem
	}
}
int main() {
	int a = 9;
	std::string b = "Param1";
	float c = 3.14;
	ExFunctions3(5);
}