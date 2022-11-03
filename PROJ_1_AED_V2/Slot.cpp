#include "Slot.h"

using namespace std;

Slot::Slot(){
    ClassCode = "";
    UcCode = "";
    Weekday = "";
    StartHour = "";
    Duration = "";
    Type = "";
}

Slot::Slot(string ClassCode, string UcCode, string Weekday, string StartHour, string Duration, string Type) {
    ClassCode = ClassCode;
    UcCode = UcCode;
    Weekday = Weekday;
    StartHour = StartHour;
    Duration = Duration;
    Type = Type;
}
string Slot::get_ClassCode() const {
    return ClassCode;
}

void Slot::set_ClassCode(string ClassCode2) {
    ClassCode = ClassCode2;
}

string Slot::get_UcCode() const {
    return UcCode;
}

void Slot::set_UcCode(string UcCode2) {
    UcCode = UcCode2;
}

string Slot::get_Weekday() const {
    return Weekday;
}

void Slot::set_Weekday(string Weekday2) {
    Weekday = Weekday2;
}

string Slot::get_StarHour() const {
    return StartHour;
}

void Slot::set_StartHour(string StartHour2) {
    StartHour = StartHour2;
}

string Slot::get_Duration() const {
    return Duration;
}

void Slot::set_Duration(string Duration2) {
    Duration = Duration2;
}

string Slot::get_Type() const {
    return Type;
}

void Slot::set_Type(string Type2) {
    Type = Type2;
}
