#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <stdio.h>
#include "MagicalContainer.hpp"
using namespace std;
namespace ariel
{

    void MagicalContainer::addElement(int element) {}
    int MagicalContainer::size() {
        return 0;
    }
    void MagicalContainer::removeElement(int remove) {}

    MagicalContainer::AscendingIterator::AscendingIterator() {
    }
    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer copy) {}

    bool operator==(const MagicalContainer::AscendingIterator &iterator1, const MagicalContainer::AscendingIterator &iterator2) {
        return true;
    }
    bool operator!=(const MagicalContainer::AscendingIterator &iterator1, const MagicalContainer::AscendingIterator &iterator2) {
        return false;
    }
    bool operator<(const MagicalContainer::AscendingIterator &iterator1, const MagicalContainer::AscendingIterator &iterator2) {
        return true;
    }
    bool operator>(const MagicalContainer::AscendingIterator &iterator1, const MagicalContainer::AscendingIterator &iterator2) {
        return true;
    }
    int MagicalContainer::AscendingIterator::operator*() {
        
        return 0;
    }
    MagicalContainer::AscendingIterator & MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other) {
        
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++(int n) {
        MagicalContainer container;
        return container;
    }
    MagicalContainer::AscendingIterator & MagicalContainer::AscendingIterator::operator++() {
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() {
        MagicalContainer container;
        return container;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() {
        MagicalContainer container;
        return container;
    }

    

    
    MagicalContainer::SideCrossIterator::SideCrossIterator(){}
    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer copy){}
    MagicalContainer::SideCrossIterator & MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other){
        return *this;
    }
    bool operator==(const MagicalContainer::SideCrossIterator &iterator1, const MagicalContainer::SideCrossIterator &iterator2){
        return true;
    }
    bool operator!=(const MagicalContainer::SideCrossIterator &iterator1, const MagicalContainer::SideCrossIterator &iterator2){
        return false;
    }
    bool operator<(const MagicalContainer::SideCrossIterator &iterator1, const MagicalContainer::SideCrossIterator &iterator2){
        return true;
    }
    bool operator>(const MagicalContainer::SideCrossIterator &iterator1, const MagicalContainer::SideCrossIterator &iterator2){
        return true;
    }
    int  MagicalContainer::SideCrossIterator::operator*(){
        
        return 0;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++(int n){
        MagicalContainer container;
        return container;
    }
    MagicalContainer::SideCrossIterator & MagicalContainer::SideCrossIterator::operator++(){
        return *this;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(){
        MagicalContainer container;
        return container;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(){
        MagicalContainer container;
        return container;
    }


    MagicalContainer::PrimeIterator::PrimeIterator(){}
    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer copy){}
    MagicalContainer::PrimeIterator & MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &other){
        return *this;
    }
    bool operator==(const MagicalContainer::PrimeIterator &iterator1, const MagicalContainer::PrimeIterator &iterator2){
        return true;
    }
    bool operator!=(const MagicalContainer::PrimeIterator &iterator1, const MagicalContainer::PrimeIterator &iterator2){
        return false;
    }
    bool operator<(const MagicalContainer::PrimeIterator &iterator1, const MagicalContainer::PrimeIterator &iterator2){
        return true;
    }
    bool operator>(const MagicalContainer::PrimeIterator &iterator1, const MagicalContainer::PrimeIterator &iterator2){
        return true;
    }
    int  MagicalContainer::PrimeIterator::operator*(){
        
        return 0;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++(int n){
        MagicalContainer container;
        return container;
    }
    MagicalContainer::PrimeIterator & MagicalContainer::PrimeIterator::operator++(){
        return *this;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(){
        MagicalContainer container;
        return container;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(){
        MagicalContainer container;
        return container;
    }
 
}