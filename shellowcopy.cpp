#include <iostream>
using namespace std;

class student {
    private:

    int height;
    int length;
    int width;
    int *x;

    public:
    void studentDetails(int h , int l, int w,int *x){

        height = h;
        length = l;
        width  = w;
       x = new int; 
       *x = *x;
    };


    void showdetails(){
        cout <<"student height"<<height<<endl;
        cout <<"student length"<<length<<endl;
        cout <<"student width"<<width<<endl;
        cout <<"student x"<<*x<<endl;
    };
};

int main(){

    student st1 , st3;

    int value = 100;
    
    st1.studentDetails(20,10,30,&value);
    st1.showdetails();


    student st2;
    st2.showdetails();

    st3 = st1;
    st3.showdetails();
    return 0;
};

