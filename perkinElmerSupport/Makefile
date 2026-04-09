TOP=../
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

INC += Acq.h

# Note, the following files should be manually copied from the manufacturer
# distribution XISL win32 and win64 directories
ifeq (win32-x86, $(findstring win32-x86, $(T_A)))
LIB_INSTALLS_WIN32    += ../os/win32-x86/xisl.lib
BIN_INSTALLS_WIN32    += $(wildcard ../os/win32-x86/*.dll)

else ifeq (windows-x64, $(findstring windows-x64, $(T_A)))
LIB_INSTALLS_WIN32    += ../os/windows-x64/xisl.lib
BIN_INSTALLS_WIN32    += $(wildcard ../os/windows-x64/*.dll)

else ifeq (linux, $(findstring linux, $(T_A)))
LIB_INSTALLS_Linux += $(wildcard ../os/linux-x86_64/lib*.so*)

endif

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

