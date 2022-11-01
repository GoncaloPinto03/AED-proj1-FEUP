#ifndef SLOT_H
#define SLOT_H

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Slot {
    string ClassCode;
    string Uccode;
    string Weekday;
    string StartHour;
    string Duration;
    string Type;
public:
    Slot();
    Slot(string ClassCode, string Uccode, string Weekday, string StartHour, string Duration, string Type);
    string get_ClassCode() const;
    void set_ClassCode(string ClassCode2);
    string get_UcCode() const;
    void set_UcCode(string Uccode2);
    string get_Weekday() const;
    void set_Weekday(string Weekday2);
    string get_StarHour() const;
    void set_StartHour(string StartHour2);
    string get_Duration() const;
    void set_Duration(string Duration2);
    string get_Type() const;
    void set_Type(string Type2);
};

#endif