#pragma once

#include "Core.h"

namespace Mercury {
	
	class HG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a CLIENT!
	Application* CreateApplication();
}