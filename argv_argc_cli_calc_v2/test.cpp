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
           
     cout<<"=======================================================\n";
     cout<<" MY FIRST PROGRAM FOR TESTING ARGUMENT PARAMETERS V8.01\n";
     cout<<"=======================================================\n";
     cout<<" syntax : test.exe operand_type parameter1 parameter2  \n";
     cout<<"=======================================================\n";
     cout<<"       operand type add,sub,div,mul,inc,dec,mod        \n";
     cout<<"=======================================================\n";


     cout<<"Main function has " <<argc<<" arguments "<<endl ;
     cout<<"======================================================= \n"; 
     cout<<"These arguments are as follows: "<<endl ;
     cout<<"======================================================= \n";  
    
     
     cout<<"\n";  
     cout<<"======================================================= \n";            

     string operand_type = argv[1]; 
     int operand_A = stoi(argv[2]);
     int operand_B = stoi(argv[3]);
            
        if(operand_type=="add"){
              cout<<"A="<<operand_A<<",B="<<operand_B<<",A+B="<<add_result(operand_A,operand_B);
              cout<<" \n";
        }  
        if(operand_type=="sub"){   
              cout <<"A="<<operand_A<<",B="<<operand_B<<",A-B="<<sub_result(operand_A,operand_B);
              cout<<" \n";
        }     
        if(operand_type=="mul"){
              cout<<"A="<<operand_A<<",B="<<operand_B<<",A*B="<<mul_result(operand_A,operand_B);
              cout<<" \n";      
        }     
        if(operand_type=="div"){      
              cout<<"A="<<operand_A<<",B="<<operand_B<<",A/B="<<div_result(operand_A,operand_B);                      
              cout<<" \n";
        }
        if(operand_type=="inc"){
              cout<<"A="<<operand_A<<",A++ ="<<inc_result(operand_A);                      
              cout<<" \n";
        }
        if(operand_type=="dec"){
              cout<<"A="<<operand_A<<",A-- ="<<dec_result(operand_A);                      
              cout<<" \n";
        }
        if(operand_type=="mod")      
              cout<<"A="<<operand_A<<",B="<<operand_B<<",modulus A%B="<<mod_result(operand_A,operand_B);     
              cout<<" \n"; 
    
    cout<<"======================================================= \n";
    cout<<"================== END OF REPORT ====================== \n";
    cout<<"======================================================= \n";
    return 0;
}
