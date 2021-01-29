#include "Log.h"
using namespace std; 

void Log::SetLogLevel(int level){
        m_LogLevel = level;
}

void Log::info(const char* msg){
        if(m_LogLevel >= LOG_INFO)
            cout << "[Info]: " << msg << std::endl;
}

void Log::warn(const char* msg)
    {
        if(m_LogLevel >= LOG_WARN)
            cout << "[Warning]: " << msg << std::endl;
    }

void Log::error(const char* msg)
    {
        if(m_LogLevel >= LOG_ERROR)
            cout << "[Error]: " << msg << std::endl;
    }

