#include <iostream>
using namespace std;

void swap(int& firstNumber, int& secondNumber);

int main(){
    
    int a = 5, b = 8;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}

/*-- Реализация ф-ции "swap" --*/

void swap(int& firstNumber, int& secondNumber){
    
    int storage = firstNumber; //-- Локальное хранилище
    firstNumber = secondNumber;
    secondNumber = storage;
    
    return;
}