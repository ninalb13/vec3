#pragma once


template <class TYPE>

class Vec3
{
private:
	TYPE x, y, z;

public:
	Vec3(TYPE _x, TYPE _y, TYPE _z) :(x, y, z){}
	Vec2(TYPE _x, TYPE _y) :(x, y) {}

	Vec3 operator +(Vec3 newvec) {

		Vec3 ret = {
		x + newvec.x;
		y + newvec.y;
		z + newvec.z;
		}

		return ret;
	}

	Vec3 operator -(Vec3 newvec) {

		Vec3 ret = {
		x - newvec.x;
		y - newvec.y;
		z - newvec.z;
		}

		return ret;
	}

	Vec3& operator +=(Vec3 newvec) {

		x += newvec.x;
		y += newvec.y;
		z += newvec.z;
		

		return *this;
	}
	Vec3& operator -=(Vec3 newvec) {

		x -= newvec.x;
		y -= newvec.y;
		z -= newvec.z;


		return *this;
	}

	bool operator == (vec3 newvec) {
		return (x == newvec.x && y == newvec.y && z == newvec.z);
	}

	Vec3 Normalise() {
		
		float module = sqrt(x*x + y*y + z*z);
	}
};