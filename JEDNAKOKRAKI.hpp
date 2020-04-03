#ifndef JKTROUGAO_HPP_INCLUDED
#define JKTROUGAO_HPP_INCLUDED

#include "TROUGAO.hpp"

class JKTrougao : public Trougao
{
    public:
        JKTrougao() : Trougao(3, 5, 5) {}
        JKTrougao(double aa, double bb) : Trougao(aa, bb, bb) {}
        JKTrougao(const JKTrougao &jt) : Trougao(jt.a, jt.b, jt.c) {}
};

#endif // JKTROUGAO_HPP_INCLUDED
