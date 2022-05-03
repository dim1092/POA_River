//
// Created by dimde on 5/3/2022.
//

#ifndef POA_RIVER_CONTAINER_HPP
#define POA_RIVER_CONTAINER_HPP

#include <list>
#include <string>
#include "../person/Person.hpp"

class Container {
   std::string name;
   std::list<const Person*> people;
protected:
   Container(std::string  name);
public :
   bool add(const Person& p);
   void remove(const Person& p);
   virtual int capacity() = 0;
};
#endif //POA_RIVER_CONTAINER_HPP
