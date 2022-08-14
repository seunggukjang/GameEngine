#pragma once
#include <Engine.h>

Engine* Engine::m_Engine = new Engine();
Logger* Engine::m_Logger = new Logger(Logger::Severity::EVENT, false);