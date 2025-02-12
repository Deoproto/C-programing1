#ifndef PERSON_H
#define PERSON_H

typedef struct {
    char firstName[20];
    char middleName[20];
    char lastName[20];
    int birthYear;
} Person;

#endif





#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

typedef struct {
    Person students[26];
    char parallel;
    int classNumber;
    Person classTeacher;
} SchoolClass;

#endif





#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

typedef struct {
    int roomNumber;
    Person occupants[50];
} SchoolRoom;

#endif

#include "schoolclass.h"
#include "schoolroom.h"

typedef struct {
    SchoolClass classes[20];
    SchoolRoom rooms[10];
} School;

int main() {
    School school;
    return 0;
}






