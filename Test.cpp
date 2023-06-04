#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace std;
using namespace ariel;


TEST_CASE("size(), removeElement(), addElement()") {
    MagicalContainer container;
    CHECK_THROWS(container.removeElement(10));
    container.addElement(1);
    CHECK(container.size() == 1);
    CHECK_NOTHROW(container.removeElement(1));
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);
    CHECK(container.size() == 4);
    CHECK_THROWS(container.removeElement(10));
    
}


TEST_CASE("AscendingIterator, begin(), end()") {
    MagicalContainer container;
    container.addElement(17);
    MagicalContainer::AscendingIterator iterator(container);
    CHECK_EQ(*iterator.begin(),NULL);
    CHECK(*iterator == 17);
    CHECK_EQ(*iterator.begin(),17);
    CHECK_EQ(*iterator.end(),17);
    CHECK_EQ(*iterator.end(),*iterator.begin());
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    ++iterator;
    CHECK(*iterator == 2);
    ++iterator;
    CHECK(*iterator == 25);
    ++iterator;
    CHECK(*iterator == 9);
    ++iterator;
    CHECK(*iterator == 3);
    CHECK(iterator == iterator.end());
    
}

TEST_CASE("SideCrossIterator") {
    MagicalContainer container;
    container.addElement(17);
    MagicalContainer::AscendingIterator iterator(container);
    CHECK_EQ(*iterator.begin(),NULL);
    CHECK(*iterator == 17);
    CHECK_EQ(*iterator.begin(),17);
    CHECK_EQ(*iterator.end(),17);
    CHECK_EQ(*iterator.end(),*iterator.begin());
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);
    ++iterator;
    CHECK(*iterator == 3);
    ++iterator;
    CHECK(*iterator == 2);
    ++iterator;
    CHECK(*iterator == 9);
    ++iterator;
    CHECK(*iterator == 25);
    CHECK(iterator != iterator.end());
 
}