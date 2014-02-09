//
//  ZFraction.cpp
//  ZFraction
//
//  Created by Nathan Benabou on 08/02/2014.
//  Copyright (c) 2014 Nathan Benabou. All rights reserved.
//

#include "ZFraction.h"
#include <iostream>
using namespace std;

ZFraction:: ZFraction(int numerateur, int denominateur): m_numerateur(numerateur), m_denominateur(denominateur)
{
    
}

int pgcd(int a, int b)
{
    while (b!=0)
    {
        const int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

void ZFraction::afficher(ostream &flux) const
{
    flux << m_numerateur << "/" << m_denominateur << endl;
}

ostream& operator<< ( ostream &flux, ZFraction const& ZFraction)
{
    ZFraction.afficher(flux);
    return flux;
}

void ZFraction::simplifier()
{
    int a (pgcd(m_numerateur,m_denominateur));
    m_numerateur/=a;
    m_denominateur/=a;
}

void ZFraction:: operator+=(const ZFraction& a)
{
    m_numerateur=m_numerateur*a.m_denominateur+a.m_numerateur*m_denominateur;
    m_denominateur*=a.m_denominateur;
}

ZFraction operator+ (const ZFraction& a,const ZFraction& b)
{
    ZFraction copie (a);
    copie += b;
    copie.simplifier();
    return copie;
}



