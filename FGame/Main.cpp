#include <iostream>
#include <stdlib.h>

#include "WalkingEntity.h"

int main()
{
	auto walkingEntity = new Entities::WalkingEntity();
	while (true) {
		system("cls");

		float x = walkingEntity->GetPosition()->x;
		float y = walkingEntity->GetPosition()->y;
		float z = walkingEntity->GetPosition()->z;

		std::cout << "X: " << x << "; Y: " << y << "; Z: " << z << std::endl;
		walkingEntity->Update();

		std::cin.get();
	}
}
