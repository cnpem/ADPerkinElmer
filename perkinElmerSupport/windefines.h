/**  @file windefines.h */


#ifndef WINDEFINES_H
#define WINDEFINES_H



#ifdef __cplusplus
extern "C" {
#endif



#include <stdint.h>
#include <stdio.h>

#include <pthread.h>



typedef int BOOL;
typedef unsigned short WORD;
typedef unsigned int DWORD;
typedef DWORD *PDWORD;
typedef long long LONGLONG;
typedef unsigned long ULONG;
typedef long long __int64;
typedef long LONG;
typedef char CHAR;
typedef unsigned char BYTE;
typedef BYTE *PBYTE;
typedef void *HANDLE;
typedef HANDLE HMODULE;
typedef HANDLE HINSTANCE;
typedef HANDLE HWND;
typedef void *FARPROC;
typedef void *LPVOID;
typedef void VOID;
typedef void *PVOID;
typedef unsigned int UINT;
typedef size_t SIZE_T;

typedef const char *LPCSTR;
typedef char *LPTSTR;



#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef _ASSERT
#define _ASSERT assert
#endif

#ifndef INFINITE
#define INFINITE 0xFFFFFFFFL
#endif

#ifndef WAIT_ABANDONED
#define WAIT_ABANDONED 0x00000080L
#endif

#ifndef WAIT_ABANDONED_0
#define WAIT_ABANDONED_0 WAIT_ABANDONED
#endif

#ifndef WAIT_OBJECT_0
#define WAIT_OBJECT_0 0
#endif

#ifndef WAIT_TIMEOUT
#define WAIT_TIMEOUT 0x00000102L
#endif

#ifndef WAIT_FAILED
#define WAIT_FAILED 0xFFFFFFFFL
#endif

#ifndef STILL_ACTIVE
#   define STILL_ACTIVE 259
#endif

#ifndef ERROR_INVALID_PARAMETER
#define ERROR_INVALID_PARAMETER 0x57
#endif


#ifndef LOBYTE
#define LOBYTE(w) ((char) (w))
#endif

#ifndef HIBYTE
#define HIBYTE(w) ((char) (((WORD) (w) >> 8) & 0xFF))
#endif

#ifndef WINAPI
#define WINAPI
#endif

#ifndef CALLBACK
#define CALLBACK
#endif

#if !defined(__cdecl)
#   if defined(__GNUC__) && !defined(XIS_ARCH_64)
#       define __cdecl __attribute__((__cdecl__))
#   else
#       define __cdecl
#   endif
#endif



typedef union
{
    struct
    {
        DWORD LowPart;
        long HighPart;
    } struct_large_int;
    int64_t QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

typedef struct _SYSTEMTIME
{
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;

typedef struct _PERFORMANCE_INFORMATION
{
    SIZE_T ProcessCount;
    SIZE_T ThreadCount;
    SIZE_T HandleCount;
} PERFORMANCE_INFORMATION, *PPERFORMANCE_INFORMATION;

typedef struct _PROCESS_MEMORY_COUNTERS
{
    SIZE_T WorkingSetSize;
    SIZE_T PagefileUsage;
} PROCESS_MEMORY_COUNTERS, *PPROCESS_MEMORY_COUNTERS;

typedef DWORD (*ThreadProc)(LPVOID lpParameter);

typedef enum
{
    _CRT_WARN = 0,
    _CRT_ERROR,
    _CRT_ASSERT
} ReportType;


typedef struct _OSVERSIONINFOA
{
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR   szCSDVersion[ 128 ];     // Maintenance string for PSS usage
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;
typedef OSVERSIONINFOA OSVERSIONINFO;
typedef POSVERSIONINFOA POSVERSIONINFO;
typedef LPOSVERSIONINFOA LPOSVERSIONINFO;

typedef struct tagRECT
{
    DWORD left;
    DWORD top;
    DWORD right;
    DWORD bottom;
} RECT;

typedef struct _SECURITY_ATTRIBUTES
{
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES;//, *LPSECURITY_ATTRIBUTES;

typedef DWORD (WINAPI *PTHREAD_START_ROUTINE)(
    LPVOID lpThreadParameter
);
typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef pthread_mutex_t CRITICAL_SECTION, *LPCRITICAL_SECTION;


#ifdef __cplusplus
}
#endif

#endif // WINDEFINES_H
