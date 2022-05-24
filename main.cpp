#include <iostream>
using namespace std;

//void longBurb(int x);
int power(int base, int exponent);

int main(){
    cout<<power(3,4);

};

int power(int base, int exponent){

    if ( exponent ==1){

        return base;

    }

    else {

        int result;
        // 3*power(3,4-1)recursive calls

        result= base*power (base,(exponent-1));

        return result;

    }

}