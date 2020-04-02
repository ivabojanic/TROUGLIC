#ifndef JSTROUGAO_HPP_INCLUDED
#define JSTROUGAO_HPP_INCLUDED

#include "JKTrougao.hpp"

class JSTrougao : public JKTrougao
{
    public:
        JSTrougao() : JKTrougao(4, 4) {}
        JSTrougao(double aa) : JKTrougao(aa, aa) {}
        JSTrougao(const JSTrougao &js) : JKTrougao(js.a, js.b) {}
};

#endif // JSTROUGAO_HPP_INCLUDED
