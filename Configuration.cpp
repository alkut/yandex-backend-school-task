#include "Configuration.h"

void InitLogging(char **argv)
{
    FLAGS_logtostderr = false;
    FLAGS_timestamp_in_logfile_name = false;
    google::InitGoogleLogging(argv[0]);
    google::SetLogDestination(0, logging_path.c_str());
}
