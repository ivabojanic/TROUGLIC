#include <iostream>
using namespace std;

#include "JSTrougao.hpp"

int main()
{
    Trougao T(2,5,5);
    JKTrougao jk(3,4);
    JSTrougao js(5);

    cout<<T.getP()<<endl;
    cout<<jk.getP()<<endl;
    cout<<js.getP()<<endl;

    return 0;
}
