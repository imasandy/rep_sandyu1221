#include <iostream>
#include <string>

using namespace std;

union Life {
    float bird_speed;
    bool yes_no;
    int iq_human;
};

enum Type {
    bird = 1, animal, human
};

struct St {
    int speed;
    string color;
    Type t;
    Life h;
};

void enter(St& entity) {
    cout << "yakiy tip? 1 (ptah) | 2 (hudoba) | 3 (ludina) \n-> ";
    int choice;
    cin >> choice;
    entity.t = Type(choice);
    switch (entity.t) {
    case Type::bird:
        cout << "Yaka shvidkist polyoty?: ";
        cin >> entity.h.bird_speed;
        break;
    case Type::animal:
        cout << "parnokopitne chi ni?: ";
        cin >> entity.h.yes_no;
        break;
    case Type::human:
        cout << "tviy riven IQ?: ";
        cin >> entity.h.iq_human;
        break;
    default:
        cout << "Error" << endl;
        break;
    }

    cout << "yakiy kolir?: ";
    cin >> entity.color;
    cout << "yaka shvidkist peresuvanna?: ";
    cin >> entity.speed;

}

void vedennya(St& entity) {
    int choice = 0;
    cout << "Yakiy tip?(1-bird, 2-hudoba, 3-ludina): ";
    cin >> choice;
    entity.t = Type(choice);
    switch (entity.t) {
    case Type::bird:
        cout << "Yaka shvidkist polyotu: " << endl;
        cin >> entity.h.bird_speed;
        break;
    case Type::animal:
        cout << "vvedit ce parnokopitne chi ni? (1-tak, 0-ni) " << endl;
        cin >> entity.h.yes_no;
        break;
    case Type::human:
        cout << "Yake iq? " << endl;
        cin >> entity.h.iq_human;
        break;
    default:
        cout << "Error!" << endl;
        break;
    };
    cout << "yakiy kolir: " << endl;
    cin >> entity.color;
    cout << "yaka shvidkist peresuvanna: " << endl;
    cin >> entity.speed;
};

void Info(St& entity) {
    cout << "Tip: ";
    switch (entity.t) {
    case Type::bird:
        cout << "Bird\nShvidkist polyoty: " << entity.h.bird_speed << endl;
        break;
    case Type::animal:
        cout << "Hudoba\nParnokopitne" << entity.h.yes_no << endl;
        break;
    case Type::human:
        cout << "Ludina\nIq? " << entity.h.iq_human << endl;
        break;
    };
    cout << "Color: " << entity.color << endl;
    cout << "Speed: " << entity.speed << endl;
    cout << endl;
}

int main() {
    system("chcp 1251>null");

    const int size = 10;
    St array[size];
    int rax = 0;

    cout << "Введіть данні сущності: " << endl;
    for (int i = 0; i < size; i++) {
        int m = 0;
        cout << "Чи будете вводити інформацію? (1-так, 2-ні): ";
        cin >> m;
        if (m == 2) break;
        cout << i + 1 << ") ";
        vedennya(array[i]);
        rax++;
    }

    cout << "\nInfo po kozniy sushnosti: " << endl;
    for (int i = 0; i < rax; i++) {
        cout << "Sushinst #" << i + 1 << ") " << endl;
        Info(array[i]);
    }

    return 0;
}