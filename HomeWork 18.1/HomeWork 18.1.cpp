#include <iostream>

using namespace std;

// Создаем структуру "Работник"
struct Employee {
    char lastName[50];
    int birthYear;
    char position[50];
    double salary;
    char education[50];
};

int main()
{
    setlocale(0, "");
    // Создаем массив из 5 структур "Работник"
    Employee employees[5];

    // Заполняем массив данными
    strcpy_s(employees[0].lastName, "Иванов");
    employees[0].birthYear = 1960;
    strcpy_s(employees[0].position, "Инженер");
    employees[0].salary = 50000;
    strcpy_s(employees[0].education, "Высшее");

    strcpy_s(employees[1].lastName, "Петров");
    employees[1].birthYear = 1975;
    strcpy_s(employees[1].position, "Менеджер");
    employees[1].salary = 45000;
    strcpy_s(employees[1].education, "Высшее");

    strcpy_s(employees[2].lastName, "Сидоров");
    employees[2].birthYear = 1955;
    strcpy_s(employees[2].position, "Директор");
    employees[2].salary = 80000;
    strcpy_s(employees[2].education, "Высшее");

    strcpy_s(employees[3].lastName, "Козлов");
    employees[3].birthYear = 1980;
    strcpy_s(employees[3].position, "Программист");
    employees[3].salary = 60000;
    strcpy_s(employees[3].education, "Высшее");

    strcpy_s(employees[4].lastName, "Морозов");
    employees[4].birthYear = 1965;
    strcpy_s(employees[4].position, "Бухгалтер");
    employees[4].salary = 55000;
    strcpy_s(employees[4].education, "Высшее");

    // Определяем количество работников старше 60 лет и выводим их информацию
    int olderThan60 = 0;
    for (int i = 0; i < 5; i++) {
        if (2023 - employees[i].birthYear > 60) {
            olderThan60++;
            cout << "Фамилия: " << employees[i].lastName << endl;
            cout << "Год рождения: " << employees[i].birthYear << endl;
            cout << "Должность: " << employees[i].position << endl;
            cout << "Зарплата: " << employees[i].salary << endl;
            cout << "Образование: " << employees[i].education << endl;
            cout << endl;
        }
    }

    cout << "Всего работников старше 60 лет: " << olderThan60 << endl;
}


