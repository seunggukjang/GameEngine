#pragma once
#include <string>
#include <fstream>
#include <iostream>

class Logger
{
public:
    enum class Severity
    {
        VERBOSE,
        DEBUG,
        EVENT,
        ERROR,
    };
    Logger(Severity severity, bool useConsole) : severityLevel(severity), outStream("Trace.log")
    {
        if (useConsole == true)
        {
            outStream.set_rdbuf(std::cout.rdbuf());
        }
    }

    void LogError(std::string text) { Log(Severity::ERROR, text); }
    void LogEvent(std::string text) { Log(Severity::EVENT, text); }
    void LogDebug(std::string text) { Log(Severity::DEBUG, text); }
    void LogVerbose(std::string text) { Log(Severity::VERBOSE, text); }

private:
    void Log(Severity, std::string displayText);

    std::ofstream outStream;
    Severity severityLevel;
};