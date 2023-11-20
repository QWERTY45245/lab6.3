#include <iostream>
#include <cstdlib> // Для використання функції rand()
#include<Windows.h>
using namespace std; // Використання простору імен std

// Функція для виведення масиву на екран
void vydrukMasivu(int masiv[], int rozmir) {
    cout << "Масив: ";
    for (int i = 0; i < rozmir; ++i) {
        cout << masiv[i] << " ";
    }
    cout << endl;
}

// Функція, яка обчислює суму додатних елементів масиву
int sumaDodatnikh(int masiv[], int rozmir) {
    int suma = 0;
    for (int i = 0; i < rozmir; ++i) {
        if (masiv[i] > 0) {
            suma += masiv[i];
        }
    }
    return suma;
}

int main() {
    const int rozmir = 20; // Розмір масиву
    int masiv[rozmir];
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Ініціалізація масиву випадковими числами від -100 до 100
    for (int i = 0; i < rozmir; ++i) {
        masiv[i] = rand() % 201 - 100; // Генерує випадкове число в діапазоні [-100, 100]
    }

    vydrukMasivu(masiv, rozmir); // Виведення початкового масиву

    // Обчислення та виведення суми додатніх елементів масиву
    int suma = sumaDodatnikh(masiv, rozmir);
    cout << "Сума додатніх елементів масиву: " << suma << endl;

    return 0;
}
