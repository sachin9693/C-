#include<iostream>

using namespace std;

class person{
    public:
    person(){
        cout<<"PERSON DETAILS : "<<endl;

    }
};
class person2:public person{
    public:
    person2(){
        cout<<"2nd PERSON DETAILS : "<<endl;

    }
};


class child :public person{

    public:

    child(){
        cout<<"child Details : "<<endl;
    }
};
int main(){

    person2 obj1;
    child obj;

    return 0;

}