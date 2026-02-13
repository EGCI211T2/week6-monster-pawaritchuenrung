#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {


    monster A("Siri ",10,1);
    monster B("Daisuke ");//name ,hp, potion if hp&potion are filled it will be set as default value
    B+=10;
    --A;

    if(A>B) 

    monster x[5] = {{"James"},{"Michael"},{"Saharah"},{"Somchai"},{"Somying"}};
    monster C;
    B.display();

    /*
    monster *p;
    p=&C;
    p->display();
    p=&A
    p->display();

    p=new monster("Sarina",20);
    p->display();
    delete []p;//delete whenever u dont wanna use leaw
    p=newmonster[3];
    delete []p;
    */   
    p=new monster(50,2);

    cout<<"======= The stronger hp is ===========\n"
    /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
