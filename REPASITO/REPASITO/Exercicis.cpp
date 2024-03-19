#include <iostream>
#include <vector>
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
	int avr = sum / 4;
	for (int elem:myArray) {
		sum += elem;
	}
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
int main() {
	int a = 9;
	int b = 4;
	ExPointer5();
}