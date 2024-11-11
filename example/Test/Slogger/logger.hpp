#ifndef _SERVERS_LOGGER_H_
#define _SERVERS_LOGGER_H_
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/async.h>
#include <iostream>

namespace SFW
{
    std::shared_ptr<spdlog::logger> g_logger;
    void init_logger(const std::string &logger_name,
                     const std::string &logger_file,
                     spdlog::level::level_enum logger_level)
    {
        spdlog::flush_on(logger_level);
        spdlog::init_thread_pool(32768, 1);
        if (logger_file == "stdout")
        {
            g_logger = spdlog::stdout_color_mt(logger_name);
        }
        else
        {
            g_logger = spdlog::basic_logger_mt<spdlog::async_factory>(logger_name, logger_file);
        }
        g_logger->set_pattern("[%-7l]%H:%M:%S [%n]%v");
        g_logger->set_level(logger_level);
    }

#define SFW_DEBUG(format, ...) SFW::g_logger->debug(std::string("[{:>10s}:{:<4d}] ") + format, __FILE__, __LINE__, ##__VA_ARGS__);
#define SFW_INFO(format, ...) SFW::g_logger->info(std::string("[{:>10s}:{:<4d}] ") + format, __FILE__, __LINE__, ##__VA_ARGS__);
#define SFW_WARN(format, ...) SFW::g_logger->warn(std::string("[{:>10s}:{:<4d}] ") + format, __FILE__, __LINE__, ##__VA_ARGS__);
#define SFW_ERROR(format, ...) SFW::g_logger->error(std::string("[{:>10s}:{:<4d}] ") + format, __FILE__, __LINE__, ##__VA_ARGS__);

}

#endif
