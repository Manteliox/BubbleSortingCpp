#include<iostream>

int main() {
	int i, j, temporary;
	int a[20] = {9, 4, 7, 16, 2, 12, 8, 2, 10, 3, 20, 18, 7, 1, 3, 17, 9, 16, 20, 8};
	
	std::cout << "your list:" << std::endl;

	//prints the lines on the console
	for (i = 0; i < 20; i++) {
		for (j = 0; j < a[i]; j++) {
			std::cout << "*";
		}
		std::cout << "" << std::endl;
	}

	std::cout << "" << std::endl;

	//bubble sorting algorithm
	for (i = 0; i < 20; i++) {
		for (j = i + 1; j < 20; j++) {
			if (a[j] < a[i]) {
				temporary = a[i];
				a[i] = a[j];
				a[j] = temporary;
			}
		}
	}

	std::cout << "sorted list: " << std::endl;
	
	//prints out the sorted lines
	for (i = 0; i < 20; i++) {
		for (j = 0; j < a[i]; j++) {
			std::cout << "*";
		}
		std::cout << "" << std::endl;
	}
}