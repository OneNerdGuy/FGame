#pragma once

#include <vec3.hpp>
#include "Entity.h"

namespace Entities
{
	class WalkingEntity : public Entity
	{
	private:
		glm::vec3* _position;
		glm::vec3* _stepDirection;

		void DoStep();
	public:
		WalkingEntity();
		virtual ~WalkingEntity();

		virtual void Update();

		glm::vec3* GetPosition();

		void Step(glm::vec3 stepDirection);
	};
}
