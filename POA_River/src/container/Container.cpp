//
// Created by dimde on 5/3/2022.
//


#include "../../headers/container/Container.hpp"

using namespace std;

Container::Container(string  name) : name(std::move(name)), people() {
}

bool Container::add(const Person& p) {
   people.push_back(&p);
   return true;
}

void Container::remove(const Person &p) {
   people.remove(&p);
}
