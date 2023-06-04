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

    bool MagicalContainer::AscendingIterator::operator==(const MagicalContainer::AscendingIterator &iterator) const{
        return true;
    }
    bool MagicalContainer::AscendingIterator::operator!=(const MagicalContainer::AscendingIterator &iterator)const {
        return false;
    }
    bool MagicalContainer::AscendingIterator::operator<(const MagicalContainer::AscendingIterator &iterator) const{
        return true;
    }
    bool MagicalContainer::AscendingIterator::operator>(const MagicalContainer::AscendingIterator &iterator) const{
        return true;
    }
    int MagicalContainer::AscendingIterator::operator*()const {
        
        return 0;
    }
    MagicalContainer::AscendingIterator & MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other) {
        
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++(int n) {
        return *this;
    }
    MagicalContainer::AscendingIterator & MagicalContainer::AscendingIterator::operator++() {
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() {
        return *this;
    }
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() {
        return *this;
    }

    

    
    MagicalContainer::SideCrossIterator::SideCrossIterator(){}
    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer copy){}
    MagicalContainer::SideCrossIterator & MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other){
        return *this;
    }
    bool MagicalContainer::SideCrossIterator::operator==(const MagicalContainer::SideCrossIterator &iterator)const{
        return true;
    }
    bool MagicalContainer::SideCrossIterator::operator!=(const MagicalContainer::SideCrossIterator &iterator)const{
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator<(const MagicalContainer::SideCrossIterator &iterator)const{
        return true;
    }
    bool MagicalContainer::SideCrossIterator::operator>(const MagicalContainer::SideCrossIterator &iterator)const{
        return true;
    }
    int  MagicalContainer::SideCrossIterator::operator*()const{
        
        return 0;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++(int n){
        return *this;
    }
    MagicalContainer::SideCrossIterator & MagicalContainer::SideCrossIterator::operator++(){
        return *this;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(){
        return *this;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(){
        return *this;
    }


    MagicalContainer::PrimeIterator::PrimeIterator(){}
    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer copy){}
    MagicalContainer::PrimeIterator & MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &other){
        return *this;
    }
    bool MagicalContainer::PrimeIterator::operator==(const MagicalContainer::PrimeIterator &iterator)const{
        return true;
    }
    bool MagicalContainer::PrimeIterator::operator!=(const MagicalContainer::PrimeIterator &iterator)const{
        return false;
    }
    bool MagicalContainer::PrimeIterator::operator<(const MagicalContainer::PrimeIterator &iterator)const{
        return true;
    }
    bool MagicalContainer::PrimeIterator::operator>(const MagicalContainer::PrimeIterator &iterator)const{
        return true;
    }
    int  MagicalContainer::PrimeIterator::operator*()const{
        
        return 0;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++(int n){
        return *this;
    }
    MagicalContainer::PrimeIterator & MagicalContainer::PrimeIterator::operator++(){
        return *this;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(){
        return *this;
    }
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(){
        
        return *this;
    }
 
}