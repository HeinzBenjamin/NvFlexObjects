#include "pch.h"
#include "Particle.h"

using NvFlexObjects::Particle;


NvFlexObjects::Particle::Particle(float positionX, float positionY, float positionZ, float velocityX, float velocityY, float velocityZ, float mass) : _Position({ positionX, positionY, positionZ }), _Velocity({ velocityX, velocityY, velocityZ }), _Mass(mass)
{}