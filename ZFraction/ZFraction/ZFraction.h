//
//  ZFraction.h
//  ZFraction
//
//  Created by Nathan Benabou on 08/02/2014.
//  Copyright (c) 2014 Nathan Benabou. All rights reserved.
//

#ifndef __ZFraction
#define __ZFraction

#include <iostream>

class ZFraction

{
public:
    ZFraction();
    ZFraction(int numerateur, int denominateur);
    void afficher(std::ostream &flux) const;
    void simplifier();
    void operator+= (const ZFraction& a);

private:
    int m_numerateur;
    int m_denominateur;
};

int pgcd(int a, int b);
std::ostream & operator<< ( std::ostream &flux, ZFraction const& ZFraction);
ZFraction operator+ (const ZFraction& a,const ZFraction& b);

#endif /* defined(__ZFraction__ZFraction__) */
