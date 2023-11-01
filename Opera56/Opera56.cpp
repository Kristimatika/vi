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
        cout << "Name:" << name << endl;
        cout << "Age:" << GetAge() << endl;
        for (int i = 0; i < ocenka.size(); i++) {
            cout << ocenka[i] << " ";
        }
        cout << endl;
    }
private:
    int GetAge() {
        return 2023 - YearBorn;
    }
};



int main()
{
    student a;

    a.name = "Hana";
    a.ocenka.push_back(4);
    a.ocenka.push_back(2);
    a.ocenka.push_back(3);
    a.ocenka.push_back(5);

    a.YearBorn = 1999;

    a.print();


}