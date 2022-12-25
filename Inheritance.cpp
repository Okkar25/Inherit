#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct values {

int num[2] ;
string str[2] ;
int strCount = 0 ;
int numCount = 0 ;

} ;


class myClass {

public :

int myAge  ;
string myName  ;


myClass ( int id , string name ) {              // constructor

myAge = id ;
myName = name ;

 // cout << "This is constructor : " << endl ;
  //cout << myAge << " : " << myName << endl ;

}


void myMethod( ) {

cout << "This is from my Method" << endl ;
cout << myAge << " : " << myName << endl ;

}


struct values IDGetter () {
values x ;
x.num[0] = bankID ;
x.num[1] = stuff ;
x.numCount += 2 ;

x.str[0] = username ;
x.str[1] = bankPass ;
x.strCount += 2 ;

return x ;

} ;

private :

string username = "Okkar25" ;
int bankID = 25745 ;
int stuff = 3333 ;
string bankPass = "Baymax3476"  ;





};


class Connect : public myClass  {

public :
string subject = "programming" ;

void getAge ( int age ) {

myAge = age ;

cout << myAge << endl ;

}


};



int main()
{

Connect myObj ;
myObj.subject ;

cout << myObj.subject << endl ;

myObj.getAge(1996) ;


//myObj.myAge ;

//cout << myObj.myAge << endl ;

//myObj.myMethod() ;


myClass Obj ( 123 , "Gigabyte") ;
myClass Obj1 ( 456 , "Edinberg") ;

Obj.myMethod() ;
Obj1.myMethod() ;


struct values v = Obj.IDGetter() ;

cout << "\nPrivate Data : " << endl ;

for ( int i = 0 ; i < v.numCount ; i++ ) {

    cout << v.num[i] << endl ;
}

for ( int j = 0 ; j < v.strCount ; j++ ) {

    cout << v.str[j] << endl ;
}


    return 0;
} ;

