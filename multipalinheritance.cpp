#include<iostream>

using namespace std;

class person{
    public:
    person(){
        cout<<"PERSON DETAILS : "<<endl;

    }
};
class person2{
    public:
    person2(){
        cout<<"2nd PERSON DETAILS : "<<endl;

    }
};


class child : public person,public person2{

    public:

    child(){
        cout<<"child Details : "<<endl;
    }
};
int main(){

    child obj;

    return 0;

}