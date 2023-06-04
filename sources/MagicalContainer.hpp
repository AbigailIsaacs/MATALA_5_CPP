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
            bool operator==(const AscendingIterator &iterator)const;
            bool operator!=(const AscendingIterator &iterator)const;
            bool operator<(const AscendingIterator &iterator)const;
            bool operator>(const AscendingIterator &iterator)const;
            int operator*()const;
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
            bool operator==(const SideCrossIterator &iterator) const;
            bool operator!=(const SideCrossIterator &iterator)const;
            bool operator<(const SideCrossIterator &iterator)const;
            bool operator>(const SideCrossIterator &iterator)const;
            int operator*() const;
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
            PrimeIterator &operator=(const PrimeIterator &other) ;
            bool operator==(const PrimeIterator &iterator) const;
            bool operator!=(const PrimeIterator &iterator) const;
            bool operator<(const PrimeIterator &iterator) const;
            bool operator>(const PrimeIterator &iterator)const;
            int operator*() const;
            PrimeIterator operator++(int n);
            PrimeIterator &operator++();
            PrimeIterator begin();
            PrimeIterator end();
        };
    };
}