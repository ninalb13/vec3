#include "Header.h"

void main() {
	Vec3<int> v1 = { 1, 1, 1 };
	Vec3<int> v2 = { 2, 0 };

	Vec3<int> v3 = v1 + v2;
	v3 += v1;
	v3 -= v2;

	v3.Normalise();

}