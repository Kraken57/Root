#pragma once

#ifdef ROOT_PLATFORM_WINDOWS
	#ifdef ROOT_BUILD_DLL
		#define ROOT_API _declspec(dllexport)
	#else
		#define ROOT_API _declspec(dllimport)
	#endif
#else
	#error Root only supports Windows!
#endif
