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

} ;
        
int main(){

    shape first ;

    cout << first.length << " " << first.width << endl ;

    return 0 ;

}