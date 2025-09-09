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

int main()
{
    
}
