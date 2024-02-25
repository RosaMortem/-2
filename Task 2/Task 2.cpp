#include <iostream>
#include <ctime>

using namespace std;


void entrCounter(int arr[5]) {

    int size = 0;
    int *resArr = new int[size];    //создание динамического массива

    int inCount = 0;
    for (int i = 0; i < 5; i++) {
        int temp = arr[i];
        int counter = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[j] == temp) {
                counter++;
            }
        }
        if (counter % 2 != 0) {
            for (int i = 0; i < size; i++) {
                if (temp == resArr[i]) {
                    inCount++;
                }
           }
            if (inCount == 0) {
                size++;
                resArr[size - 1] = temp;
            }
        }
        
        
    }
    for (int i = 0; i < size; i++) {
            cout << resArr[i] << " ";
        }
}


int main() {

    int start = 0;
    int end = 10;

    srand(time(0));
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % (end - start + 1) + start; //ввод условно рандомных значений
        cout << arr[i] << " ";
        
    }
    cout << endl;
    entrCounter(arr);

    return 0;
}
