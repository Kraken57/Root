

#include <Root.h>

class Sandbox : public Root::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Root::Application* Root::CreateApplication()
{
	return new Sandbox();
}