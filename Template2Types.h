#ifndef TEMPLATETYPES_H
#define TEMPLATETYPES_H

template <class T,class U>

T GetMin(T a, U b){
	return ((a > b) ? a : b);
}

#endif

