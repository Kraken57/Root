#pragma once 

#include "Core.h"

namespace Root {
	class ROOT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}