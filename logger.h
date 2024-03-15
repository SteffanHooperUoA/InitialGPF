// GP Framework
#ifndef __LOGGER_H__
#define __LOGGER_H__

// Class declaration:
class Logger
{
    // Member methods:
public:
    static Logger& GetInstance();
    static void DestroyInstance();
    
    void Log(const char* pcMessage);

protected:

private:
    Logger();
    ~Logger();

    Logger(const Logger& logger);
    Logger& operator=(const Logger& logger);

    // Member data:
public:

protected:
    static Logger* sm_pInstance;

private:

};

#endif // __LOGGER_H__
