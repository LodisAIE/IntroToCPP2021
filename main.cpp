#include <iostream>
#include <cstring>
#include "Engine.h"

int main()
{
	while (true)
	{
		Engine* engine = new Engine();
		engine->run();
		system("pause");
		delete engine;
	}

	return 0;
}