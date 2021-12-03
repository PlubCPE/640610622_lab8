//Dialog of the first example is given below.

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string name, cinema, date, text;
    string id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin  >> id;
    
    char first = id[0];
    char second = id[1];
    stringstream str1;
    stringstream str2;
    string sum1;
    string sum2;
    str1 << first;
    str1 >> sum1;
    str2 << second;
    str2 >> sum2;
    string numsum = sum1 + sum2;
    stringstream num1;
    int num2;
    num1 << numsum;
    num1 >> num2;

    cout << "Fahsai: I think you may be GEAR " << num2 - 12 << ". " << "I have a free movie ticket for you.\n";
    cin.ignore();
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin, cinema);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << cinema <<" with you.\n";
    cout << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/\n";
    return 0;




}
/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
