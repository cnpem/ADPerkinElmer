#ifndef _DATATYPE_H
#define _DATATYPE_H

#define OK                      0
#define ERRORMAPLOADED          1
#define EQUALIZEHISTOGRAM       64

#define SD_DATATYPE_CHANGED     0x1
#define SD_BOUNDS_CHANGED       0x2
#define SD_RANGE_CHANGED        0x4
#define SD_INVERTATION_CHANGED  0x8
#define SD_ERROR_CHANGED        0x10
#define SD_SIZE_CHANGED         0x20
#define SD_ACCESS_DENIED        0x40
#define SD_ERROR_MEMORY         0x80
#define SD_NEW_BUFFER           0x100
#define SD_VALID                0x200
#define SD_SELECTION_CHANGED    0x400
#define SD_REDRAW               0x800
#define SD_SYSTEM_TOO_SLOW      0x1000
#define SD_START_SEQ            0x2000
#define SD_CHECK_FRAME          0x4000
#define SD_INITIALUPDATE        0x8000

#define DT_DATA         1
#define DT_NOISE        2
#define DT_LAG          4
#define DT_UNIFORMITY   8
#define DT_MATH         16

#define CORRDATASIZE    9

#ifndef XIS_MIN
    #define XIS_MIN(a, b) (((a) < (b)) ? (a) : (b))
#endif




#ifdef __linux__

#define HIS_RETURN          UINT
#define MAX_PATH            260

#define STATUS_WAIT_0       ((DWORD   )0x00000000L)

#define WPARAM              UINT
#define LPARAM              UINT

#define THREAD_PRIORITY_ERROR_RETURN    (MAXLONG)

#define OWNER_SECURITY_INFORMATION      (0X00000001L)
#define GROUP_SECURITY_INFORMATION      (0X00000002L)
#define DACL_SECURITY_INFORMATION       (0X00000004L)
#define SACL_SECURITY_INFORMATION       (0X00000008L)

#define STANDARD_RIGHTS_REQUIRED         (0x000F0000L)
#define SYNCHRONIZE                      (0x00100000L)

#define PROCESS_TERMINATE         (0x0001)
#define PROCESS_CREATE_THREAD     (0x0002)
#define PROCESS_SET_SESSIONID     (0x0004)
#define PROCESS_VM_OPERATION      (0x0008)
#define PROCESS_VM_READ           (0x0010)
#define PROCESS_VM_WRITE          (0x0020)
#define PROCESS_DUP_HANDLE        (0x0040)
#define PROCESS_CREATE_PROCESS    (0x0080)
#define PROCESS_SET_QUOTA         (0x0100)
#define PROCESS_SET_INFORMATION   (0x0200)
#define PROCESS_QUERY_INFORMATION (0x0400)
#define PROCESS_ALL_ACCESS        (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | \
                                   0xFFF)

#define DUPLICATE_CLOSE_SOURCE      0x00000001
#define DUPLICATE_SAME_ACCESS       0x00000002

#define SECTION_QUERY       0x0001
#define SECTION_MAP_WRITE   0x0002
#define SECTION_MAP_READ    0x0004
#define SECTION_MAP_EXECUTE 0x0008
#define SECTION_EXTEND_SIZE 0x0010

#define FILE_MAP_COPY       SECTION_QUERY
#define FILE_MAP_WRITE      SECTION_MAP_WRITE
#define FILE_MAP_READ       SECTION_MAP_READ
#define FILE_MAP_ALL_ACCESS SECTION_ALL_ACCESS

#define MINCHAR     0x80
#define MAXCHAR     0x7f
#define MINSHORT    0x8000
#define MAXSHORT    0x7fff
#define MINLONG     0x80000000
#define MAXLONG     0x7fffffff
#define MAXBYTE     0xff
#define MAXWORD     0xffff
#define MAXDWORD    0xffffffff

#define STATUS_WAIT_0                    ((DWORD   )0x00000000L)
#define STATUS_ABANDONED_WAIT_0          ((DWORD   )0x00000080L)
#define STATUS_USER_APC                  ((DWORD   )0x000000C0L)
#define STATUS_TIMEOUT                   ((DWORD   )0x00000102L)
#define STATUS_PENDING                   ((DWORD   )0x00000103L)
#define STATUS_SEGMENT_NOTIFICATION      ((DWORD   )0x40000005L)
#define STATUS_GUARD_PAGE_VIOLATION      ((DWORD   )0x80000001L)
#define STATUS_DATATYPE_MISALIGNMENT     ((DWORD   )0x80000002L)
#define STATUS_BREAKPOINT                ((DWORD   )0x80000003L)
#define STATUS_SINGLE_STEP               ((DWORD   )0x80000004L)
#define STATUS_ACCESS_VIOLATION          ((DWORD   )0xC0000005L)
#define STATUS_IN_PAGE_ERROR             ((DWORD   )0xC0000006L)
#define STATUS_INVALID_HANDLE            ((DWORD   )0xC0000008L)
#define STATUS_NO_MEMORY                 ((DWORD   )0xC0000017L)
#define STATUS_ILLEGAL_INSTRUCTION       ((DWORD   )0xC000001DL)
#define STATUS_NONCONTINUABLE_EXCEPTION  ((DWORD   )0xC0000025L)
#define STATUS_INVALID_DISPOSITION       ((DWORD   )0xC0000026L)
#define STATUS_ARRAY_BOUNDS_EXCEEDED     ((DWORD   )0xC000008CL)
#define STATUS_FLOAT_DENORMAL_OPERAND    ((DWORD   )0xC000008DL)
#define STATUS_FLOAT_DIVIDE_BY_ZERO      ((DWORD   )0xC000008EL)
#define STATUS_FLOAT_INEXACT_RESULT      ((DWORD   )0xC000008FL)
#define STATUS_FLOAT_INVALID_OPERATION   ((DWORD   )0xC0000090L)
#define STATUS_FLOAT_OVERFLOW            ((DWORD   )0xC0000091L)
#define STATUS_FLOAT_STACK_CHECK         ((DWORD   )0xC0000092L)
#define STATUS_FLOAT_UNDERFLOW           ((DWORD   )0xC0000093L)
#define STATUS_INTEGER_DIVIDE_BY_ZERO    ((DWORD   )0xC0000094L)
#define STATUS_INTEGER_OVERFLOW          ((DWORD   )0xC0000095L)
#define STATUS_PRIVILEGED_INSTRUCTION    ((DWORD   )0xC0000096L)
#define STATUS_STACK_OVERFLOW            ((DWORD   )0xC00000FDL)
#define STATUS_CONTROL_C_EXIT            ((DWORD   )0xC000013AL)
#define STATUS_FLOAT_MULTIPLE_FAULTS     ((DWORD   )0xC00002B4L)
#define STATUS_FLOAT_MULTIPLE_TRAPS      ((DWORD   )0xC00002B5L)
#define STATUS_ILLEGAL_VLM_REFERENCE     ((DWORD   )0xC00002C0L)

#define THREAD_BASE_PRIORITY_LOWRT  15  // value that gets a thread to LowRealtime-1
#define THREAD_BASE_PRIORITY_MAX    2   // maximum thread base priority boost
#define THREAD_BASE_PRIORITY_MIN    -2  // minimum thread base priority boost
#define THREAD_BASE_PRIORITY_IDLE   -15 // value that gets a thread to idle

#define THREAD_PRIORITY_TIME_CRITICAL   THREAD_BASE_PRIORITY_LOWRT
#define THREAD_PRIORITY_IDLE            THREAD_BASE_PRIORITY_IDLE

#define PAGE_READWRITE         0x04

#endif  // Linux

#endif
