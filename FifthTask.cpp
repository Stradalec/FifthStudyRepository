/**********************************
* Автор: Калинин Андрей           *
* Лабораторная №5                 *
* Дата: 18.10.2023                *
* Название:Использование функций  *
* Вариант: 7                      *
* https://onlinegdb.com/WxRDsp0lp *
**********************************/

#include <iostream>

using namespace std;

void createArray(double array[], int arraySize) {
  for (int index = 0; index < arraySize; ++index) {
    cin >> array[index];
  }

}

void outArray(double array[], int arraySize) {
  cout << "[";

  for (int index = 0; index < arraySize; ++index) {
    cout << " " << array[index];
  }

  cout << " ]";
}

void checkRange(double array[], int arraySize, int lowerLimit, double upperLimit, int count = 0) {
  for (lowerLimit; lowerLimit < upperLimit; ++lowerLimit) {
    if (array[lowerLimit] > 0) {
      count += 1;
    }

  }
  
  cout << count;
}

int main() {
  const int defaultArraySize = 1000;
  int firstArraySize;
  int secondArraySize;
  double lowerLimit;
  double upperLimit;
  double firstArray[defaultArraySize];
  double secondArray[defaultArraySize];

  setlocale(LC_ALL, "Russian");

  cout << "Количество элементов первого массива: ";
  cin >> firstArraySize;
  cout << "Количество элементов второго массива: ";
  cin >> secondArraySize;
  
  cout << "Нижняя граница интервала: ";
  cin >> lowerLimit;
  cout << "Верхняя граница интервала: ";
  cin >> upperLimit;
  cout << endl;

  cout << "Введите элементы 1 массива: ";
  createArray(firstArray, firstArraySize);
  cout << endl;

  cout << "Введите элементы 2 массива: ";
  createArray(secondArray, secondArraySize);
  cout << endl;

  cout << "1 массив: ";
  outArray(firstArray, firstArraySize);
  cout << endl;

  cout << "2 массив: ";
  outArray(secondArray, secondArraySize);
  cout << endl;

  cout << "Кол-во положительных элементов 1 массива, входящих в интервал: ";
  checkRange(firstArray, secondArraySize, lowerLimit, upperLimit);
  cout << endl;

  cout << "Кол-во положительных элементов 2 массива, входящих в интервал: ";
  checkRange(secondArray, secondArraySize, lowerLimit, upperLimit);
  cout << endl;

  return 0;
}

