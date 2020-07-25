#include <iostream>
#include <exception>
#include <memory>
#include "FamilyTree.hpp"



family::person::person(string name,string type){
    this->name = name;
    this->type = type;
    this->father = NULL;
    this->mother = NULL;
    this->previous = NULL;
}
void family::person::addParent(person* child, string parent_name,string type){

    if(type == "mother"){
        family::person* m = new family::person(parent_name,type);
        this->mother = m;
        m->previous = this;
        m->num = (this->num)+1;
        return;
    }
    else{
        family::person* f = new family::person(parent_name,type);
        this->father = f;
        f->previous = this;
        f->num = (this->num)+1;
        return;

    }

}
family::person* family::person::search(string name){
   if (this->name == name){
        return this;
    }
    family::person* ansF = NULL;
    family::person* ansM = NULL;
    if (this->father != NULL) ansF = (this->getFather())->search(name);
    if (this->mother != NULL) ansM = (this->getMother())->search(name);
    if (ansM != NULL){
        return ansM; 
    }
    if (ansF != NULL){
        return ansF; 
    }
    return NULL;
}
family::person* family::person::searchRelation(string relation){
    
   if (this->getType() == relation){
        return this;
    }
    family::person* ansF = NULL;
    family::person* ansM = NULL;
    if (this->father != NULL) ansF = (this->getFather())->searchRelation(relation);
    if (this->mother!= NULL) ansM = (this->getMother())->searchRelation(relation);
    if (ansM  != NULL){
        return ansM; 
    }
    if (ansF != NULL){
        return ansF; 
    }
    return NULL;
}
family::person* family::person::searchSon(string name){
    if (this->father != NULL){
        if (this->father->name == name)return this;
    }
    if (this->mother != NULL){
        if (this->mother->name == name)return this;
    }
    family::person* ansF = NULL;
    family::person* ansM = NULL;
    if (this->father != NULL) ansF = (this->getFather())->searchSon(name);
    if (this->mother != NULL) ansM = (this->getMother())->searchSon(name);
    if (ansM != NULL){
        return ansM; 
    }
    if (ansF != NULL){
        return ansF; 
    }
    return NULL;
}


void family::person::setMother(person* p){
    this->mother = p; 
}
void family::person::setFather(person* p){
    this->father = p;
}

string family::person::getType(){
    
    return this->type;
}
void family::person::setType(string s){
    this->type = s;
}
family::person* family::person::getMother(){
    return this->mother;
}
family::person* family::person::getFather(){
    return this->father;
}
string family::person::getName(){
    return this->name;
}

void family::person::remove(){
    if (this->father != NULL) this->father->remove();
    if (this->mother != NULL) this->mother->remove();
    delete this;
}


//Tree

family::Tree::Tree(string name){
     family::person *person = new family::person(name, "me");
    this->root = person;
    root->num = 0;
}
family::Tree& family::Tree::addMother(string child_name,string mother_name){

    family::person* toAdd = (this->root)->family::person::search(child_name);
    if(toAdd == NULL) throw "child not found";
    if(toAdd->getMother() != NULL) throw "Can't add another mother";
    toAdd->family::person::addParent(toAdd,mother_name,"mother");
    return *this;
       
}
family::Tree& family::Tree::addFather(string child_name,string father_name){

    family::person* toAdd = (this->root)->family::person::search(child_name);
    if(toAdd == NULL) throw "child not found";
    if(toAdd->getMother() != NULL) throw "Can't add another father";
    toAdd->family::person::addParent(toAdd,father_name,"father");
     return *this;
}

string family::Tree::relation(string name){
    family::person* p = (this->root)->family::person::search(name);
    if (p == NULL) return "unrelated";
    string great = "great-";
    string ans= "";
    int num = p->num;
    if(num == 1 ) return p->getType();
    if(num == 2) return "grand"+p->getType();
    else{
        p->setType("grand"+p->getType());
        for (size_t i = 0; i < num-2; i++)
        {
           ans += great;

        }
    }
    p->setType(ans+p->getType());
    return p->getType();
}
string family::Tree::find(string relation){
     family::person* toFind = (this->root)->family::person::searchRelation(relation);
    if(toFind == NULL) throw "relation not found";
    if(toFind->num > 2){
        string s = family::Tree::relation(toFind->getName());
        toFind->setType(s);
    }
    return toFind->getName();
}
void family::Tree::remove(string name){

      if (name == this->root->getName()) throw name + "is root";
    family::person* toRemove = (this->root)->family::person::search(name); 
    if (toRemove == NULL) throw "name not found";
    family::person* son = (this->root)->family::person::searchSon(name);
    if (toRemove == NULL) throw "son not found";
    if (son->getFather() != NULL){
        if (son->getFather()->getName() == name) son->setFather(NULL);
    }
    if (son->getMother() != NULL){
        if (son->getMother()->getName() == name) son->setMother(NULL);
    }
    toRemove->remove();
}



void family::Tree::display(){

     printTree(root);
    cout << endl;

}

void family::Tree::printTree(person *root)
{
   
    cout << root->getName() << endl;
    if (root != NULL)
    {
        if (root->getFather() != NULL)
        {
            printTree(root->getFather());
        }
        if (root->getMother() != NULL)
        {   
             printTree(root->getMother());
        }
    }
    else
    {
        throw runtime_error("The tree is empty!!\n");
    }
}

family::Tree::~Tree(){

}