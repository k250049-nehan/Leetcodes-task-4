#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> age >> first_name >> last_name >> standard;
    cout << age << " " << first_name << " " << last_name << " " << standard;
    
    return 0;
}
