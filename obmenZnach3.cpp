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

/*-- Реализация ф-ции "swap" без локального хранилища --*/

void swap(int& firstNumber, int& secondNumber){
    
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    
    return;
}