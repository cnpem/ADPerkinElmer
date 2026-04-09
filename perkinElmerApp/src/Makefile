TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE

LIBRARY_IOC = PerkinElmer
LIB_SRCS += PerkinElmer.cpp
LIB_LIBS += xisl

PerkinElmer_INCLUDES_Linux += -I$(TOP)/perkinElmerSupport

DBD += PerkinElmerSupport.dbd

include $(ADCORE)/ADApp/commonLibraryMakefile

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

