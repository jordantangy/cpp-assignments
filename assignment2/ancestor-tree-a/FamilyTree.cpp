#include <iostream>
#include "FamilyTree.hpp"



family::person::person(string name, string type){
    
}
void family::person::addParent(string name,string type){}
string family::person::getType(){
    return "ans";
}
string family::person::getMother(){
    return "ans";
}
string family::person::getFather(){
    return "ans";
}
family::person::~person(){}

family::Tree::Tree(std::string name){}
family::Tree& family::Tree::addMother(string name,string mother_name){
    return *this;
}
family::Tree& family::Tree::addFather(string name,string father_name){
      return *this;
}
string family::Tree::relation(string name){
    return "ans";
}
string family::Tree::find(string name){
    return "ans";
}
void family::Tree::remove(string name){
    
}
void family::Tree::display(){}
family::Tree::~Tree(){}
