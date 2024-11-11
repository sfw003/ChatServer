#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <iostream>
int main() 
{
    //设置全局的刷新策略
    spdlog::flush_every(std::chrono::seconds(10)); //每秒刷新
    //遇到debug以上等级日志的消息，立即刷新
    spdlog::flush_on(spdlog::level::level_enum::debug);
    //设计全局日志输出等级，每个日志器可以单独设计
    spdlog::set_level(spdlog::level::level_enum::debug);

    //auto logger = spdlog::stdout_color_mt("default-logger");
    auto logger = spdlog::stdout_color_mt("default-logger");
    //logger->flush_on(spdlog::level::level_enum::debug);
    logger->set_pattern("[%H:%M:%S][%t][%-8l] %v");
    logger->trace("sbsfs");
    logger->debug("sbsfs");
    logger->warn("sbsfs");
    logger->error("sbsfs");


    return 0;
}
