//intl.cpp
#include <algorithm>
#include <vector>

#include "intl.h"

istream& read_hw(istream& in, vector<double>& hw);

istream& Intl::read(istream& in) {
	Core::read_common(in);
	in >> thesis;
	read_hw(in, homework); // ??
	return in;
}

double Intl::grade() const {
	return min(Core::grade(), thesis);
}