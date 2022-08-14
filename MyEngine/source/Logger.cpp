#pragma once
#include <Logger.h>

void Logger::Log(Logger::Severity severity, std::string displayText)
{
    switch (severity)
    {
    case Logger::Severity::VERBOSE:
        std::cout << "VERBOSE : " << "\t" << displayText << std::endl;
        break;
    case Logger::Severity::DEBUG:
        std::cout << "DEBUG : " << "\t" << displayText << std::endl;
        break;
    case Logger::Severity::EVENT:
        std::cout << "EVENT : " << "\t" << displayText << std::endl;
        break;
    case Logger::Severity::ERROR:
        std::cout << "ERROR : " << "\t" << displayText << std::endl;
        break;
    }
}