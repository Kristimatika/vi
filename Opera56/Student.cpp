#include "Student.h"
#include <iostream>



void Student :: print() {
        cout << "Name:" << name << endl;
        cout << "Age:" << GetAge() << endl;
        for (int i = 0; i < ocenka.size(); i++) {
            cout << ocenka[i] << " ";
        }
        cout << endl;
    }

int Student::GetAge() {
        return 2023 - YearBorn;
    }