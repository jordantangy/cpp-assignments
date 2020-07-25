#include <iostream>
#include <string>
#include <memory>
using namespace std;


namespace family{



    class person{
        public:
        string name;
        string type;
        person* previous ;
        person* father;
        person* mother;
        int num ;
        
    
    
        public:
        person(string name,string type);
        void addParent(person* child, string parent,string type);
        person* search(string name);
        person* searchRelation(string relation);
        person* getParent(string name);
        string getType();
        void remove();
        person* searchSon(string name);
        void setMother(person* p);
        void setFather(person* p);
        void setType(string s);
        string getName();
        person* getMother();
        person* getFather();
        void setFatherToNull()
        {
        this->father = NULL;
        }

        void setMotherToNull()
        {
        this->mother = NULL;
        }
        ~person(){
             setFatherToNull();
             setMotherToNull();
        }
    
      

    };

class Tree{
public:
person *root ;

public:
Tree(string name);
Tree& addMother(string child_name,string mother_name);
Tree& addFather(string child_name,string father_name);
string relation(string name);
string find(string relation);
void remove(string name);
void display();
void printTree(person *root);
~Tree();


};

}

