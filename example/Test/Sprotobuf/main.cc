#include <iostream>
#include "contact.pb.h"

int main()
{
    std::string str;
    {
        contact::PeopleInfo people;
        people.set_name("石方文");
        people.set_age(21);

    }
    return 0;
}
