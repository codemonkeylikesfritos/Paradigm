#pragma once
#include "Core.h"
namespace Paradigm 
{
	class PARADIGM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
