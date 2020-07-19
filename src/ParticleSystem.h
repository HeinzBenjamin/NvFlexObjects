#pragma once
#include "Core.h"
#include "Particle.h"
#include "Constraint.h"

namespace NvFlexObjects {
	class ParticleSystem
	{
	private:
		std::vector<Particle> _Particles;
		std::vector<Constraint> _Constraints;
		std::chrono::time_point<std::chrono::system_clock> _Timestamp;
		bool _IsActive;
		bool _SelfCollision;
		uint _GroupIndex;

	public:

		NFO_API ParticleSystem() { }

		NFO_API ParticleSystem(const std::vector<Particle>& particles);

		NFO_API void AddConstraint(const Constraint& constraint);

		NFO_API void AddConstraints(const std::vector<Constraint>& constraints);

		NFO_API std::vector<Constraint> GetConstraints();

		NFO_API void AddParticle(const Particle& particle);

		NFO_API void AddParticles(const std::vector<Particle>& particles);

		NFO_API static ParticleSystem MergeParticleSystems(std::vector<ParticleSystem>& particlesSystems, const bool& makeThemCollide, const float& mergeCoincidingParticlesTolerance = 0.0f);

		NFO_API void SetActiveState(const bool& isActive);

		NFO_API void SetSelfCollision(const bool& selfCollision);
	};
}

