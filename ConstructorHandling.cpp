#include<iostream>
using namespace std ;

class A{

    public :

        A( int x ){
            cout << "A is : " << x << endl ;
        }

} ;

class C{

    public : 

        C( int x ){
            cout << "C is : " << x << endl ;
        }

} ;

class B : public A, C{

    public :

        B( int x, int y, int z ) : C( x ), A( y ){
            cout << "B is : " << z << endl ;
        }

} ;

int main(){

    B obj( 4, 5, 9 ) ;

    return 0 ;

}