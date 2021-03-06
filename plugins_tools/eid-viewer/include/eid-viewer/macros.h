#ifndef EID_VWR_MACROS_H
#define EID_VWR_MACROS_H

#ifdef WIN32
#define DllExport __declspec( dllexport )
#define SLEEP(x) Sleep(x*1000)
#else
#include <unistd.h>
#define DllExport __attribute__((visibility("default")))
#define SLEEP(x) sleep(x)
#endif

#endif
