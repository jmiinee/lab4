// #pragma once
// #ifndef STUDENT_H
// #define STUDENT_H
#include <iostream>

namespace jmiinee2649010
{
    struct student
    {
        int id{};
        char grade{};
    };
    student inputStudent();
    void printStudent(student &s);
}
//  #endif