#pragma once

namespace Entities
{
	class Entity
	{
	private:
	public:
		Entity();
		virtual ~Entity();

		virtual void Update();
	};
}
