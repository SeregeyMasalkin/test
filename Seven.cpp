/*Задание 7.  Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона. Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке. 
вывести все четные числа из диапазона.
вывести все нечетные числа из диапазона.
вывести все числа, кратные семи.

Масалкин С.В.
*/


#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "Rus");

    int chislo1;
    int chislo2;
    int summ = 0;

    cout << "Введите начало диапазона "; cin >> chislo1;
    cout << "Введите конец диапазона "; cin >> chislo2;
    cout << endl;
    cout << "Диапазон чисел от " << chislo1 << " до " << chislo2 << endl;
    if (chislo1 <= chislo2) {    // выводим список
        for (int i = chislo1; i <= chislo2; i++) {
            cout << i << endl;
        }
    }
    else {
        for (int i = chislo2; i <= chislo1; i++) { // учёт произвольного порядка
            cout << i << endl;
        }
    }
    cout << endl;
    cout << "Четные числа: " << endl;
    if (chislo1 <= chislo2) {
        for (int i = chislo1; i <= chislo2; i++) { // вывод четных чисел
            if (i % 2 == 0) {
                cout << i << endl;
            }
        }
                      else {
                           for (int i = chislo2; i <= chislo1; i++) {
                               if (i % 2 == 0) {
                                   cout << i << endl;
                               }
                              
                               /* четные числа при произвольном порядке не работает*/
        cout << endl;
        cout << "Нечетные числа: " << endl;
        if (chislo1 <= chislo2) {

            for (int i = chislo1; i <= chislo2; i++) { // вывод нечетных чисел
                if (i % 2 != 0) {
                    cout << i << endl;
                }
            }
            /* else {
                 for (int i = chislo2; i <= chislo1; i++) {
                     if (i % 2 != 0) {
                         cout << i << endl;
                     }
                 }
             }
             */
             /* нечетные числа при произвольном порядке не работает*/
            cout << endl;
        }
        cout << "Числа кратные 7: " << endl;
        if (chislo1 <= chislo2) {
            for (int i = chislo1; i <= chislo2; i++) { // вывод чисел кратных 7
                if (i % 7 == 0)
                    cout << i << endl;
            }
        }
    }
        

    
    
}
