#pragma once

#ifdef HG_PLATFORM_WINDOWS

extern Mercury::Application* Mercury::CreateApplication();

int main(int argv, char** argc) 
{
	auto app = Mercury::CreateApplication();
	app->Run();

	delete app;
}

#endif