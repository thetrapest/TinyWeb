#include "currentthread.h"
#include "api.h"
namespace CurrentThread
{

__thread int t_cachedTid = 0;
__thread char t_tidString[32];
__thread const char *t_threadName = "unknown";
void cacheTid()
{
    t_cachedTid = gettid();
    int n = snprintf(t_tidString, sizeof t_tidString, "%5d ",
                     t_cachedTid);
}
}