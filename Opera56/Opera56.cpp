// Opera56.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;


int main()
{
    Student a;

    a.name = "Hana";
    a.ocenka.push_back(4);
    a.ocenka.push_back(2);
    a.ocenka.push_back(3);
    a.ocenka.push_back(5);

    a.YearBorn = 1999;

    a.print();


}