#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <stdio.h>
#include <vector>
namespace ariel
{

    class MagicalContainer
    {
        std::vector<int> elements;

    public:
        void addElement(int element);
        int size();
        void removeElement(int remove);

        class AscendingIterator
        {
        public:
            AscendingIterator();
            AscendingIterator(MagicalContainer copy);
            
            // AscendingIterator members and methods
            ~AscendingIterator() = default;
            AscendingIterator &operator=(const AscendingIterator &other);
            friend bool operator==(const AscendingIterator &iterator1, const AscendingIterator &iterator2);
            friend bool operator!=(const AscendingIterator &iterator1, const AscendingIterator &iterator2);
            friend bool operator<(const AscendingIterator &iterator1, const AscendingIterator &iterator2);
            friend bool operator>(const AscendingIterator &iterator1, const AscendingIterator &iterator2);
            int operator*();
            AscendingIterator operator++(int n);
            AscendingIterator &operator++();
            AscendingIterator begin();
            AscendingIterator end();
        };

        class SideCrossIterator
        {
        public:
            SideCrossIterator();
            SideCrossIterator(MagicalContainer copy);
            
            // AscendingIterator members and methods
            ~SideCrossIterator() = default;
            SideCrossIterator &operator=(const SideCrossIterator &other);
            friend bool operator==(const SideCrossIterator &iterator1, const SideCrossIterator &iterator2);
            friend bool operator!=(const SideCrossIterator &iterator1, const SideCrossIterator &iterator2);
            friend bool operator<(const SideCrossIterator &iterator1, const SideCrossIterator &iterator2);
            friend bool operator>(const SideCrossIterator &iterator1, const SideCrossIterator &iterator2);
            int operator*();
            SideCrossIterator operator++(int n);
            SideCrossIterator &operator++();
            SideCrossIterator begin();
            SideCrossIterator end();
        };

        class PrimeIterator
        {
        public:
            PrimeIterator();
            PrimeIterator(MagicalContainer copy);
            
            // AscendingIterator members and methods
            ~PrimeIterator() = default;
            PrimeIterator &operator=(const PrimeIterator &other);
            friend bool operator==(const PrimeIterator &iterator1, const PrimeIterator &iterator2);
            friend bool operator!=(const PrimeIterator &iterator1, const PrimeIterator &iterator2);
            friend bool operator<(const PrimeIterator &iterator1, const PrimeIterator &iterator2);
            friend bool operator>(const PrimeIterator &iterator1, const PrimeIterator &iterator2);
            int operator*();
            PrimeIterator operator++(int n);
            PrimeIterator &operator++();
            PrimeIterator begin();
            PrimeIterator end();
        };
    };
}