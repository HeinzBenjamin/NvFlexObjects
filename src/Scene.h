#pragma once
#include "Core.h"
#include "Collider.h"
#include "ForceField.h"
#include "ParticleSystem.h"

namespace NvFlexObjects {
	class Scene
	{
	private:
		float3* _ParticleBuffer;
	public:
		std::vector<ParticleSystem> ParticleSystems;
		std::vector<Collider> Colliders;
		std::vector<ForceField> ForceFields;

		NFO_API Scene();
	};
}

