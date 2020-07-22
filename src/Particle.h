#pragma once

#include "Core.h"
#include "Vector.h"

namespace NvFlexObjects {
	extern "C" {
		struct Particle
		{
		private:
			float3 _Position;
			float3 _Velocity;
			float _Mass;

		public:

			NFO_API Particle(float positionX, float positionY, float positionZ, float velocityX, float velocityY, float velocityZ, float mass);

			NFO_API Vector3 GetPosition() { return Vector3(_Position.x, _Position.y, _Position.z); }

			NFO_API void SetPosition(const Vector3& position) { _Position = { position.X, position.Y, position.Z }; }

			NFO_API Vector3 GetVelocity() { return Vector3(_Velocity.x, _Velocity.y, _Velocity.z); }

			NFO_API void SetVelocity(const Vector3& position) { _Position = { position.X, position.Y, position.Z }; }

			NFO_API float GetMass() { return _Mass; }

			NFO_API void SetMass(const float& mass) { _Mass = mass; }

			/* Rule of three
			Particle(const Particle& p);				//copy constructor
			Particle& operator = (const Particle& p);	//assignment operator
			~Particle();								//destructor
			*/
		};
	}
}