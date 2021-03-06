#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CrashReporter.h"
#import "PLCrashFeatureConfig.h"
#import "PLCrashMacros.h"
#import "PLCrashNamespace.h"
#import "PLCrashReport.h"
#import "PLCrashReportApplicationInfo.h"
#import "PLCrashReportBinaryImageInfo.h"
#import "PLCrashReporter.h"
#import "PLCrashReporterConfig.h"
#import "PLCrashReporterNSError.h"
#import "PLCrashReportExceptionInfo.h"
#import "PLCrashReportFormatter.h"
#import "PLCrashReportMachExceptionInfo.h"
#import "PLCrashReportMachineInfo.h"
#import "PLCrashReportProcessInfo.h"
#import "PLCrashReportProcessorInfo.h"
#import "PLCrashReportRegisterInfo.h"
#import "PLCrashReportSignalInfo.h"
#import "PLCrashReportStackFrameInfo.h"
#import "PLCrashReportSymbolInfo.h"
#import "PLCrashReportSystemInfo.h"
#import "PLCrashReportTextFormatter.h"
#import "PLCrashReportThreadInfo.h"

FOUNDATION_EXPORT double Backtrace_PLCrashReporterVersionNumber;
FOUNDATION_EXPORT const unsigned char Backtrace_PLCrashReporterVersionString[];

