#pragma once

#include "pch.h"

typedef DirectX::XMFLOAT3 float3;
typedef unsigned int uint;


#define NFO_API __declspec(dllexport)

struct Vector3 {
public:
	float X;
	float Y;
	float Z;
	

	Vector3() : X(0.0f), Y(0.0f), Z(0.0f) {}

	Vector3(float x, float y, float z) : X(x), Y(y), Z(z) {}

	Vector3(double x, double y, double z) : X(x), Y(y), Z(z) {}

	Vector3 operator+(const Vector3& rhs) {
		Vector3 vec;
		vec.X = this->X + rhs.X;
		vec.Y = this->Y + rhs.Y;
		vec.Z = this->Z + rhs.Z;
		return vec;
	}

	Vector3 operator+=(const Vector3& rhs) {
		Vector3 vec;
		this->X = this->X + rhs.X;
		this->Y = this->Y + rhs.Y;
		this->Z = this->Z + rhs.Z;
		return vec;
	}

	Vector3 operator-(const Vector3& rhs) {
		Vector3 vec;
		vec.X = this->X - rhs.X;
		vec.Y = this->Y - rhs.Y;
		vec.Z = this->Z - rhs.Z;
		return vec;
	}

	Vector3 operator-=(const Vector3& rhs) {
		Vector3 vec;
		this->X = this->X - rhs.X;
		this->Y = this->Y - rhs.Y;
		this->Z = this->Z - rhs.Z;
		return vec;
	}
};