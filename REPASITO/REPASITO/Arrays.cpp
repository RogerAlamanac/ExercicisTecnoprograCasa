//#include <iostream>
//#include <vector>
//
//int main() {
//	//Arrays dinamics 1D
//	//Llegir el tamany de l'array
//	int numElem;
//	std::cin >> numElem;
//
//	// Declarar i inicialitzar els valors d'una tirada
//	float* myArray = new float[numElem];
//
//	for (int i = 0; i < numElem; ++i){
//		myArray[i] = numElem * i;
//	}
//
//	//Delete array
//	delete[] myArray;
//	myArray = nullptr;
//
//	//Arrays dinamics 2D
//	int Rows, columns;
//	std::cin >> Rows;
//	std::cin >> columns;
//	
//	// Declarar doble pointer
//	int** my2DArray;
//
//	// Solicitar memoria per un arrat de punters
//	// Solicita tants punters com files
//	// Cada punters apunta a una columna
//	my2DArray = new int* [Rows];
//
//	for (int i = 0; i < Rows; ++i) {
//		my2DArray[i] = new int[columns];
//	}
//
//	//Borrar array
//	for (int i = 0; i < Rows; ++i) {
//		delete[] my2DArray[i];
//	}
//
//	delete[] my2DArray;
//	my2DArray = nullptr;
//
//	//STL Vector
//	int numElements;
//	std::cin >> numElements;
//
//	//1D Vector
//	std::vector<int> my1DVector(numElements);
//
//}