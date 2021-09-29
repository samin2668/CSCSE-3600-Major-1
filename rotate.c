#include "major1.h"

/* Cady Shelhon - cjs0377@my.unt.edu - 9/25/2019 */

int rotate(unsigned long myint, int n) {
	static int BITS = 32;
	//rotate myint n number of times
	return (myint >> n) | (myint << (BITS - n));

}
