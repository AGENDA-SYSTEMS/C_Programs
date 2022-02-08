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

int main(int argc, char** argv)
{    
     
     cout<<" \n";
           
     cout<<"======================================================= \n";
     cout<<" MY FIRST PROGRAM FOR TESTING ARGUMENT PARAMETERS V7.77 \n";
     cout<<"=======================================================\n";
     cout<<"Main function has " <<argc<<" arguments "<<endl ;
     cout<<"======================================================= \n"; 
     cout<<"These arguments are as follows: "<<endl ;
     cout<<"======================================================= \n";  
     for (int i=0; i<argc; i++)
     {
          cout<<argv[i]<<" , ";     
          if(argc <14 || argc >14 ){
          cout<<" ======= ERROR VHODNITE ARGUMENTI NE SA  13! ========";
          exit(0);
     }
       }
     
     cout<<"\n";  
     cout<<"======================================================= \n";            

     int add1 = stoi(argv[1]);
     int add2 = stoi(argv[2]);
                cout<<"A="<<add1<<",B="<<add2<<",A+B="<<add_result(add1,add2);
                cout<<" \n";
           

     int sub1 = stoi(argv[3]);    
     int sub2 = stoi(argv[4]);
              cout <<"A="<<sub1<<",B="<<sub2<<",A-B="<<sub_result(sub1,sub2);
              cout<<" \n";

     int mul1 = stoi(argv[5]);
     int mul2 = stoi(argv[6]);
              cout<<"A="<<mul1<<",B="<<mul2<<",A*B="<<mul_result(mul1,mul2);
              cout<<" \n";      
             
     int div1 = stoi(argv[7]);
     int div2 = stoi(argv[8]);
              cout<<"A="<<div1<<",B="<<div2<<",A/B="<<div_result(div1,div2);                      
              cout<<" \n";
    
     int inc_operand = stoi(argv[9]);
     cout<<"A="<<inc_operand<<",increment A+1="<<inc_result(inc_operand);
              cout<<" \n";
    
         int dec_operand = stoi(argv[10]);
         cout<<"A="<<dec_operand<<",decrement A-1="<<dec_result(dec_operand);
              cout<<" \n";

     int modul1 = stoi(argv[12]);
     int modul2 = stoi(argv[13]);
         cout<<"A="<<modul1<<",B="<<modul2<<",modulus A%B="<<mod_result(modul1,modul2);     
              cout<<" \n"; 
    
    cout<<"======================================================= \n";
    cout<<"================== END OF REPORT ====================== \n";
    cout<<"======================================================= \n";
    return 0;
}
