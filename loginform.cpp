#include<iostream>
#include<fstream>
#include <string>


using namespace std;


class studend{
    public:

    string userName,Email,password;
    fstream file;
    void login();
    void singUp();
    void forget();

}obj;


void student :: singUp(){
    cout"Enter Your Name : ";
    getline(cin,userName);
    cout"Enter Your Email  : ";
    getline(cin,Email);
    cout"Enter Your PAssword : ";
    getline(cin,password);

    file.open("login.txt", ios ::out | ios :: app);

    file<<userName<<"*"<<Email<<"*"<<password<<endl;

    file.close();
}
void student :: login(){

    string searchName,SearchPassword;

    cout"---------------Login----------------: ";
    cout"Enter Your Name : ";
    getline(cin,searchName);
   
    cout"Enter Your PAssword : ";
    getline(cin,SearchPassword);

    file.open("login.txt", ios ::in );

    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'*');

    while(!file.efo()){
        if(userName == searchName){
            if(password == SearchPassword){
                cout<<"\n Account Login Succesfull......!";
                cout<<"\nUserName"<<userName<<endl;
                cout<<"\nUserEmail"<<Email<<endl;
            }
        }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    }
}

int main(){


string choice;

cout<<"\n 1- login";
cout<<"\n 2- singUp";
cout<<"\n 3- forget";
cout<<"\n 4- exit";
cout<<"\n 5- Enter your choice : ";

cin>>choice;

switch(choice){
    case "1":

    break;
   
    case "2":

    break;
    case "3":

    break;
    case "4":

    break;
    default:
    cout<<"Invalide.....!"
}

};

