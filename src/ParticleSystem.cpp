#include "pch.h"
#include "ParticleSystem.h"

using NvFlexObjects::ParticleSystem;

NFO_API NvFlexObjects::ParticleSystem::ParticleSystem(const std::vector<Particle>& particles) : _Particles(particles), _GroupIndex(0)
{
	 _Timestamp = std::chrono::system_clock::now();
}

NFO_API void NvFlexObjects::ParticleSystem::AddConstraint(const Constraint& constraint)
{
	_Constraints.push_back(constraint);
	_Timestamp = std::chrono::system_clock::now();
}

NFO_API void NvFlexObjects::ParticleSystem::AddConstraints(const std::vector<Constraint>& constraints)
{
	_Constraints.insert(_Constraints.end(), constraints.begin(), constraints.end());
	_Timestamp = std::chrono::system_clock::now();
}

NFO_API std::vector<Constraint> NvFlexObjects::ParticleSystem::GetConstraints()
{
	return _Constraints;
}

NFO_API void NvFlexObjects::ParticleSystem::AddParticle(const Particle& particle)
{
	_Particles.push_back(particle);
	_Timestamp = std::chrono::system_clock::now();
}

NFO_API void NvFlexObjects::ParticleSystem::AddParticles(const std::vector<Particle>& particles)
{
	_Particles.insert(_Particles.end(), particles.begin(), particles.end());
	_Timestamp = std::chrono::system_clock::now();
}

NFO_API ParticleSystem NvFlexObjects::ParticleSystem::MergeParticleSystems(std::vector<ParticleSystem>& particlesSystems, const bool& makeThemCollide, const float& mergeConcidingParticlesTolerance)
{
	ParticleSystem new_ps;

	uint offset = 0;

	if (mergeConcidingParticlesTolerance == 0.0f) {
		std::for_each(std::execution::seq, particlesSystems.begin(), particlesSystems.end(), [&](ParticleSystem p)
			{
				std::for_each(std::execution::seq, p.GetConstraints().begin(), p.GetConstraints().end(), [&](Constraint c)
					{
						c.Indices += offset;
						new_ps.AddConstraint(c);
					});

				new_ps._Particles.insert(new_ps._Particles.end(), p._Particles.begin(), p._Particles.end());
				offset = new_ps._Particles.size();
			});
	}
	else
	{
		//CONTINUE HERE!!!!
		float sqTol = mergeConcidingParticlesTolerance * mergeConcidingParticlesTolerance;
	}
	

	new_ps._Timestamp = std::chrono::system_clock::now();
	return new_ps;
}

NFO_API void NvFlexObjects::ParticleSystem::SetActiveState(const bool& isActive)
{
	_IsActive = isActive;
	_Timestamp = std::chrono::system_clock::now();
}

NFO_API void NvFlexObjects::ParticleSystem::SetSelfCollision(const bool& selfCollision)
{
	_SelfCollision = selfCollision;
	_Timestamp = std::chrono::system_clock::now();
}
