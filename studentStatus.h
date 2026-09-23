#pragma once
#include "student (1).h"

namespace KimJimin2649010
{
    class studentStatus
    {
        student s;
        bool status;
        public:
            studentStatus(student s0 = student{1234567,0,'F'}, bool st = false)
                : s{s0}, status{st}
            {}
        void print() const 
        {
            s.print();
            if (status) std::cout << "On school\n";
            else std::cout << "Not on school\n";
        }
        const student& getStudent() const {return s;}
        void setStudent(const student& s0) {s = s0;}
    };
}