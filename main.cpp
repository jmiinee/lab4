#include "studentStatus.h"

namespace KimJimin2649010
{
    bool compareStudent(const student& s1, const student& s2)
    {
        return s1.getId() == s2.getId()
            && s1.getScore() == s2.getScore()
            && s1.getGrade() == s2.getGrade();
    }
}

int main()
{
    using namespace KimJimin2649010;
    studentStatus s1;
    s1.print();
    studentStatus s2{{2649010, 100, 'A'}, true};
    s2.print();
    if (compareStudent(s1.getStudent(), s2.getStudent())) std::cout << "Same\n";
    else std::cout << "Not same\n";

    return 0;
}