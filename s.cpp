#include <iostream>

using namespace std;

class Parent {
    public:
        int id_p;
        void display_p(){
            cout<< "parent Id : "<<id_p<<endl;
        }
};
class child : public Parent{
    public:
        int id_c;

        void display_c(){
                 cout<< "child Id : "<<id_c<<endl;
        }
};

int main(){

    child obj;
    obj.id_p = 10;
    obj.display_p();


    obj.id_c = 20;
    obj.display_c();
    
    
    return 0;

};