#include <iostream>
#include <time.h>//для бібліотеки time
#include <stdlib.h>//для бібліотеки random

using namespace std;
int main() {
	int variable;
	int arr[7];
	srand(time(NULL));// отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним. 
	for (int i = 0; i < 7; i++) {
		arr[i] =rand() % 50;//генеруємо масив 
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[j] > arr[j + 1]) {
				variable = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = variable;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << ' ';//виводимо масив
	}
	cout << endl << "The second largest element is - " << arr[5] << endl;
}
