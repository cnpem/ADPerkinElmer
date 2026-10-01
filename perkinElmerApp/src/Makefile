TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE

LIBRARY_IOC = PerkinElmer
LIB_SRCS += PerkinElmer.cpp

ifeq ($(SDK_EXTERNAL), NO)
LIB_LIBS += xisl
else
LIB_SYS_LIBS += xisl
endif

DBD += PerkinElmerSupport.dbd

include $(ADCORE)/ADApp/commonLibraryMakefile

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

