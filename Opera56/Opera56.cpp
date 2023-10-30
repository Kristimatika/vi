// Opera56.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student {
public:
    string name;
    int YearBorn;
    vector<int> ocenka;
    void print() {

    }
private:
    int GetAge() {
        return 2023 - YearBorn;
    }
};



int main()
{}