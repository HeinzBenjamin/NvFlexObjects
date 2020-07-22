#pragma once
#include "Core.h"

namespace NvFlexObjects {
	extern "C" {
		struct Vector3 {
		public:
			float X;
			float Y;
			float Z;

			NFO_API Vector3() : X(0.0f), Y(0.0f), Z(0.0f) {}

			NFO_API Vector3(float x, float y, float z) : X(x), Y(y), Z(z) {}

			NFO_API Vector3(double x, double y, double z) : X(x), Y(y), Z(z) {}

			NFO_API Vector3 operator+(const Vector3& rhs) {
				this->X += rhs.X;
				this->Y += rhs.Y;
				this->Z += rhs.Z;
				return *this;
			}

			NFO_API Vector3 operator+=(const Vector3& rhs) {
				this->X += rhs.X;
				this->Y += rhs.Y;
				this->Z += rhs.Z;
				return *this;
			}

			NFO_API Vector3 operator-(const Vector3& rhs) {
				this->X -= rhs.X;
				this->Y -= rhs.Y;
				this->Z -= rhs.Z;
				return *this;
			}

			NFO_API Vector3 operator-=(const Vector3& rhs) {
				this->X -= rhs.X;
				this->Y -= rhs.Y;
				this->Z -= rhs.Z;
				return *this;
			}
		};	
	}
}