#include <iostream>
#include <cstdlib> // ��� ������������ ������� rand()
#include<Windows.h>
using namespace std; // ������������ �������� ���� std

// ������� ��� ��������� ������ �� �����
void vydrukMasivu(int masiv[], int rozmir) {
    cout << "�����: ";
    for (int i = 0; i < rozmir; ++i) {
        cout << masiv[i] << " ";
    }
    cout << endl;
}

// �������, ��� �������� ���� �������� �������� ������
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
    const int rozmir = 20; // ����� ������
    int masiv[rozmir];
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // ����������� ������ ����������� ������� �� -100 �� 100
    for (int i = 0; i < rozmir; ++i) {
        masiv[i] = rand() % 201 - 100; // ������ ��������� ����� � ������� [-100, 100]
    }

    vydrukMasivu(masiv, rozmir); // ��������� ����������� ������

    // ���������� �� ��������� ���� ������� �������� ������
    int suma = sumaDodatnikh(masiv, rozmir);
    cout << "���� ������� �������� ������: " << suma << endl;

    return 0;
}
