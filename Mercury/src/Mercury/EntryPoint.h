#pragma once

#ifdef HG_PLATFORM_WINDOWS

extern Mercury::Application* Mercury::CreateApplication();

int main(int argv, char** argc) 
{
	Mercury::Log::Init();
	HG_TRACE("Initialised Log!");
	HG_INFO("Initialised Log!");
	HG_WARN("Initialised Log!");
	HG_ERROR("Initialised Log!");
	HG_CRITICAL("Initialised Log!");

	auto app = Mercury::CreateApplication();
	app->Run();

	delete app;
}

#endif