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

        shape( shape& j ){

            length = j.length ;
            width = j.width ;

        }

} ;

int main(){

    shape first ;

    cout << first.length << " " << first.width << endl ;

    shape second( 20, 30 ) ;

    cout << second.length << " " << second.width << endl ;

    shape third = second ;

    cout << third.length << " " << third.width << endl ;

    return 0 ;

}