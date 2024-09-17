#include<iostream>
using namespace std ;

class shape{

    public:

        int length ;
        int width ;

        shape(){

            length = 5 ;
            width = 10 ;

        }

        shape( int x, int y ){

            length = x ;
            width = y ;        

        }

        shape( shape& z ){

            length = z.length ;
            width = z.width ;

        }

        ~shape(){
            cout << "Destructor is called" << endl ;
        }

} ;

int main(){

    shape* first = new shape() ;

    cout << first -> length << " " << first -> width << endl ;

    delete first ;

    shape second( 20, 30 ) ;

    cout << second.length << " " << second.width << endl ;

    shape third = second ;

    cout << third.length << " " << third.width << endl ;

    return 0 ;

}