#include "WalkingEntity.h"


Entities::WalkingEntity::WalkingEntity()
{
	_position = new glm::vec3(1, 1, 1);
}


Entities::WalkingEntity::~WalkingEntity()
{
	delete _position;
	delete _stepDirection;
}


void Entities::WalkingEntity::Update()
{
	Entities::Entity::Update();
	DoStep();
}


void Entities::WalkingEntity::Step(glm::vec3 stepDirection)
{
	if (_stepDirection == nullptr)
	{
		_stepDirection = new glm::vec3(stepDirection);
	}
}


glm::vec3* Entities::WalkingEntity::GetPosition()
{
	return _position;
}


void Entities::WalkingEntity::DoStep()
{
	(*_position) += glm::vec3(2, 2, 2);
}
