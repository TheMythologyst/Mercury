#include <Mercury.h>

class Sandbox : public Mercury::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Mercury::Application* Mercury::CreateApplication()
{
	return new Sandbox();
}