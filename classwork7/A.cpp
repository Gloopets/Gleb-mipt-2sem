# include <iostream>
using namespace std;

struct person {
    char name[20];
    char surname[20];
    unsigned int age;

    person() {
        strcpy(name, "Undefined");
        strcpy(surname, "Undefined");
        age = 1;
    }

    person(const char *t_name, const char *t_surname, unsigned int t_age) {
        for(int i = 0; *(t_name + i) != '\0'; ++i) {
            name[i] = *(t_name+i);
        }
        for(int i = 0; *(t_name + i) != '\0'; ++i) {
            surname[i] = *(t_surname+i);
        }
        age = t_age;
    }
};

int main() {
    person *pchel = new person{glebb, }
    cout <<
    return 0;
}

