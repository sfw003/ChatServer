#include "logger.hpp"
#include "gflags/gflags.h"

DEFINE_string(log_name, "default-logger", "日志器名称");
DEFINE_string(log_file, "stdout", "日志输出文件，默认为stdout");
DEFINE_int32(log_level, 0, "用于指定日志输出等级");

int main(int argc, char* argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    SFW::init_logger(FLAGS_log_name, FLAGS_log_file, (spdlog::level::level_enum)FLAGS_log_level);
    SFW_DEBUG("sfwnb");
    return 0;
}
