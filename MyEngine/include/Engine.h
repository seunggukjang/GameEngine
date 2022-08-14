#pragma once
#include <Logger.h>

class Engine
{
public:
    Engine() {}
    ~Engine() {}
    static Engine* GetEngine() { return m_Engine; }
    static Logger* GetLogger() { return m_Logger;}
private:
    static Engine *m_Engine;
    static Logger *m_Logger;
};