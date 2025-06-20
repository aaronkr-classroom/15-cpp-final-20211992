#pragma once
// intl.h

#ifndef GUARD_intl_h
#define GUARD_intl_h

#include <iostream>

#include "Core.h"

using namespace std;

class Intl : public Core {
public:
	Intl() : thesis(0) { };
	Intl(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double thesis; // Á¹¾÷ ³í¹®
	Intl* clone() const { return new Intl(*this); }
};

#endif

