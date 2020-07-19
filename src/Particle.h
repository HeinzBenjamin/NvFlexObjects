#pragma once

#include "Core.h"

namespace NvFlexObjects {
	struct Particle
	{
	private:
		float3 _Position;
		float3 _Velocity;
		float _Mass;

	public:			

		Particle(float positionX = 0.0f, float positionY = 0.0f, float positionZ = 0.0f, float velocityX = 0.0f, float velocityY = 0.0f, float velocityZ = 0.0f, float mass = 1.0f);

		Vector3 GetPosition() { return Vector3(_Position.x, _Position.y, _Position.z); }

		void SetPosition(const Vector3& position) { _Position = { position.X, position.Y, position.Z }; }

		Vector3 GetVelocity() { return Vector3(_Velocity.x, _Velocity.y, _Velocity.z); }

		void SetVelocity(const Vector3& position) { _Position = { position.X, position.Y, position.Z }; }

		float GetMass() { return _Mass; }

		void SetMass(const float& mass) { _Mass = mass; }

		/* Rule of three
		Particle(const Particle& p);				//copy constructor
		Particle& operator = (const Particle& p);	//assignment operator
		~Particle();								//destructor
		*/
	};
}