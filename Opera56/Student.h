#pragma once
#include <string>
#include <vector>

using namespace std;


class Student{
public:
    string name;
    int YearBorn;
    vector<int> ocenka;

    void print();

private:
    int GetAge();

};

