#include <iostream>

#include "foo.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mul.hpp"
#include "div.hpp"
#include "inc.hpp"
#include "dec.hpp"
#include "mod.hpp"
using namespace std;

int main(){
    cout <<"hello world!";
    
    int foo_result=0;
    foo_result = foo(21);
         cout<<" foo result ";
    cout <<foo_result;
    cout <<"-"; 
         cout <<" add result "; 
    cout<<add_result(3,5);
    cout <<"-"; 
         cout <<" sub result "; 
    cout<<sub_result(10,1);
    cout <<"-"; 
         cout <<" mul result "; 
    cout<<mul_result(2,4);
    cout <<"-"; 
         cout<<" div result ";
    cout<<div_result(6,2);
    cout <<"-"; 
         cout<<" inc result ";
    cout<<inc_result(8);
    cout <<"-"; 
         cout<<dec_result(8);
        cout<<" dec result ";
    cout<<"-";

        cout<<mod_result(7,2);
        cout<<" mod result ";
    cout<<"-";
    
    
    return 0;
}
