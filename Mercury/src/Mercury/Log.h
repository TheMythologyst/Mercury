#pragma once

#include <memory>

#include "Core.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Mercury {

	class HG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core Logging Macros
#define HG_CORE_TRACE(...)    ::Mercury::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HG_CORE_INFO(...)     ::Mercury::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HG_CORE_WARN(...)     ::Mercury::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HG_CORE_ERROR(...)    ::Mercury::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HG_CORE_CRITICAL(...) ::Mercury::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client Logging Macros
#define HG_TRACE(...)         ::Mercury::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HG_INFO(...)          ::Mercury::Log::GetClientLogger()->info(__VA_ARGS__)
#define HG_WARN(...)          ::Mercury::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HG_ERROR(...)         ::Mercury::Log::GetClientLogger()->error(__VA_ARGS__)
#define HG_CRITICAL(...)      ::Mercury::Log::GetClientLogger()->critical(__VA_ARGS__)