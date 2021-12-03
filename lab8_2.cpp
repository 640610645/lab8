#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    int ID;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> ID;

    int GEAR = ID/1e7 - 12;
    cout << "Fahsai: I think you may be GEAR " << GEAR << ". I have a free movie ticket for you.\n";
    
    string movie;
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    cin.ignore();
    getline(cin,movie);
    
    string day;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    
    string answer;
    cout << name << ": ";
    getline(cin,answer);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" ;

    return 0;

}
