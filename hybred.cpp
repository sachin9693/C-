#include <iostream>

using namespace std;

class a1
{
public:
    a1()
    {
        cout << "Class 1 : " << endl;
    };
};
    class a2 : public a1
    {
        public:
        a2()
        {
            cout << "Class 2 : " << endl;
        }
    };
    class a3 : public a1, public a2
    {
         public:
        a3()
        {
            cout << "Class 3 : " << endl;
        }
    };
    class a4 : public a3{
         public:
    a4()
    {
        cout << "Class 4 : " << endl;
    }
    };
    class a5 : public a3
    {
         public:
        a5()
        {
            cout << "Class 5 : " << endl;
        }
    };

    int main(){
        a1 obj;
        a2 obj1;
        a3 obj2;
        a4 obj3;
        a5 obj4;

    };
