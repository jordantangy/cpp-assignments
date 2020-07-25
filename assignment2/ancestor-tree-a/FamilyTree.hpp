#include <iostream>
#include <string>
using namespace std;


namespace family{



    class person{
        public:
        string name;
        string type;
        person* father;
        person* mother;

        public:
        person(string name,std::string type);
        void addParent(string name,std::string type);
        string getType();
        string getMother();
        string getFather();
        ~person();

    };

class Tree{

person *root;

public:
Tree(string name);
Tree& addMother(string name,string mother_name);
Tree& addFather(string name,string father_name);
string relation(string name);
string find(string name);
void remove(string name);
void display();
~Tree();


};

}

