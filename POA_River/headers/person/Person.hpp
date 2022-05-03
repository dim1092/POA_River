//
// Created by dimde on 5/3/2022.
//

#ifndef POA_RIVER_PERSON_HPP
#define POA_RIVER_PERSON_HPP

#include <string>

class Person {
   std::string name;

public :
   virtual bool canDrive() const = 0;
};
#endif //POA_RIVER_PERSON_HPP
