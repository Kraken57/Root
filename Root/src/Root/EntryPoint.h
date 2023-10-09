#pragma once

#ifdef ROOT_PLATFORM_WINDOWS

extern Root::Application* Root::CreateApplication();
	
int main(int argc, char** argv)
{
	
	auto app = Root::CreateApplication();
	app->Run();
	delete app;
}

#endif
