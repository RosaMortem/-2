#include <iostream>
#include <ctime>

using namespace std;


void entrCounter(int arr[5]) {

    int size = 0;
    int *resArr = new int[size];    //Создание динамического массива

    int inCount = 0;
    for (int i = 0; i < 5; i++) {
        int temp = arr[i];
        int counter = 0;            //Цикл с созданием счётчика вхождений в изначальный массив
        for (int j = 0; j < 5; j++) {
            if (arr[j] == temp) {
                counter++;          //Увеличение счётчика
            }
        }
        if (counter % 2 != 0) {
            for (int i = 0; i < size; i++) {
                if (temp == resArr[i]) { 
                    inCount++;      //Проверка, было ли уже выбрано число для выноса в ответ или нет
                }
           }
            if (inCount == 0) {
                size++;             //Расширение динамического массива и добавление в него нового элемента
                resArr[size - 1] = temp; 
            }
        }
        
        
    }
    for (int i = 0; i < size; i++) {
            cout << resArr[i] << " ";
        }                           //Вывод результата
}


int main() {

    int start = 0;
    int end = 10;

    srand(time(0));
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % (end - start + 1) + start; 
        cout << arr[i] << " ";      //Ввод условно рандомных значений
        
    }
    cout << endl;
    entrCounter(arr);

    return 0;
}
