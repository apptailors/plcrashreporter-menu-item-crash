---
title: "Backtrace - before merge"
tags: ""
---

```
Process:               MenuItemCrash [80583]
Path:                  /Users/USER/Library/Developer/Xcode/DerivedData/MenuItemCrash-cxjyokxbttsmqkgkiegawwfztkmb/Build/Products/Debug/MenuItemCrash.app/Contents/MacOS/MenuItemCrash
Identifier:            co.apptailors.MenuItemCrash
Version:               1.0 (1)
Code Type:             X86-64 (Native)
Parent Process:        Xcode [79914]
Responsible:           MenuItemCrash [80583]
User ID:               501

Date/Time:             2020-07-21 15:40:40.278 +0200
OS Version:            Mac OS X 10.15.6 (19G73)
Report Version:        12
Bridge OS Version:     4.6 (17P6065)
Anonymous UUID:        34B265AD-8B20-D5D8-B649-7F9DFFF8742A

Sleep/Wake UUID:       BCFEE370-4594-4CB5-975F-775E95DB119C

Time Awake Since Boot: 170000 seconds
Time Since Wake:       10000 seconds

System Integrity Protection: enabled

Crashed Thread:        0  Dispatch queue: com.apple.main-thread

Exception Type:        EXC_CRASH (SIGABRT)
Exception Codes:       0x0000000000000000, 0x0000000000000000
Exception Note:        EXC_CORPSE_NOTIFY

Application Specific Information:
abort() called

Thread 0 Crashed:: Dispatch queue: com.apple.main-thread
0   libsystem_kernel.dylib        	0x00007fff72aaf33a __pthread_kill + 10
1   libsystem_pthread.dylib       	0x00007fff72b6be60 pthread_kill + 430
2   libsystem_c.dylib             	0x00007fff72a36808 abort + 120
3   org.cocoapods.Backtrace-PLCrashReporter	0x000000010afd3b64 uncaught_exception_handler + 68
4   com.apple.HIToolbox           	0x00007fff37500bba DispatchEventToHandlers(EventTargetRec*, OpaqueEventRef*, HandlerCallRec*) + 1953
5   com.apple.HIToolbox           	0x00007fff374ffd8d SendEventToEventTargetInternal(OpaqueEventRef*, OpaqueEventTargetRef*, HandlerCallRec*) + 329
6   com.apple.HIToolbox           	0x00007fff3751547e SendEventToEventTarget + 39
7   com.apple.HIToolbox           	0x00007fff3757540b SendHICommandEvent(unsigned int, HICommand const*, unsigned int, unsigned int, unsigned char, void const*, OpaqueEventTargetRef*, OpaqueEventTargetRef*, OpaqueEventRef**) + 368
8   com.apple.HIToolbox           	0x00007fff37584a5c UpdateHICommandStatusWithCachedEvent + 51
9   com.apple.HIToolbox           	0x00007fff374fbf16 HIApplication::EventHandler(OpaqueEventHandlerCallRef*, OpaqueEventRef*, void*) + 2574
10  com.apple.HIToolbox           	0x00007fff375008ff DispatchEventToHandlers(EventTargetRec*, OpaqueEventRef*, HandlerCallRec*) + 1254
11  com.apple.HIToolbox           	0x00007fff374ffd8d SendEventToEventTargetInternal(OpaqueEventRef*, OpaqueEventTargetRef*, HandlerCallRec*) + 329
12  com.apple.HIToolbox           	0x00007fff3751547e SendEventToEventTarget + 39
13  com.apple.HIToolbox           	0x00007fff376a7dcf SendEnableMenu(OpaqueEventTargetRef*, OpaqueMenuRef*, double, unsigned char, unsigned int) + 156
14  com.apple.HIToolbox           	0x00007fff37584636 SendMenuOpening(MenuSelectData*, MenuData*, double, unsigned int, unsigned int, __CFDictionary*, unsigned char, unsigned char*) + 573
15  com.apple.HIToolbox           	0x00007fff3759cff6 DrawTheMenu(MenuSelectData*, __CFArray**, unsigned char, unsigned char*) + 286
16  com.apple.HIToolbox           	0x00007fff3759cdbe MenuChanged(MenuSelectData*, unsigned char, unsigned char) + 535
17  com.apple.HIToolbox           	0x00007fff376a99f4 TrackMenuCommon(MenuSelectData&, unsigned char*, SelectionData*, MenuResult*, MenuResult*) + 992
18  com.apple.HIToolbox           	0x00007fff3759c7a0 MenuSelectCore(MenuData*, Point, double, unsigned int, OpaqueMenuRef**, unsigned short*) + 365
19  com.apple.HIToolbox           	0x00007fff3759c598 _HandleMenuSelection2 + 460
20  com.apple.AppKit              	0x00007fff35d43c0d _NSHandleCarbonMenuEvent + 215
21  com.apple.AppKit              	0x00007fff35d43a7a _DPSEventHandledByCarbon + 54
22  com.apple.AppKit              	0x00007fff35b6beca -[NSApplication(NSEvent) _nextEventMatchingEventMask:untilDate:inMode:dequeue:] + 2962
23  com.apple.AppKit              	0x00007fff35b5d58e -[NSApplication run] + 658
24  com.apple.AppKit              	0x00007fff35b2f396 NSApplicationMain + 777
25  co.apptailors.MenuItemCrash   	0x000000010afa4c2f main + 47 (main.m:15)
26  libdyld.dylib                 	0x00007fff72967cc9 start + 1

Thread 1:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 2:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 3:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 4:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 5:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 6:: com.apple.NSEventThread
0   libsystem_kernel.dylib        	0x00007fff72aa8dfa mach_msg_trap + 10
1   libsystem_kernel.dylib        	0x00007fff72aa9170 mach_msg + 60
2   com.apple.SkyLight            	0x00007fff67b5c4b7 CGSSnarfAndDispatchDatagrams + 237
3   com.apple.SkyLight            	0x00007fff67d8c3ad SLSGetNextEventRecordInternal + 83
4   com.apple.SkyLight            	0x00007fff67c2acce SLEventCreateNextEvent + 136
5   com.apple.HIToolbox           	0x00007fff37534da6 PullEventsFromWindowServerOnConnection(unsigned int, unsigned char, __CFMachPortBoost*) + 268
6   com.apple.HIToolbox           	0x00007fff37534c72 MessageHandler(__CFMachPort*, void*, long, void*) + 48
7   com.apple.CoreFoundation      	0x00007fff3892bb05 __CFMachPortPerform + 250
8   com.apple.CoreFoundation      	0x00007fff388fd304 __CFRUNLOOP_IS_CALLING_OUT_TO_A_SOURCE1_PERFORM_FUNCTION__ + 41
9   com.apple.CoreFoundation      	0x00007fff388fd250 __CFRunLoopDoSource1 + 541
10  com.apple.CoreFoundation      	0x00007fff388fbd79 __CFRunLoopRun + 2270
11  com.apple.CoreFoundation      	0x00007fff388fae3e CFRunLoopRunSpecific + 462
12  com.apple.AppKit              	0x00007fff35d0e954 _NSEventThread + 132
13  libsystem_pthread.dylib       	0x00007fff72b6c109 _pthread_start + 148
14  libsystem_pthread.dylib       	0x00007fff72b67b8b thread_start + 15

Thread 7:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 8:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 9:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 10:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 11:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 12:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 13:
0   libsystem_pthread.dylib       	0x00007fff72b67b68 start_wqthread + 0

Thread 0 crashed with X86 Thread State (64-bit):
  rax: 0x0000000000000000  rbx: 0x000000011af4edc0  rcx: 0x00007ffee4c5aba8  rdx: 0x0000000000000000
  rdi: 0x0000000000000307  rsi: 0x0000000000000006  rbp: 0x00007ffee4c5abd0  rsp: 0x00007ffee4c5aba8
   r8: 0x0000000000000010   r9: 0x0000000000000000  r10: 0x000000011af4edc0  r11: 0x0000000000000246
  r12: 0x0000000000000307  r13: 0x00000000ffffd96e  r14: 0x0000000000000006  r15: 0x0000000000000016
  rip: 0x00007fff72aaf33a  rfl: 0x0000000000000246  cr2: 0x000000010e6ef004
  
Logical CPU:     0
Error Code:      0x020000b8
Trap Number:     133


Binary Images:
       0x10afa3000 -        0x10afa5fff +co.apptailors.MenuItemCrash (1.0 - 1) <84535135-6248-362B-89EA-9A6F80CB1A01> /Users/USER/Library/Developer/Xcode/DerivedData/MenuItemCrash-cxjyokxbttsmqkgkiegawwfztkmb/Build/Products/Debug/MenuItemCrash.app/Contents/MacOS/MenuItemCrash
       0x10afaf000 -        0x10afebffb +org.cocoapods.Backtrace-PLCrashReporter (1.5.3 - 1) <22245BAC-4303-3C9E-8B9D-8D7D38E7A07B> /Users/USER/Library/Developer/Xcode/DerivedData/MenuItemCrash-cxjyokxbttsmqkgkiegawwfztkmb/Build/Products/Debug/MenuItemCrash.app/Contents/Frameworks/Backtrace_PLCrashReporter.framework/Versions/A/Backtrace_PLCrashReporter
       0x10b040000 -        0x10b06fff7 +com.microsoft.CrashReporter (1.7.1 - 1.7.1) <63D58B64-896F-3F38-9190-8150FB3CAA48> /Users/USER/Library/Developer/Xcode/DerivedData/MenuItemCrash-cxjyokxbttsmqkgkiegawwfztkmb/Build/Products/Debug/MenuItemCrash.app/Contents/Frameworks/CrashReporter.framework/Versions/A/CrashReporter
       0x10e063000 -        0x10e066047  libobjc-trampolines.dylib (787.1) <88F9B648-C455-36F8-BBB9-7D1A9F57D073> /usr/lib/libobjc-trampolines.dylib
       0x10f350000 -        0x10f3e0fff  libISAProfilerDyn.dylib (0) <CED825B2-54E3-3195-8D95-0C87B90B9B3D> /System/Library/Extensions/AppleIntelGraphicsShared.bundle/Contents/MacOS/libISAProfilerDyn.dylib
       0x11ae84000 -        0x11af15f47  dyld (750.6) <34A11073-9E4C-38C3-9293-7D566ABAE8B6> /usr/lib/dyld
    0x7fff2c02c000 -     0x7fff2c2a1ffc  com.apple.AMDRadeonX6000MTLDriver (3.10.15 - 3.1.0) <8F909295-6187-3101-B825-CA5C0790FDBC> /System/Library/Extensions/AMDRadeonX6000MTLDriver.bundle/Contents/MacOS/AMDRadeonX6000MTLDriver
    0x7fff31279000 -     0x7fff31678ff1  com.apple.driver.AppleIntelKBLGraphicsMTLDriver (14.7.8 - 14.0.7) <90F7787D-4D80-3D02-BB9E-ADB2D3DFE8BC> /System/Library/Extensions/AppleIntelKBLGraphicsMTLDriver.bundle/Contents/MacOS/AppleIntelKBLGraphicsMTLDriver
    0x7fff34118000 -     0x7fff34313ff8  com.apple.avfoundation (2.0 - 1855.3) <0837D912-3783-35D6-A94A-E474E18600CF> /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
    0x7fff34314000 -     0x7fff343e0ffe  com.apple.audio.AVFAudio (1.0 - 415.75) <2091897A-1EAF-3461-A11F-7E300665F3A7> /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
    0x7fff34500000 -     0x7fff34500fff  com.apple.Accelerate (1.11 - Accelerate 1.11) <4F9977AE-DBDB-3A16-A536-AC1F9938DCDD> /System/Library/Frameworks/Accelerate.framework/Versions/A/Accelerate
    0x7fff34501000 -     0x7fff34517fef  libCGInterfaces.dylib (524.2.1) <DE4EE08A-4A60-398A-8E93-BB6A4B3C72FC> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vImage.framework/Versions/A/Libraries/libCGInterfaces.dylib
    0x7fff34518000 -     0x7fff34b6efff  com.apple.vImage (8.1 - 524.2.1) <EA6F5FF2-7A1B-35D5-A5A3-D2B3386ECB75> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vImage.framework/Versions/A/vImage
    0x7fff34b6f000 -     0x7fff34dd6ff7  libBLAS.dylib (1303.60.1) <C6C2D42F-7456-3DBF-8BE2-9AA06EFC78FD> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libBLAS.dylib
    0x7fff34dd7000 -     0x7fff352aafef  libBNNS.dylib (144.100.2) <99C61C48-B14C-3DA6-8C31-6BF72DA0A3A9> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libBNNS.dylib
    0x7fff352ab000 -     0x7fff35646fff  libLAPACK.dylib (1303.60.1) <5E3E3867-50C3-3E6A-9A2E-007CE77A4641> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libLAPACK.dylib
    0x7fff35647000 -     0x7fff3565cfec  libLinearAlgebra.dylib (1303.60.1) <3D433800-0099-33E0-8C81-15F83247B2C9> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libLinearAlgebra.dylib
    0x7fff3565d000 -     0x7fff35662ff3  libQuadrature.dylib (7) <371F36A7-B12F-363E-8955-F24F7C2048F6> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libQuadrature.dylib
    0x7fff35663000 -     0x7fff356d3fff  libSparse.dylib (103) <B8A10D0C-4577-343D-B310-A3E81265D107> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libSparse.dylib
    0x7fff356d4000 -     0x7fff356e6fef  libSparseBLAS.dylib (1303.60.1) <B147FEF6-A0DB-3830-BF06-45BEC58DB576> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libSparseBLAS.dylib
    0x7fff356e7000 -     0x7fff358befd7  libvDSP.dylib (735.140.1) <D63DC0A5-B8B4-3562-A574-E73BC3B57407> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libvDSP.dylib
    0x7fff358bf000 -     0x7fff35981fef  libvMisc.dylib (735.140.1) <3601FDE3-B142-398D-987D-8151A51F0A96> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/libvMisc.dylib
    0x7fff35982000 -     0x7fff35982fff  com.apple.Accelerate.vecLib (3.11 - vecLib 3.11) <F6C5613D-2284-342B-9160-9731F78B4DE5> /System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/vecLib
    0x7fff35983000 -     0x7fff359e2ff0  com.apple.Accounts (113 - 113) <5805A70A-4AF8-36C4-92A6-D5AB5B4C1630> /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
    0x7fff35b2c000 -     0x7fff368ecff2  com.apple.AppKit (6.9 - 1894.60.100) <C4208642-19F7-3EAA-AACD-3B836FFDEFCF> /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
    0x7fff3693c000 -     0x7fff3693cfff  com.apple.ApplicationServices (48 - 50) <D4320505-6458-38FD-81F0-406F2F0A4039> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices
    0x7fff3693d000 -     0x7fff369a8fff  com.apple.ApplicationServices.ATS (377 - 493.0.4.1) <CF994162-0F34-368D-BED4-D63270E35B5A> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/ATS
    0x7fff36a41000 -     0x7fff36a7fff0  libFontRegistry.dylib (274.0.5.1) <EAA136DE-69AC-3355-AED3-830018151715> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/Resources/libFontRegistry.dylib
    0x7fff36ada000 -     0x7fff36b09fff  com.apple.ATSUI (1.0 - 1) <1FC04DE6-E0D4-3E6B-9AB6-255AB70DC9F4> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATSUI.framework/Versions/A/ATSUI
    0x7fff36b0a000 -     0x7fff36b0effb  com.apple.ColorSyncLegacy (4.13.0 - 1) <61F37728-FDCF-314B-B75D-5CD15AB7D4D9> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ColorSyncLegacy.framework/Versions/A/ColorSyncLegacy
    0x7fff36ba8000 -     0x7fff36bffffa  com.apple.HIServices (1.22 - 676) <9FB74637-448B-3437-B8C1-2C354264A163> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/HIServices.framework/Versions/A/HIServices
    0x7fff36c00000 -     0x7fff36c0efff  com.apple.LangAnalysis (1.7.0 - 1.7.0) <A52FB48C-5C39-32FB-9637-9EEA7EA5CA6E> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/LangAnalysis.framework/Versions/A/LangAnalysis
    0x7fff36c0f000 -     0x7fff36c54ffa  com.apple.print.framework.PrintCore (15.4 - 516.2) <B70D9E5A-C1D5-3159-A197-4F09E25E18C4> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Versions/A/PrintCore
    0x7fff36c55000 -     0x7fff36c5fff7  com.apple.QD (4.0 - 413) <5CEBC510-0B39-3BB5-B951-3B8F5E82C3CA> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/QD.framework/Versions/A/QD
    0x7fff36c60000 -     0x7fff36c6dffc  com.apple.speech.synthesis.framework (9.0.24 - 9.0.24) <59947616-D486-3963-A12D-9DEF153296CD> /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/SpeechSynthesis.framework/Versions/A/SpeechSynthesis
    0x7fff36c6e000 -     0x7fff36d4fffa  com.apple.audio.toolbox.AudioToolbox (1.14 - 1.14) <6BD0970D-7FD8-341D-8D82-0B3BBB565462> /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
    0x7fff36d51000 -     0x7fff36d51fff  com.apple.audio.units.AudioUnit (1.14 - 1.14) <C8F9CC56-F7CF-3E77-B6FC-BD8E1D19FA92> /System/Library/Frameworks/AudioUnit.framework/Versions/A/AudioUnit
    0x7fff370e8000 -     0x7fff37477ffa  com.apple.CFNetwork (1128.0.1 - 1128.0.1) <C524C617-2CEF-340C-8CE2-98EAF91CF6A8> /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
    0x7fff374f3000 -     0x7fff374f3fff  com.apple.Carbon (160 - 162) <FB72FB7D-5985-3D9C-82DB-A729FCA1249A> /System/Library/Frameworks/Carbon.framework/Versions/A/Carbon
    0x7fff374f4000 -     0x7fff374f7ff3  com.apple.CommonPanels (1.2.6 - 101) <B2F7737D-027B-3FFA-9927-EF105CB73193> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/CommonPanels.framework/Versions/A/CommonPanels
    0x7fff374f8000 -     0x7fff377ecff3  com.apple.HIToolbox (2.1.1 - 994.6) <DE6F9A20-8AF7-3963-82E1-4756C4A7A54C> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
    0x7fff377ed000 -     0x7fff377f0ff3  com.apple.help (1.3.8 - 71) <EAFE0E80-DABA-31D9-AC32-87A0A37C70CE> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Help.framework/Versions/A/Help
    0x7fff377f1000 -     0x7fff377f6ff7  com.apple.ImageCapture (9.0 - 1600.65) <1A1F320E-3E85-3F3D-8AE0-B238C4E92D40> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/ImageCapture.framework/Versions/A/ImageCapture
    0x7fff377f7000 -     0x7fff377f7fff  com.apple.ink.framework (10.15 - 227) <E3570EA0-7D2D-31F8-B87A-08AD80199E0D> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
    0x7fff377f8000 -     0x7fff37812ffa  com.apple.openscripting (1.7 - 185.1) <5012E208-2295-3169-B452-1A99E7CB36F9> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/OpenScripting.framework/Versions/A/OpenScripting
    0x7fff37833000 -     0x7fff37833fff  com.apple.print.framework.Print (15 - 271) <5B6DCE6F-FCB9-3502-897E-C54D7749B704> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Print.framework/Versions/A/Print
    0x7fff37834000 -     0x7fff37836ff7  com.apple.securityhi (9.0 - 55008) <B9CF91DA-6AE8-3250-B8B1-56EF4A68755F> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/SecurityHI.framework/Versions/A/SecurityHI
    0x7fff37837000 -     0x7fff3783dfff  com.apple.speech.recognition.framework (6.0.3 - 6.0.3) <16D2AB1F-1E22-37D6-B0B6-350D79796E10> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/SpeechRecognition.framework/Versions/A/SpeechRecognition
    0x7fff3783e000 -     0x7fff379d6ffa  com.apple.cloudkit.CloudKit (867 - 867) <7DD49324-47B2-3CA2-9EF1-A6844F533743> /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
    0x7fff379d7000 -     0x7fff379d7fff  com.apple.Cocoa (6.11 - 23) <2F5C8ABA-711F-316C-BB97-921122AEE4DF> /System/Library/Frameworks/Cocoa.framework/Versions/A/Cocoa
    0x7fff379e5000 -     0x7fff37adbfff  com.apple.ColorSync (4.13.0 - 3394.9) <0EE6A103-7283-3706-877D-1487BF11BBA3> /System/Library/Frameworks/ColorSync.framework/Versions/A/ColorSync
    0x7fff37dc6000 -     0x7fff382cfffb  com.apple.audio.CoreAudio (5.0 - 5.0) <F816D92C-9408-3279-90BC-C23B69DC75AE> /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
    0x7fff38322000 -     0x7fff3835afff  com.apple.CoreBluetooth (1.0 - 1) <0CD1AE39-EACA-374A-9732-66798388EA91> /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
    0x7fff3835b000 -     0x7fff38745fe8  com.apple.CoreData (120 - 977.3) <94F498B0-3AFB-3F8C-83E3-A8F7A1176248> /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
    0x7fff38746000 -     0x7fff38878ff6  com.apple.CoreDisplay (1.0 - 186.6.15) <599EB1B7-552C-36F7-9924-177E700079C4> /System/Library/Frameworks/CoreDisplay.framework/Versions/A/CoreDisplay
    0x7fff38879000 -     0x7fff38cf8feb  com.apple.CoreFoundation (6.9 - 1677.104) <C0D70026-EDBE-3CBD-B317-367CF4F1C92F> /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
    0x7fff38cfa000 -     0x7fff3936fff8  com.apple.CoreGraphics (2.0 - 1355.22) <4A3CDE7B-4578-3058-966A-3D1DC095A935> /System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics
    0x7fff3937d000 -     0x7fff396d8ff0  com.apple.CoreImage (15.0.0 - 940.9) <103E76AC-A255-3B74-AD5B-46D28A904893> /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
    0x7fff396d9000 -     0x7fff39742ff0  com.apple.corelocation (2394.0.22 - 2394.0.22) <EEC17183-7908-3445-83FD-3920132AEC1B> /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
    0x7fff39796000 -     0x7fff39a98ff2  com.apple.CoreML (1.0 - 1) <232C545F-CCA5-3465-AA7D-9F36DBAB038B> /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
    0x7fff39a99000 -     0x7fff39b74ffc  com.apple.CoreMedia (1.0 - 2625.9) <A3FF3AFC-8C1C-36E5-9179-66D8F075EE35> /System/Library/Frameworks/CoreMedia.framework/Versions/A/CoreMedia
    0x7fff39b75000 -     0x7fff39bd7ffe  com.apple.CoreMediaIO (1000.0 - 5125.6) <8FDC573F-890A-3F08-B357-99895521C93D> /System/Library/Frameworks/CoreMediaIO.framework/Versions/A/CoreMediaIO
    0x7fff39c61000 -     0x7fff39c61fff  com.apple.CoreServices (1069.24 - 1069.24) <AA140158-E909-34C2-B2F5-20EBC93E0056> /System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices
    0x7fff39c62000 -     0x7fff39ce7fff  com.apple.AE (838.1 - 838.1) <9F7FDA11-AA47-3FF4-80D6-32A5335555DF> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/AE.framework/Versions/A/AE
    0x7fff39ce8000 -     0x7fff39fc9ff7  com.apple.CoreServices.CarbonCore (1217 - 1217) <C1521E48-5E78-364A-8FA6-C4049CA4C66D> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonCore.framework/Versions/A/CarbonCore
    0x7fff39fca000 -     0x7fff3a017ffd  com.apple.DictionaryServices (1.2 - 323.6) <78832B5D-E126-3E28-89EC-8CA69AC5DD47> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/DictionaryServices.framework/Versions/A/DictionaryServices
    0x7fff3a018000 -     0x7fff3a020ff7  com.apple.CoreServices.FSEvents (1268.100.1 - 1268.100.1) <29909C83-DF5F-3751-A35B-405860DBA937> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/FSEvents.framework/Versions/A/FSEvents
    0x7fff3a021000 -     0x7fff3a25bff6  com.apple.LaunchServices (1069.24 - 1069.24) <4760C0FA-6EDB-3CE4-AD62-5C4520A7D90B> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
    0x7fff3a25c000 -     0x7fff3a2f4ff1  com.apple.Metadata (10.7.0 - 2076.7) <0973F7E5-D58C-3574-A3CE-4F12CAC2D4C7> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
    0x7fff3a2f5000 -     0x7fff3a322fff  com.apple.CoreServices.OSServices (1069.24 - 1069.24) <4A42E711-6617-353A-B7DC-3F7AAF815A16> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/OSServices.framework/Versions/A/OSServices
    0x7fff3a323000 -     0x7fff3a38afff  com.apple.SearchKit (1.4.1 - 1.4.1) <757DA392-8E1A-3266-AF15-09B79B036621> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SearchKit.framework/Versions/A/SearchKit
    0x7fff3a38b000 -     0x7fff3a3afff5  com.apple.coreservices.SharedFileList (131.4 - 131.4) <5F518E73-EA2F-389A-A924-046374F5F15B> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
    0x7fff3a60c000 -     0x7fff3a6d3ffc  com.apple.CoreTelephony (113 - 7560.1) <B8C6B213-B4FF-3769-8931-99AD676EB69C> /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
    0x7fff3a6d4000 -     0x7fff3a88bffc  com.apple.CoreText (643.1.5.1 - 643.1.5.1) <9C7FBD03-3845-3E2B-94B8-B3110180D3F5> /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
    0x7fff3a88c000 -     0x7fff3a8d0ffb  com.apple.CoreVideo (1.8 - 344.3) <2F1DC859-A2E4-3983-8047-97BC0E8C55CE> /System/Library/Frameworks/CoreVideo.framework/Versions/A/CoreVideo
    0x7fff3a8d1000 -     0x7fff3a95effc  com.apple.framework.CoreWLAN (13.0 - 1601.2) <6C76A9E0-430F-3B3C-AE8A-3005F8E6FCFF> /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
    0x7fff3ab26000 -     0x7fff3abd0ff0  com.apple.DiscRecording (9.0.3 - 9030.4.5) <2EBD7389-5091-36EA-9483-5DCAD08660F7> /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
    0x7fff3abf5000 -     0x7fff3abfbfff  com.apple.DiskArbitration (2.7 - 2.7) <63923E3F-1489-3762-B5EB-5CE28A35FF50> /System/Library/Frameworks/DiskArbitration.framework/Versions/A/DiskArbitration
    0x7fff3adf0000 -     0x7fff3af1eff6  com.apple.FileProvider (304.1 - 304.1) <3BC3B7F7-A568-3D99-B654-F5F2379F1560> /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
    0x7fff3af36000 -     0x7fff3b2fbfff  com.apple.Foundation (6.9 - 1677.104) <2EF4C4DA-423B-3AFE-ACD1-7DAE64E47603> /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
    0x7fff3b368000 -     0x7fff3b3b8ff7  com.apple.GSS (4.0 - 2.0) <CBD56CC8-237D-3831-BF95-7672BEA768C0> /System/Library/Frameworks/GSS.framework/Versions/A/GSS
    0x7fff3b4f5000 -     0x7fff3b609ff3  com.apple.Bluetooth (7.0.6 - 7.0.6f7) <CF9CEFBA-97AC-3474-93AF-863C2C74C645> /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
    0x7fff3b66f000 -     0x7fff3b713ff3  com.apple.framework.IOKit (2.0.2 - 1726.140.1) <31CA30A9-B32D-37A8-B5C8-20999D5D51BF> /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
    0x7fff3b715000 -     0x7fff3b726ffb  com.apple.IOSurface (269.11 - 269.11) <3423901A-0ED1-352C-BB6D-5C788C3348DA> /System/Library/Frameworks/IOSurface.framework/Versions/A/IOSurface
    0x7fff3b744000 -     0x7fff3b7a4ff5  com.apple.ImageCaptureCore (1.0 - 1600.65) <281CE141-B350-30E2-B345-FC7E7DF1AA3A> /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
    0x7fff3b7a5000 -     0x7fff3b901fee  com.apple.ImageIO.framework (3.3.0 - 1976.11) <C17C7280-54F6-3750-85CE-C43428256D62> /System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO
    0x7fff3b902000 -     0x7fff3b905fff  libGIF.dylib (1976.11) <7F53F2C2-0F2B-3308-9E90-F043F43DAB32> /System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libGIF.dylib
    0x7fff3b906000 -     0x7fff3b9bfff7  libJP2.dylib (1976.11) <EAAE8D93-7C00-347A-BF6F-C262557C0A1C> /System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libJP2.dylib
    0x7fff3b9c0000 -     0x7fff3b9e3fe3  libJPEG.dylib (1976.11) <47540108-F321-35F9-A98A-784E4D4F3C15> /System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libJPEG.dylib
    0x7fff3bc61000 -     0x7fff3bc7bfef  libPng.dylib (1976.11) <DDBB2E46-7BCB-339B-883E-67B97A7614A3> /System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libPng.dylib
    0x7fff3bc7c000 -     0x7fff3bc7dfff  libRadiance.dylib (1976.11) <C8998674-DCB4-3C2C-9D6E-C0809D7727A2> /System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libRadiance.dylib
    0x7fff3bc7e000 -     0x7fff3bcc4fff  libTIFF.dylib (1976.11) <79E99768-71D7-3EA9-9675-95EFACF32FC8> /System/Library/Frameworks/ImageIO.framework/Versions/A/Resources/libTIFF.dylib
    0x7fff3bcdd000 -     0x7fff3c16cff8  com.apple.Intents (1.0 - 1) <ECA576E2-C17F-3EEE-80F7-AC7208D59268> /System/Library/Frameworks/Intents.framework/Versions/A/Intents
    0x7fff3c16f000 -     0x7fff3d20ffe9  com.apple.JavaScriptCore (15609 - 15609.3.5.1.3) <1874AA53-2C73-3DB2-A98F-69D9BDB3ADC8> /System/Library/Frameworks/JavaScriptCore.framework/Versions/A/JavaScriptCore
    0x7fff3d226000 -     0x7fff3d238ff3  com.apple.Kerberos (3.0 - 1) <FE4E83D2-D943-3742-957D-BF6AA9E50B81> /System/Library/Frameworks/Kerberos.framework/Versions/A/Kerberos
    0x7fff3d239000 -     0x7fff3d239fff  libHeimdalProxy.dylib (77) <0A2905EE-9533-3345-AF9B-AAC71513BDFD> /System/Library/Frameworks/Kerberos.framework/Versions/A/Libraries/libHeimdalProxy.dylib
    0x7fff3d5cb000 -     0x7fff3d5d5ffb  com.apple.MediaAccessibility (1.0 - 125.1) <35B667D6-A924-3DD1-9390-234F6D12E1C0> /System/Library/Frameworks/MediaAccessibility.framework/Versions/A/MediaAccessibility
    0x7fff3d6a1000 -     0x7fff3ddeeff2  com.apple.MediaToolbox (1.0 - 2625.9) <578E679E-8672-3A74-8EE4-C67965C81DD0> /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
    0x7fff3ddf0000 -     0x7fff3debafff  com.apple.Metal (212.8 - 212.8) <7A496C57-4ECE-337F-96D4-09F24C033913> /System/Library/Frameworks/Metal.framework/Versions/A/Metal
    0x7fff3debc000 -     0x7fff3ded6ff5  com.apple.MetalKit (141.2 - 141.2) <FAACD940-5CF2-300A-83F3-86ABA7FDC531> /System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit
    0x7fff3ded7000 -     0x7fff3df14ff7  com.apple.MetalPerformanceShaders.MPSCore (1.0 - 1) <7EBAC15D-7837-395D-B405-1E29F7DA68FA> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/Versions/A/MPSCore
    0x7fff3df15000 -     0x7fff3df9ffe2  com.apple.MetalPerformanceShaders.MPSImage (1.0 - 1) <B424FE0C-6E90-3BFA-A6E7-DD86C735AE90> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/Versions/A/MPSImage
    0x7fff3dfa0000 -     0x7fff3dfc5ff4  com.apple.MetalPerformanceShaders.MPSMatrix (1.0 - 1) <02006D92-E2AB-3892-A96B-37F6520C19BA> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/Versions/A/MPSMatrix
    0x7fff3dfc6000 -     0x7fff3dfdbffb  com.apple.MetalPerformanceShaders.MPSNDArray (1.0 - 1) <CAA5A368-DB71-34F6-AEF9-27A8BC298F53> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/Versions/A/MPSNDArray
    0x7fff3dfdc000 -     0x7fff3e13affc  com.apple.MetalPerformanceShaders.MPSNeuralNetwork (1.0 - 1) <05612E06-50CB-318F-9F8E-EF4D49FAB3B0> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
    0x7fff3e13b000 -     0x7fff3e18aff4  com.apple.MetalPerformanceShaders.MPSRayIntersector (1.0 - 1) <B0B591F8-6875-351E-867F-8EB3CD38CD52> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/Versions/A/MPSRayIntersector
    0x7fff3e18b000 -     0x7fff3e18cff5  com.apple.MetalPerformanceShaders.MetalPerformanceShaders (1.0 - 1) <F2921F9A-3041-3495-878D-64134267B847> /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/MetalPerformanceShaders
    0x7fff3f21a000 -     0x7fff3f226ffe  com.apple.NetFS (6.0 - 4.0) <024195B7-00F1-30D3-A407-11DC3E262C05> /System/Library/Frameworks/NetFS.framework/Versions/A/NetFS
    0x7fff3f227000 -     0x7fff3f37eff3  com.apple.Network (1.0 - 1) <2B933C30-E71F-3ECC-8DBD-FBBB997A6FDC> /System/Library/Frameworks/Network.framework/Versions/A/Network
    0x7fff3f37f000 -     0x7fff3f5dfffa  com.apple.NetworkExtension (1.0 - 1) <63069E97-A98C-3C23-AC48-D798CF0A03CA> /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
    0x7fff41db0000 -     0x7fff41e08fff  com.apple.opencl (3.5 - 3.5) <983E7D45-6C6D-35EC-A68D-6AD5FCFE2356> /System/Library/Frameworks/OpenCL.framework/Versions/A/OpenCL
    0x7fff41e09000 -     0x7fff41e25fff  com.apple.CFOpenDirectory (10.15 - 220.40.1) <1C7F51F3-43D9-3E4A-93C9-A74C6BCAE2CE> /System/Library/Frameworks/OpenDirectory.framework/Versions/A/Frameworks/CFOpenDirectory.framework/Versions/A/CFOpenDirectory
    0x7fff41e26000 -     0x7fff41e31ffd  com.apple.OpenDirectory (10.15 - 220.40.1) <3BB64E34-C2D9-3172-BBD8-D360FE4B2737> /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
    0x7fff42797000 -     0x7fff42799fff  libCVMSPluginSupport.dylib (17.10.22) <2B6C3C16-3F5F-36A8-8070-2A862B90328B> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libCVMSPluginSupport.dylib
    0x7fff4279a000 -     0x7fff4279ffff  libCoreFSCache.dylib (176.15) <E9A20E72-B17F-33D6-8894-41934A10B822> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libCoreFSCache.dylib
    0x7fff427a0000 -     0x7fff427a4fff  libCoreVMClient.dylib (176.15) <018A48BA-1326-3847-8FB5-A7C99322EB87> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libCoreVMClient.dylib
    0x7fff427a5000 -     0x7fff427adff7  libGFXShared.dylib (17.10.22) <A530A704-1D22-3692-8DFF-EDF6A12E59F0> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGFXShared.dylib
    0x7fff427ae000 -     0x7fff427b8fff  libGL.dylib (17.10.22) <FB5E6A75-398E-38EF-8CB2-59F5BFE3034C> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGL.dylib
    0x7fff427b9000 -     0x7fff427edff7  libGLImage.dylib (17.10.22) <9A3FE633-61B8-3CC7-8183-62960109401A> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGLImage.dylib
    0x7fff42983000 -     0x7fff429bffff  libGLU.dylib (17.10.22) <D8B4D804-7323-30BC-871C-B7236FFC2FE3> /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/libGLU.dylib
    0x7fff433fb000 -     0x7fff4340aff7  com.apple.opengl (17.10.22 - 17.10.22) <E75C69AE-61EA-32D5-B58D-30022D68CC66> /System/Library/Frameworks/OpenGL.framework/Versions/A/OpenGL
    0x7fff435bc000 -     0x7fff436afff0  com.apple.PDFKit (1.0 - 835.7) <AA929545-B01F-38DB-95B8-D9F5F524A3EC> /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
    0x7fff436b0000 -     0x7fff437c7ff9  com.apple.PencilKit (1.0 - 1) <0F41A2C7-493C-3C42-8B3A-7C7D94F7461A> /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
    0x7fff43a68000 -     0x7fff43a6eff6  com.apple.PushKit (1.0 - 1) <B9E3863E-8575-3BD3-B4A1-D8683D7856D7> /System/Library/Frameworks/PushKit.framework/Versions/A/PushKit
    0x7fff43b8f000 -     0x7fff43dd5ff7  com.apple.imageKit (3.0 - 1081) <2C3BBCFD-AFD1-3A76-9B1B-D515B1DADF9C> /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
    0x7fff43dd6000 -     0x7fff44295fff  com.apple.QuartzComposer (5.1 - 378) <E7D9D087-AC55-3C97-9025-A2766D4B8031> /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
    0x7fff44296000 -     0x7fff442bbffc  com.apple.quartzfilters (1.10.0 - Tag) <0866DF11-B520-384F-9586-66E52180AF0E> /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
    0x7fff442bc000 -     0x7fff443c6ff7  com.apple.QuickLookUIFramework (5.0 - 906.3) <7128FB8C-83B0-3250-BF86-E8A1772CF1F5> /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
    0x7fff443c7000 -     0x7fff443c7fff  com.apple.quartzframework (1.5 - 23) <F0798D40-2A7A-3ADD-AE82-AC1A934E7EB7> /System/Library/Frameworks/Quartz.framework/Versions/A/Quartz
    0x7fff443c8000 -     0x7fff4464bffb  com.apple.QuartzCore (1.11 - 841.4) <FE927B0E-BD49-32CC-8A55-90F553C86C15> /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
    0x7fff4464c000 -     0x7fff446a5ff5  com.apple.QuickLookFramework (5.0 - 906.3) <959CE934-B541-3172-846F-4D1709353526> /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
    0x7fff446a6000 -     0x7fff446dbffc  com.apple.QuickLookThumbnailing (1.0 - 1) <F79B36C5-08B4-3E80-9BB3-EA3EAB50B755> /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
    0x7fff44bac000 -     0x7fff44bc4ff0  com.apple.SafariServices.framework (15609 - 15609.3.5.1.3) <F98B27E2-81C9-3372-8E20-B49DA2D99B11> /System/Library/Frameworks/SafariServices.framework/Versions/A/SafariServices
    0x7fff451cc000 -     0x7fff45515ff1  com.apple.security (7.0 - 59306.140.5) <EB9E9E2A-B53B-36EE-B9CE-EEB99B603CB1> /System/Library/Frameworks/Security.framework/Versions/A/Security
    0x7fff45516000 -     0x7fff4559effb  com.apple.securityfoundation (6.0 - 55236.60.1) <407FE3EC-3EC2-31DF-B988-43B13D6D4A75> /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
    0x7fff455cd000 -     0x7fff455d1ff8  com.apple.xpc.ServiceManagement (1.0 - 1) <279E7AA9-B23D-3E32-946B-5559EDC56C86> /System/Library/Frameworks/ServiceManagement.framework/Versions/A/ServiceManagement
    0x7fff4627d000 -     0x7fff462f7ff7  com.apple.SystemConfiguration (1.19 - 1.19) <84F9B3BB-F7AF-3B7C-8CD0-D3C22D19619F> /System/Library/Frameworks/SystemConfiguration.framework/Versions/A/SystemConfiguration
    0x7fff46577000 -     0x7fff468faff4  com.apple.VideoToolbox (1.0 - 2625.9) <6CF18E28-A7A8-3952-8171-7E4FF4FB37FA> /System/Library/Frameworks/VideoToolbox.framework/Versions/A/VideoToolbox
    0x7fff4a267000 -     0x7fff4a32cfe7  com.apple.APFS (1412.141.1 - 1412.141.1) <C86A3423-E61C-335A-9D17-0B3CE5BB6467> /System/Library/PrivateFrameworks/APFS.framework/Versions/A/APFS
    0x7fff4b441000 -     0x7fff4b442ff1  com.apple.AggregateDictionary (1.0 - 1) <2E60E192-E839-3366-804D-9739E79CBC9F> /System/Library/PrivateFrameworks/AggregateDictionary.framework/Versions/A/AggregateDictionary
    0x7fff4b890000 -     0x7fff4b9dbff5  com.apple.AnnotationKit (1.0 - 325.9) <4AD8B509-A8AE-340B-B2AE-0E2D1AAA9638> /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
    0x7fff4b9dc000 -     0x7fff4b9f9ff4  com.apple.AppContainer (4.0 - 448.100.6) <EF924755-FFB9-34D4-B639-054714E5F26D> /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
    0x7fff4ba4e000 -     0x7fff4ba5cff7  com.apple.AppSandbox (4.0 - 448.100.6) <BD6E612B-FECD-3024-9143-E437839F1F5D> /System/Library/PrivateFrameworks/AppSandbox.framework/Versions/A/AppSandbox
    0x7fff4bed8000 -     0x7fff4befcffb  com.apple.framework.Apple80211 (13.0 - 1610.1) <C53B760A-3305-3053-9BBE-BB70AE3C349B> /System/Library/PrivateFrameworks/Apple80211.framework/Versions/A/Apple80211
    0x7fff4c1ba000 -     0x7fff4c1c9fd7  com.apple.AppleFSCompression (119.100.1 - 1.0) <B0E6D541-1850-384B-B397-CC73503C20B2> /System/Library/PrivateFrameworks/AppleFSCompression.framework/Versions/A/AppleFSCompression
    0x7fff4c2c8000 -     0x7fff4c2d3ff7  com.apple.AppleIDAuthSupport (1.0 - 1) <8D12CC19-2D08-3F37-93E3-3D170E6EC78A> /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/Versions/A/AppleIDAuthSupport
    0x7fff4c315000 -     0x7fff4c35dff7  com.apple.AppleJPEG (1.0 - 1) <6D4A6930-F0E2-3CFF-916F-06E87E648069> /System/Library/PrivateFrameworks/AppleJPEG.framework/Versions/A/AppleJPEG
    0x7fff4c720000 -     0x7fff4c746ffb  com.apple.aps.framework (4.0 - 4.0) <A7EED3AB-D5E2-37C8-A777-794034BABF6F> /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
    0x7fff4c747000 -     0x7fff4c74bff7  com.apple.AppleSRP (5.0 - 1) <70C25EA9-F7A7-366C-97C6-EEE7845FFCC3> /System/Library/PrivateFrameworks/AppleSRP.framework/Versions/A/AppleSRP
    0x7fff4c74c000 -     0x7fff4c76efff  com.apple.applesauce (1.0 - 16.25) <68E0364C-AEA7-3654-A030-136BF3CD92F3> /System/Library/PrivateFrameworks/AppleSauce.framework/Versions/A/AppleSauce
    0x7fff4c82d000 -     0x7fff4c830ffb  com.apple.AppleSystemInfo (3.1.5 - 3.1.5) <D51FE050-B5D0-3E07-8CAE-730C3C7815D4> /System/Library/PrivateFrameworks/AppleSystemInfo.framework/Versions/A/AppleSystemInfo
    0x7fff4c831000 -     0x7fff4c881ff7  com.apple.AppleVAFramework (6.1.2 - 6.1.2) <73FB7981-5BEC-3546-BE46-D8F15FD8FA92> /System/Library/PrivateFrameworks/AppleVA.framework/Versions/A/AppleVA
    0x7fff4c8ca000 -     0x7fff4c8d9ff9  com.apple.AssertionServices (1.0 - 223.140.2) <F86E0D38-3E0E-37B2-A070-4176E533040D> /System/Library/PrivateFrameworks/AssertionServices.framework/Versions/A/AssertionServices
    0x7fff4ce1c000 -     0x7fff4d217ff8  com.apple.audio.AudioResourceArbitration (1.0 - 1) <1E9E234C-C1EF-3BB1-BA01-32088B12AA76> /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
    0x7fff4d46d000 -     0x7fff4d6adfe0  com.apple.audio.AudioToolboxCore (1.0 - 1104.93) <5B539F50-93E8-3F73-9E4C-678C85D0488F> /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
    0x7fff4d6b1000 -     0x7fff4d7cdfff  com.apple.AuthKit (1.0 - 1) <D7FBDAA7-B582-33C0-9030-31169A53A542> /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
    0x7fff4d98a000 -     0x7fff4d993ff7  com.apple.coreservices.BackgroundTaskManagement (1.0 - 104) <AED997B4-B67E-3216-AA6D-5BB5216905E6> /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement
    0x7fff4d994000 -     0x7fff4da35ff5  com.apple.backup.framework (1.11.6 - 1298.6.2) <EE699538-4D97-30D2-BAA1-C35C96C7BE83> /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
    0x7fff4da36000 -     0x7fff4dac2ff6  com.apple.BaseBoard (466.3 - 466.3) <CEADF75A-0A22-350B-8476-A612ED386E24> /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
    0x7fff4dbc4000 -     0x7fff4dc00ff7  com.apple.bom (14.0 - 219.2) <83788F83-9B27-3208-9155-95EA440CAEC7> /System/Library/PrivateFrameworks/Bom.framework/Versions/A/Bom
    0x7fff4dd1e000 -     0x7fff4dd55ff5  com.apple.C2 (1.3 - 495) <580E40F0-0B78-3A27-98B0-DE108957033F> /System/Library/PrivateFrameworks/C2.framework/Versions/A/C2
    0x7fff4e780000 -     0x7fff4e7cffff  com.apple.ChunkingLibrary (307 - 307) <F0CB2422-B138-36BA-ADD5-58D95D086FEA> /System/Library/PrivateFrameworks/ChunkingLibrary.framework/Versions/A/ChunkingLibrary
    0x7fff4f67b000 -     0x7fff4f68bffb  com.apple.CommonAuth (4.0 - 2.0) <CF67FF34-4238-3ECA-B4A4-EA04F18A0D36> /System/Library/PrivateFrameworks/CommonAuth.framework/Versions/A/CommonAuth
    0x7fff4f69f000 -     0x7fff4f6b6fff  com.apple.commonutilities (8.0 - 900) <C7826C15-66EF-365D-B3BD-D2E2BF3564DC> /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
    0x7fff4fdbd000 -     0x7fff50192fc8  com.apple.CoreAUC (283.0.0 - 283.0.0) <E344A71D-0EB7-37B8-B589-6B6F87742FC1> /System/Library/PrivateFrameworks/CoreAUC.framework/Versions/A/CoreAUC
    0x7fff50193000 -     0x7fff501c0ff7  com.apple.CoreAVCHD (6.1.0 - 6100.4.1) <4EA2BAEE-C199-3FD7-BE15-4E48B54B613A> /System/Library/PrivateFrameworks/CoreAVCHD.framework/Versions/A/CoreAVCHD
    0x7fff501e3000 -     0x7fff50204ff4  com.apple.analyticsd (1.0 - 1) <E6E3B6EA-A2BE-3752-B06D-BECCBA4E85B2> /System/Library/PrivateFrameworks/CoreAnalytics.framework/Versions/A/CoreAnalytics
    0x7fff5030d000 -     0x7fff50383ff7  com.apple.corebrightness (1.0 - 1) <DF800295-E1E4-34C0-B8AD-454B62AF0FBD> /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
    0x7fff5050f000 -     0x7fff5051aff7  com.apple.frameworks.CoreDaemon (1.3 - 1.3) <77821999-AFCC-3996-8998-3D0DB7B03F6A> /System/Library/PrivateFrameworks/CoreDaemon.framework/Versions/B/CoreDaemon
    0x7fff5051b000 -     0x7fff50726ff1  com.apple.CoreDuet (1.0 - 1) <1DF03E1D-BDA3-3746-BC8D-902AD3365248> /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
    0x7fff50727000 -     0x7fff50774ff3  com.apple.coreduetcontext (1.0 - 1) <2F644A88-FDA6-361A-A413-4B641776CB6D> /System/Library/PrivateFrameworks/CoreDuetContext.framework/Versions/A/CoreDuetContext
    0x7fff50775000 -     0x7fff50785ffe  com.apple.CoreDuetDaemonProtocol (1.0 - 1) <9409DC93-F0EF-3D54-8317-7FD91ADF1152> /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/Versions/A/CoreDuetDaemonProtocol
    0x7fff50788000 -     0x7fff5078afff  com.apple.CoreDuetDebugLogging (1.0 - 1) <B42C787E-1872-38CF-9A2A-0545CBF4349D> /System/Library/PrivateFrameworks/CoreDuetDebugLogging.framework/Versions/A/CoreDuetDebugLogging
    0x7fff5079b000 -     0x7fff507abff3  com.apple.CoreEmoji (1.0 - 107.1) <7374E3E4-907B-3691-ABAB-F7A27CCCF650> /System/Library/PrivateFrameworks/CoreEmoji.framework/Versions/A/CoreEmoji
    0x7fff50961000 -     0x7fff50aaefff  com.apple.CoreHandwriting (161 - 1.2) <1B0ABCB8-DFE6-312C-ABC3-C129937ED1B4> /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
    0x7fff50deb000 -     0x7fff50e55ff0  com.apple.CoreNLP (1.0 - 213) <BD3A01B7-9C7E-3ABF-B0B5-6D1131C95871> /System/Library/PrivateFrameworks/CoreNLP.framework/Versions/A/CoreNLP
    0x7fff51118000 -     0x7fff511a0ffe  com.apple.CorePDF (4.0 - 518.4.1) <0BAE81C1-5BA8-3877-8363-82362D26956A> /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
    0x7fff51283000 -     0x7fff5128bff8  com.apple.CorePhoneNumbers (1.0 - 1) <E4DAD514-0B3B-3E0B-8AEA-39B320FAAF03> /System/Library/PrivateFrameworks/CorePhoneNumbers.framework/Versions/A/CorePhoneNumbers
    0x7fff51c78000 -     0x7fff51c9bfff  com.apple.CoreSVG (1.0 - 129.3) <F38189F9-C8F9-3D62-9D5F-3F520FB81724> /System/Library/PrivateFrameworks/CoreSVG.framework/Versions/A/CoreSVG
    0x7fff51c9c000 -     0x7fff51ccffff  com.apple.CoreServicesInternal (446.7 - 446.7) <93E6988C-F805-3939-AB8D-584ABADFD34E> /System/Library/PrivateFrameworks/CoreServicesInternal.framework/Versions/A/CoreServicesInternal
    0x7fff51cd0000 -     0x7fff51cfeffd  com.apple.CSStore (1069.24 - 1069.24) <ADE95A95-498F-3B41-8377-8B4896265A73> /System/Library/PrivateFrameworks/CoreServicesStore.framework/Versions/A/CoreServicesStore
    0x7fff52223000 -     0x7fff522b9ff7  com.apple.CoreSymbolication (11.4 - 64535.33.2) <A56D680A-DDF4-3184-A55E-5B2B5C12B1C5> /System/Library/PrivateFrameworks/CoreSymbolication.framework/Versions/A/CoreSymbolication
    0x7fff52351000 -     0x7fff5247dff6  com.apple.coreui (2.1 - 609.4) <5812AEFB-5C84-37F1-868F-2DDBC3CDF930> /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
    0x7fff5247e000 -     0x7fff52637ffa  com.apple.CoreUtils (6.2.4 - 624.7) <456CC907-E838-3945-B70A-66E862C19CD6> /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
    0x7fff52771000 -     0x7fff52784ff1  com.apple.CrashReporterSupport (10.13 - 15016) <B9B5F954-A6FA-349F-973C-8B49711F9A42> /System/Library/PrivateFrameworks/CrashReporterSupport.framework/Versions/A/CrashReporterSupport
    0x7fff5283d000 -     0x7fff5284fff8  com.apple.framework.DFRFoundation (1.0 - 252.50.1) <F7FCE163-8165-398F-87BC-B2FA8A5F9857> /System/Library/PrivateFrameworks/DFRFoundation.framework/Versions/A/DFRFoundation
    0x7fff52850000 -     0x7fff52855fff  com.apple.DSExternalDisplay (3.1 - 380) <8EA5D569-3662-3303-B2BA-3973B8A1AAD8> /System/Library/PrivateFrameworks/DSExternalDisplay.framework/Versions/A/DSExternalDisplay
    0x7fff528df000 -     0x7fff52959ff0  com.apple.datadetectorscore (8.0 - 659) <146BE183-0031-37C6-AD62-23EF68697F45> /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
    0x7fff529a5000 -     0x7fff529e2ff8  com.apple.DebugSymbols (194 - 194) <0873DC37-076B-31E6-A82F-B36D874FE5C9> /System/Library/PrivateFrameworks/DebugSymbols.framework/Versions/A/DebugSymbols
    0x7fff529e3000 -     0x7fff52b6bff6  com.apple.desktopservices (1.14.5 - 1281.5.3) <BE6F44A8-FF2E-3E26-A06B-BB57EC233612> /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
    0x7fff52ee3000 -     0x7fff52fb6ff1  com.apple.DiskManagement (13.0 - 1648.140.2) <E971E4C9-329F-3A20-86F8-7C739C68F736> /System/Library/PrivateFrameworks/DiskManagement.framework/Versions/A/DiskManagement
    0x7fff52fb7000 -     0x7fff52fbbff1  com.apple.DisplayServicesFW (3.1 - 380) <98D9A933-C29C-3464-BA5E-CB75FD6D06C3> /System/Library/PrivateFrameworks/DisplayServices.framework/Versions/A/DisplayServices
    0x7fff53015000 -     0x7fff53039ff7  com.apple.DuetActivityScheduler (1.0 - 1) <188C6793-A94C-3B49-A9F4-AF8A348C7E62> /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/Versions/A/DuetActivityScheduler
    0x7fff53063000 -     0x7fff53098ff7  com.apple.SystemConfiguration.EAP8021X (14.0.0 - 14.0) <95B6A77B-AA37-3F85-BAE2-9B75AA504316> /System/Library/PrivateFrameworks/EAP8021X.framework/Versions/A/EAP8021X
    0x7fff53099000 -     0x7fff5309dff9  com.apple.EFILogin (2.0 - 2) <431E5ADD-D790-31B5-9742-41E776A5CFDD> /System/Library/PrivateFrameworks/EFILogin.framework/Versions/A/EFILogin
    0x7fff53be7000 -     0x7fff54251ff9  com.apple.vision.EspressoFramework (1.0 - 188.4) <074C1667-8C6A-3A31-BA43-DD26694B4E54> /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
    0x7fff5452c000 -     0x7fff54947ff1  com.apple.vision.FaceCore (4.3.0 - 4.3.0) <B2FDE1D6-38F0-3E1A-9C6B-8F2E325308C4> /System/Library/PrivateFrameworks/FaceCore.framework/Versions/A/FaceCore
    0x7fff54fe6000 -     0x7fff5511dff4  libFontParser.dylib (277.2.6.1) <9E9E2EAA-3273-360E-A01B-EB986ECB7BCF> /System/Library/PrivateFrameworks/FontServices.framework/libFontParser.dylib
    0x7fff5511e000 -     0x7fff55152fff  libTrueTypeScaler.dylib (277.2.6.1) <F8A27F0F-44B3-3A1E-8B75-2DFD4A90E1D4> /System/Library/PrivateFrameworks/FontServices.framework/libTrueTypeScaler.dylib
    0x7fff551b7000 -     0x7fff551c7ff6  libhvf.dylib (1.0 - $[CURRENT_PROJECT_VERSION]) <1605B441-08E0-332D-B7D8-0E13F37B54E7> /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
    0x7fff586a8000 -     0x7fff586a9fff  libmetal_timestamp.dylib (902.14.11) <7A1B20F8-498D-3D01-8B89-14B7DC9C56CA> /System/Library/PrivateFrameworks/GPUCompiler.framework/Versions/3902/Libraries/libmetal_timestamp.dylib
    0x7fff59d63000 -     0x7fff59d69fff  com.apple.GPUWrangler (5.2.6 - 5.2.6) <0D2C7F42-7C4E-3ED4-A4B1-D5383840D23E> /System/Library/PrivateFrameworks/GPUWrangler.framework/Versions/A/GPUWrangler
    0x7fff5a088000 -     0x7fff5a0aeff1  com.apple.GenerationalStorage (2.0 - 314) <3479C9D7-A4B1-3E25-BCC9-7713FE0D1183> /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
    0x7fff5a0c7000 -     0x7fff5b0b0ff1  com.apple.GeoServices (1.0 - 1624.26.4.26.9) <849ACDCC-F72C-33EB-A9A9-1F1AAB67B6C1> /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
    0x7fff5b1dc000 -     0x7fff5b1eaffb  com.apple.GraphVisualizer (1.0 - 100.1) <F3DCDBA0-698C-3F4D-9471-13B2A10A6445> /System/Library/PrivateFrameworks/GraphVisualizer.framework/Versions/A/GraphVisualizer
    0x7fff5b253000 -     0x7fff5b260ff9  com.apple.HID (1.0 - 1) <9C8E2F7D-96D9-36A9-B8F4-7C339A5B78F1> /System/Library/PrivateFrameworks/HID.framework/Versions/A/HID
    0x7fff5b389000 -     0x7fff5b447ff4  com.apple.Heimdal (4.0 - 2.0) <797EEF52-BA3B-3E43-9541-713376261B7E> /System/Library/PrivateFrameworks/Heimdal.framework/Versions/A/Heimdal
    0x7fff5be44000 -     0x7fff5be73ff8  com.apple.HelpData (2.3 - 199) <A1AB5BD0-8B2C-3CDD-BCCC-9CB191BBCB33> /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
    0x7fff5d5c3000 -     0x7fff5d5ccffe  com.apple.IOAccelMemoryInfo (1.0 - 1) <50DDA9C2-BDDF-33D4-9BA9-A161E99F1EAD> /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/Versions/A/IOAccelMemoryInfo
    0x7fff5d5cd000 -     0x7fff5d5d5ff5  com.apple.IOAccelerator (438.7.3 - 438.7.3) <49288C8C-00C0-3CA2-B347-5418B6BFA4B8> /System/Library/PrivateFrameworks/IOAccelerator.framework/Versions/A/IOAccelerator
    0x7fff5d5e2000 -     0x7fff5d5f9fff  com.apple.IOPresentment (47.10 - 37) <32F1B3BC-4644-3982-AAB2-8EB5D5FF0161> /System/Library/PrivateFrameworks/IOPresentment.framework/Versions/A/IOPresentment
    0x7fff5d981000 -     0x7fff5d9ccff1  com.apple.IconServices (438.3 - 438.3) <9033B15E-5B2F-36EC-965B-C035AB6E195E> /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
    0x7fff5db69000 -     0x7fff5db77fff  com.apple.IntentsFoundation (1.0 - 1) <4AB58811-E35E-3602-9243-DBF92E655FBC> /System/Library/PrivateFrameworks/IntentsFoundation.framework/Versions/A/IntentsFoundation
    0x7fff5db8a000 -     0x7fff5db91ff9  com.apple.InternationalSupport (1.0 - 45.4) <D85BD7C8-08A8-399C-BF21-C1F050F9982F> /System/Library/PrivateFrameworks/InternationalSupport.framework/Versions/A/InternationalSupport
    0x7fff5de1e000 -     0x7fff5de3dffd  com.apple.security.KeychainCircle.KeychainCircle (1.0 - 1) <6F655A32-F963-3A7E-B475-E460F4AC7D99> /System/Library/PrivateFrameworks/KeychainCircle.framework/Versions/A/KeychainCircle
    0x7fff5df72000 -     0x7fff5e040ffd  com.apple.LanguageModeling (1.0 - 215.1) <0114A0C7-1FF7-3336-AAC1-A0DECA71CED6> /System/Library/PrivateFrameworks/LanguageModeling.framework/Versions/A/LanguageModeling
    0x7fff5e041000 -     0x7fff5e089fff  com.apple.Lexicon-framework (1.0 - 72) <1A091676-EE6C-3393-B1B5-42A207CF0612> /System/Library/PrivateFrameworks/Lexicon.framework/Versions/A/Lexicon
    0x7fff5e090000 -     0x7fff5e095ff3  com.apple.LinguisticData (1.0 - 353.18) <3B92F249-4602-325F-984B-D2DE61EEE4E1> /System/Library/PrivateFrameworks/LinguisticData.framework/Versions/A/LinguisticData
    0x7fff5e0bc000 -     0x7fff5e0e0ffe  com.apple.locationsupport (2394.0.22 - 2394.0.22) <2FFF581B-3EBC-3E40-8105-62CC2C36D0E0> /System/Library/PrivateFrameworks/LocationSupport.framework/Versions/A/LocationSupport
    0x7fff5e92e000 -     0x7fff5e931fff  com.apple.Mangrove (1.0 - 25) <9F85DCE5-83D9-368E-9564-23488084ED05> /System/Library/PrivateFrameworks/Mangrove.framework/Versions/A/Mangrove
    0x7fff5eaef000 -     0x7fff5eb15ffc  com.apple.MarkupUI (1.0 - 325.9) <C71E29CF-B8E1-3F40-8575-69E533CD6647> /System/Library/PrivateFrameworks/MarkupUI.framework/Versions/A/MarkupUI
    0x7fff5eb9a000 -     0x7fff5ec24ff8  com.apple.MediaExperience (1.0 - 1) <0203AF27-AB5E-32FA-B529-AB7F29EEB887> /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
    0x7fff5ec25000 -     0x7fff5ec58fff  com.apple.MediaKit (16 - 923) <2CA40A00-3ED6-3542-8565-F809C9B6C2C3> /System/Library/PrivateFrameworks/MediaKit.framework/Versions/A/MediaKit
    0x7fff5f3fe000 -     0x7fff5f44afff  com.apple.spotlight.metadata.utilities (1.0 - 2076.7) <0237323B-EC78-3FBF-9FC7-5A1FE2B5CE25> /System/Library/PrivateFrameworks/MetadataUtilities.framework/Versions/A/MetadataUtilities
    0x7fff5f44b000 -     0x7fff5f51cffa  com.apple.gpusw.MetalTools (1.0 - 1) <99876E08-37D7-3828-8796-56D90C9AFBDB> /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
    0x7fff5f750000 -     0x7fff5f76efff  com.apple.MobileKeyBag (2.0 - 1.0) <E06B3F60-7A3B-3843-AB11-1CC68CC4E468> /System/Library/PrivateFrameworks/MobileKeyBag.framework/Versions/A/MobileKeyBag
    0x7fff5f83a000 -     0x7fff5f9d0ffd  com.apple.Montreal (1.0 - 121.1) <EA05A924-59A9-3DFF-AC3C-47FDB17F9FBB> /System/Library/PrivateFrameworks/Montreal.framework/Versions/A/Montreal
    0x7fff5f9d1000 -     0x7fff5fa01ff7  com.apple.MultitouchSupport.framework (3440.1 - 3440.1) <3D6999BC-BD40-3B50-8DF6-FF09A876DEFF> /System/Library/PrivateFrameworks/MultitouchSupport.framework/Versions/A/MultitouchSupport
    0x7fff5ff01000 -     0x7fff5ff0bfff  com.apple.NetAuth (6.2 - 6.2) <E28A8847-C251-3BA6-A2C3-2A4A6B5FA18C> /System/Library/PrivateFrameworks/NetAuth.framework/Versions/A/NetAuth
    0x7fff60921000 -     0x7fff6096cffb  com.apple.OTSVG (1.0 - 643.1.5.1) <B10CC7EF-AE50-356D-A18E-0371DDDD3102> /System/Library/PrivateFrameworks/OTSVG.framework/Versions/A/OTSVG
    0x7fff61b89000 -     0x7fff61b94ff2  com.apple.PerformanceAnalysis (1.243.2 - 243.2) <EABF9DF7-C9E8-3839-9822-484EF7E0530B> /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
    0x7fff61b95000 -     0x7fff61bbdffb  com.apple.persistentconnection (1.0 - 1.0) <08537EA8-12B1-3256-9B88-7624285622E2> /System/Library/PrivateFrameworks/PersistentConnection.framework/Versions/A/PersistentConnection
    0x7fff63638000 -     0x7fff63668ff7  com.apple.pluginkit.framework (1.0 - 1) <5B87E57C-6525-3784-BCB0-BFA4D26D1D58> /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
    0x7fff63693000 -     0x7fff636a6ffc  com.apple.PowerLog (1.0 - 1) <2FF0500C-B229-3CC9-A3F7-2E00DA505497> /System/Library/PrivateFrameworks/PowerLog.framework/Versions/A/PowerLog
    0x7fff64522000 -     0x7fff6457cff6  com.apple.ProtectedCloudStorage (1.0 - 1) <7839FC16-732F-3740-BA5C-E09456530DB2> /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Versions/A/ProtectedCloudStorage
    0x7fff6457d000 -     0x7fff64596ffb  com.apple.ProtocolBuffer (1 - 274.24.9.16.3) <B034A3C9-78B1-30A2-A7A7-30CB95C7A117> /System/Library/PrivateFrameworks/ProtocolBuffer.framework/Versions/A/ProtocolBuffer
    0x7fff646a8000 -     0x7fff646abff4  com.apple.QuickLookNonBaseSystem (1.0 - 1) <8563CD18-DCFE-3868-912F-053FC8C34B9C> /System/Library/PrivateFrameworks/QuickLookNonBaseSystem.framework/Versions/A/QuickLookNonBaseSystem
    0x7fff646ac000 -     0x7fff646cfff0  com.apple.quicklook.QuickLookSupport (1.0 - 1) <4D88DA95-1D6F-3C96-8D2D-F19BC4E05386> /System/Library/PrivateFrameworks/QuickLookSupport.framework/Versions/A/QuickLookSupport
    0x7fff64716000 -     0x7fff6478fff3  com.apple.Rapport (1.9.5 - 195.2) <794F4117-93D3-3025-ACCA-377F14EB44CB> /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
    0x7fff649f6000 -     0x7fff64a1fff1  com.apple.RemoteViewServices (2.0 - 148) <2D6D1169-F880-3E74-A8DB-C057352C71BC> /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
    0x7fff64b84000 -     0x7fff64bbfff0  com.apple.RunningBoardServices (1.0 - 223.140.2) <51770481-8A56-3202-8473-04DD9013D155> /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
    0x7fff664a0000 -     0x7fff664a3ff5  com.apple.SecCodeWrapper (4.0 - 448.100.6) <487D191A-0870-390F-9A10-096EA73F9C81> /System/Library/PrivateFrameworks/SecCodeWrapper.framework/Versions/A/SecCodeWrapper
    0x7fff66616000 -     0x7fff6673dfff  com.apple.Sharing (1526.37 - 1526.37) <4475BAED-8036-3E55-B24D-7BA49B8D41DF> /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
    0x7fff66796000 -     0x7fff667b4ff2  com.apple.shortcut (2.16 - 106) <0A7179E9-1261-3538-8492-1EAB436AC037> /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
    0x7fff667b5000 -     0x7fff667d5ff5  com.apple.sidecar-core (1.0 - 209.40.4) <44BACF2D-753F-30DE-B6FA-769BA07E1208> /System/Library/PrivateFrameworks/SidecarCore.framework/Versions/A/SidecarCore
    0x7fff667d6000 -     0x7fff667e8ff0  com.apple.sidecar-ui (1.0 - 209.40.4) <5C6AD8B9-F7F6-3D41-8FB9-7522BA7662A5> /System/Library/PrivateFrameworks/SidecarUI.framework/Versions/A/SidecarUI
    0x7fff67b52000 -     0x7fff67e48ff7  com.apple.SkyLight (1.600.0 - 451.4) <02B6C1E5-C6CB-3065-91EF-DE13FD4BC726> /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
    0x7fff68695000 -     0x7fff686a3ffb  com.apple.SpeechRecognitionCore (6.0.91.2 - 6.0.91.2) <791BB87B-7280-3EF3-8109-4A060C8F9368> /System/Library/PrivateFrameworks/SpeechRecognitionCore.framework/Versions/A/SpeechRecognitionCore
    0x7fff68ed7000 -     0x7fff68ee0ff7  com.apple.SymptomDiagnosticReporter (1.0 - 1238.120.1) <1BDDF257-18EA-3213-BC2E-3400C7AE4623> /System/Library/PrivateFrameworks/SymptomDiagnosticReporter.framework/Versions/A/SymptomDiagnosticReporter
    0x7fff69197000 -     0x7fff691a7ff3  com.apple.TCC (1.0 - 1) <FFC71AC3-245B-37B2-A57C-15104BF46743> /System/Library/PrivateFrameworks/TCC.framework/Versions/A/TCC
    0x7fff696cc000 -     0x7fff69792ff0  com.apple.TextureIO (3.10.9 - 3.10.9) <CDE5AE6F-4AAB-391C-A84D-9FCD9E021BBC> /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
    0x7fff69962000 -     0x7fff69bbaff0  com.apple.UIFoundation (1.0 - 662) <154E8B2A-BEF7-34B3-9ACC-504820F7B032> /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
    0x7fff69c51000 -     0x7fff69c57ffe  com.apple.URLFormatting (119 - 119.18) <45C5B5CD-6741-3F10-8B47-1AFE9D25F017> /System/Library/PrivateFrameworks/URLFormatting.framework/Versions/A/URLFormatting
    0x7fff6a82f000 -     0x7fff6a84fffc  com.apple.UserManagement (1.0 - 1) <C146B7BF-0B06-300A-B45C-E241E447978F> /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
    0x7fff6b5fb000 -     0x7fff6b6e5ff8  com.apple.ViewBridge (464.1 - 464.1) <6563DE9C-3639-396C-8500-52326D525DE4> /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
    0x7fff6b88b000 -     0x7fff6b88cfff  com.apple.WatchdogClient.framework (1.0 - 67.120.2) <FFA17DA1-F6DD-34D3-A708-1F73C8BA7EA7> /System/Library/PrivateFrameworks/WatchdogClient.framework/Versions/A/WatchdogClient
    0x7fff6c4bc000 -     0x7fff6c4bfffa  com.apple.dt.XCTTargetBootstrap (1.0 - 16091) <4D2C7B80-3DE8-30BD-A6F0-D59C5E8F91D9> /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/Versions/A/XCTTargetBootstrap
    0x7fff6c539000 -     0x7fff6c547ff5  com.apple.audio.caulk (1.0 - 32.3) <DC6D48E8-F961-3B6C-9349-3D2E66522EFA> /System/Library/PrivateFrameworks/caulk.framework/Versions/A/caulk
    0x7fff6c889000 -     0x7fff6c88bff3  com.apple.loginsupport (1.0 - 1) <0E8CE493-2629-3F47-8C1A-BFA1C0B8D7EC> /System/Library/PrivateFrameworks/login.framework/Versions/A/Frameworks/loginsupport.framework/Versions/A/loginsupport
    0x7fff6c88c000 -     0x7fff6c89fffd  com.apple.login (3.0 - 3.0) <C2BBE02B-BBD9-328B-ACD2-516D783A3D1F> /System/Library/PrivateFrameworks/login.framework/Versions/A/login
    0x7fff6c8d1000 -     0x7fff6c8ddffd  com.apple.perfdata (1.0 - 51.100.6) <D95F1AD6-8B1C-32B5-A54D-1AADB4C79F38> /System/Library/PrivateFrameworks/perfdata.framework/Versions/A/perfdata
    0x7fff6f362000 -     0x7fff6f36eff9  libAudioStatistics.dylib (1104.93) <42CAC6A2-BCC3-391B-B1C1-D0AC69E99CF4> /usr/lib/libAudioStatistics.dylib
    0x7fff6f36f000 -     0x7fff6f3a2ffa  libAudioToolboxUtility.dylib (1104.93) <20C66F4D-5DF3-3B07-8728-184DCDCB1248> /usr/lib/libAudioToolboxUtility.dylib
    0x7fff6f3a9000 -     0x7fff6f3ddfff  libCRFSuite.dylib (48) <602A4F18-1783-3B69-9DB6-CCBF4703476B> /usr/lib/libCRFSuite.dylib
    0x7fff6f3e0000 -     0x7fff6f3eafff  libChineseTokenizer.dylib (34) <3F5BC40A-C2CA-3CBE-9D97-E257DEA6BA63> /usr/lib/libChineseTokenizer.dylib
    0x7fff6f3eb000 -     0x7fff6f473fff  libCoreStorage.dylib (551) <82A9C8F9-016A-31A8-9CE5-1AF40095C00E> /usr/lib/libCoreStorage.dylib
    0x7fff6f476000 -     0x7fff6f478ff7  libDiagnosticMessagesClient.dylib (112) <C94F3B7B-1854-38EB-9778-834501C53B3F> /usr/lib/libDiagnosticMessagesClient.dylib
    0x7fff6f4be000 -     0x7fff6f675ffb  libFosl_dynamic.dylib (100.4) <737573B2-190A-3BA1-8220-807AD0A2CE5E> /usr/lib/libFosl_dynamic.dylib
    0x7fff6f69c000 -     0x7fff6f6a2ff3  libIOReport.dylib (54) <04AB2D0E-9D6B-3FA7-B838-593F67C6F85C> /usr/lib/libIOReport.dylib
    0x7fff6f784000 -     0x7fff6f78bfff  libMatch.1.dylib (36) <5C6F3971-9D9E-3630-BDB6-60BFC5A665E0> /usr/lib/libMatch.1.dylib
    0x7fff6f7ba000 -     0x7fff6f7daff7  libMobileGestalt.dylib (826.140.5) <B2F770D2-7AF0-39CC-B71F-314725061D82> /usr/lib/libMobileGestalt.dylib
    0x7fff6f85a000 -     0x7fff6f937ff7  libSMC.dylib (20) <C9D0B11D-7A14-3126-8DF3-8A9F1DE912D6> /usr/lib/libSMC.dylib
    0x7fff6f94c000 -     0x7fff6f94dfff  libSystem.B.dylib (1281.100.1) <001B3B7F-D02C-31D3-B961-1ED445D5A266> /usr/lib/libSystem.B.dylib
    0x7fff6f94e000 -     0x7fff6f9d9ff7  libTelephonyUtilDynamic.dylib (5017.1) <649F71B8-8B54-35AD-83C5-7A6BA4B590E6> /usr/lib/libTelephonyUtilDynamic.dylib
    0x7fff6f9da000 -     0x7fff6f9dbfff  libThaiTokenizer.dylib (3) <CDB63DB5-25A3-3DC7-B226-2D9E2D1EB786> /usr/lib/libThaiTokenizer.dylib
    0x7fff6f9f3000 -     0x7fff6fa09fff  libapple_nghttp2.dylib (1.39.2) <07FEC48A-87CF-32A3-8194-FA70B361713A> /usr/lib/libapple_nghttp2.dylib
    0x7fff6fa3e000 -     0x7fff6fab0ff7  libarchive.2.dylib (72.140.1) <AC311FBA-F2DD-3595-AA76-769F912942B8> /usr/lib/libarchive.2.dylib
    0x7fff6fab1000 -     0x7fff6fb4afe5  libate.dylib (3.0.1) <76EA60FB-748C-313F-8951-B076540BEA97> /usr/lib/libate.dylib
    0x7fff6fb4e000 -     0x7fff6fb4eff3  libauto.dylib (187) <B6124448-7690-34AE-8939-ED84AAC630CE> /usr/lib/libauto.dylib
    0x7fff6fc14000 -     0x7fff6fc24ffb  libbsm.0.dylib (60.100.1) <00BFFB9A-2FFE-3C24-896A-251BC61917FD> /usr/lib/libbsm.0.dylib
    0x7fff6fc25000 -     0x7fff6fc31fff  libbz2.1.0.dylib (44) <14CC4988-B6D4-3879-AFC2-9A0DDC6388DE> /usr/lib/libbz2.1.0.dylib
    0x7fff6fc32000 -     0x7fff6fc84fff  libc++.1.dylib (902.1) <59A8239F-C28A-3B59-B8FA-11340DC85EDC> /usr/lib/libc++.1.dylib
    0x7fff6fc85000 -     0x7fff6fc9affb  libc++abi.dylib (902) <E692F14F-C65E-303B-9921-BB7E97D77855> /usr/lib/libc++abi.dylib
    0x7fff6fc9b000 -     0x7fff6fc9bfff  libcharset.1.dylib (59) <72447768-9244-39AB-8E79-2FA14EC0AD33> /usr/lib/libcharset.1.dylib
    0x7fff6fc9c000 -     0x7fff6fcadfff  libcmph.dylib (8) <E72A20DB-2E86-378D-A237-EB9A1370F989> /usr/lib/libcmph.dylib
    0x7fff6fcae000 -     0x7fff6fcc5fd7  libcompression.dylib (87) <64C91066-586D-38C0-A2F3-3E60A940F859> /usr/lib/libcompression.dylib
    0x7fff6ff9f000 -     0x7fff6ffb5ff7  libcoretls.dylib (167) <770A5B96-936E-34E3-B006-B1CEC299B5A5> /usr/lib/libcoretls.dylib
    0x7fff6ffb6000 -     0x7fff6ffb7fff  libcoretls_cfhelpers.dylib (167) <ED52EF99-04FC-3576-9E96-DBA416154838> /usr/lib/libcoretls_cfhelpers.dylib
    0x7fff70561000 -     0x7fff7056cfff  libcsfde.dylib (551) <105E7719-A4FD-3D45-892F-BC5D3503B33D> /usr/lib/libcsfde.dylib
    0x7fff70574000 -     0x7fff705d3ff7  libcups.2.dylib (483.6) <1067A7A0-4FDC-3873-97DC-31AC0E6A7DFE> /usr/lib/libcups.2.dylib
    0x7fff706dd000 -     0x7fff706ddfff  libenergytrace.dylib (21) <162DFCC0-8F48-3DD0-914F-FA8653E27B26> /usr/lib/libenergytrace.dylib
    0x7fff706de000 -     0x7fff706f6fff  libexpat.1.dylib (19.60.2) <FED7C38B-92D8-342D-AED7-871B12D1F7E7> /usr/lib/libexpat.1.dylib
    0x7fff70704000 -     0x7fff70706fff  libfakelink.dylib (149.1) <36146CB2-E6A5-37BB-9EE8-1B4034D8F3AD> /usr/lib/libfakelink.dylib
    0x7fff70715000 -     0x7fff7071afff  libgermantok.dylib (24) <BFAFD35B-D68C-30BF-80F2-FAEB26FB6A80> /usr/lib/libgermantok.dylib
    0x7fff7071b000 -     0x7fff70724ff7  libheimdal-asn1.dylib (564.140.1) <0AC6FB62-2B0F-3E93-A931-E4DC4B1D757A> /usr/lib/libheimdal-asn1.dylib
    0x7fff70725000 -     0x7fff70815fff  libiconv.2.dylib (59) <18311A67-E4EF-3CC7-95B3-C0EDEE3A282F> /usr/lib/libiconv.2.dylib
    0x7fff70816000 -     0x7fff70a6dfff  libicucore.A.dylib (64260.0.1) <8AC2CB07-E7E0-340D-A849-186FA1F27251> /usr/lib/libicucore.A.dylib
    0x7fff70a87000 -     0x7fff70a88fff  liblangid.dylib (133) <30CFC08C-EF36-3CF5-8AEA-C1CB070306B7> /usr/lib/liblangid.dylib
    0x7fff70a89000 -     0x7fff70aa1ff3  liblzma.5.dylib (16) <C131EF18-2CDD-3271-8A30-A8760D4FE166> /usr/lib/liblzma.5.dylib
    0x7fff70ab9000 -     0x7fff70b60ff7  libmecab.dylib (883.11) <2DF2B2E9-438D-326E-89C8-DD5247ABFE08> /usr/lib/libmecab.dylib
    0x7fff70b61000 -     0x7fff70dc3ff1  libmecabra.dylib (883.11) <787FF18A-7440-3C30-A10C-7A34C63D3080> /usr/lib/libmecabra.dylib
    0x7fff71130000 -     0x7fff7115ffff  libncurses.5.4.dylib (57) <995DFEEA-40F3-377F-B73D-D02AC59D591F> /usr/lib/libncurses.5.4.dylib
    0x7fff7128f000 -     0x7fff7170bff5  libnetwork.dylib (1880.120.4) <F2B8AAA5-E093-37F1-885B-EDCD9783F1C0> /usr/lib/libnetwork.dylib
    0x7fff7170c000 -     0x7fff71723fff  libnetworkextension.dylib (1095.140.2) <676B14B3-EEA7-3109-8745-99DD284B6A29> /usr/lib/libnetworkextension.dylib
    0x7fff717ac000 -     0x7fff717dffde  libobjc.A.dylib (787.1) <6DF81160-5E7F-3E31-AA1E-C875E3B98AF6> /usr/lib/libobjc.A.dylib
    0x7fff717f2000 -     0x7fff717f6fff  libpam.2.dylib (25.100.1) <0502F395-8EE6-3D2A-9239-06FD5622E19E> /usr/lib/libpam.2.dylib
    0x7fff717f9000 -     0x7fff7182fff7  libpcap.A.dylib (89.120.1) <A748C246-1484-3CBC-94DD-B4C47877AA78> /usr/lib/libpcap.A.dylib
    0x7fff7186f000 -     0x7fff7187dff9  libperfcheck.dylib (37.100.2) <11061625-3832-3A3A-BAC4-B711A71D5FA7> /usr/lib/libperfcheck.dylib
    0x7fff718b3000 -     0x7fff718cbfff  libresolv.9.dylib (67.40.1) <C57EDFEF-D36A-310B-8D14-8C68A625B1E8> /usr/lib/libresolv.9.dylib
    0x7fff718cd000 -     0x7fff71911ff7  libsandbox.1.dylib (1217.140.4) <9A1B5D3D-F30C-3FC5-8455-F4A3D067DF53> /usr/lib/libsandbox.1.dylib
    0x7fff71925000 -     0x7fff71926ff7  libspindump.dylib (281.3) <B03C6E7D-99CB-3B79-A70E-ED24A6A1BEF5> /usr/lib/libspindump.dylib
    0x7fff71927000 -     0x7fff71b11ff7  libsqlite3.dylib (308.5) <35A2BD9F-4E33-30DE-A994-4AB585AC3AFE> /usr/lib/libsqlite3.dylib
    0x7fff71d62000 -     0x7fff71d65ffb  libutil.dylib (57) <F01467F6-23A7-37EE-A170-33CE1577B41D> /usr/lib/libutil.dylib
    0x7fff71d66000 -     0x7fff71d73ff7  libxar.1.dylib (425.2) <EE964412-9E25-30B3-BCC0-CCEFBCC8094B> /usr/lib/libxar.1.dylib
    0x7fff71d79000 -     0x7fff71e5bff7  libxml2.2.dylib (33.4) <EFA77CC6-9139-37B3-98D4-B0E526110EE3> /usr/lib/libxml2.2.dylib
    0x7fff71e5f000 -     0x7fff71e87fff  libxslt.1.dylib (16.9) <34A45627-DA5B-37D2-9609-65B425E0010A> /usr/lib/libxslt.1.dylib
    0x7fff71e88000 -     0x7fff71e9aff3  libz.1.dylib (76) <793D9643-CD83-3AAC-8B96-88D548FAB620> /usr/lib/libz.1.dylib
    0x7fff72749000 -     0x7fff7274eff3  libcache.dylib (83) <5940876E-AC8A-3BE0-80B3-DE3FB14E257A> /usr/lib/system/libcache.dylib
    0x7fff7274f000 -     0x7fff7275afff  libcommonCrypto.dylib (60165.120.1) <C095BD55-1D27-337F-9B02-885E1C7FF87A> /usr/lib/system/libcommonCrypto.dylib
    0x7fff7275b000 -     0x7fff72762fff  libcompiler_rt.dylib (101.2) <6E80AC11-A277-31FA-AEEF-E5A528274C77> /usr/lib/system/libcompiler_rt.dylib
    0x7fff72763000 -     0x7fff7276cff7  libcopyfile.dylib (166.40.1) <EB5E0BC8-873D-3546-A40E-C36DC46FA8F6> /usr/lib/system/libcopyfile.dylib
    0x7fff7276d000 -     0x7fff727fffdb  libcorecrypto.dylib (866.140.1) <0B6C52DB-5A50-3FCD-8B5E-C0C2F35857E3> /usr/lib/system/libcorecrypto.dylib
    0x7fff7290c000 -     0x7fff7294cff0  libdispatch.dylib (1173.100.2) <EAD535EE-1270-39A9-A254-95CF117FF3B0> /usr/lib/system/libdispatch.dylib
    0x7fff7294d000 -     0x7fff72983fff  libdyld.dylib (750.6) <24C41E8B-6B33-30C7-94C9-02D2BD051D66> /usr/lib/system/libdyld.dylib
    0x7fff72984000 -     0x7fff72984ffb  libkeymgr.dylib (30) <6F582FDB-EB1A-3ED2-A989-B750643E2647> /usr/lib/system/libkeymgr.dylib
    0x7fff72985000 -     0x7fff72991ff3  libkxld.dylib (6153.141.1) <756B1F0D-2E37-31A7-A6F0-2E5C22E62C3D> /usr/lib/system/libkxld.dylib
    0x7fff72992000 -     0x7fff72992ff7  liblaunch.dylib (1738.140.1) <AFBCBDD3-0B55-3ECD-8E04-A73A3A57356B> /usr/lib/system/liblaunch.dylib
    0x7fff72993000 -     0x7fff72998ff7  libmacho.dylib (959.0.1) <1B0296B5-3FD0-342C-BCC2-9886351A4391> /usr/lib/system/libmacho.dylib
    0x7fff72999000 -     0x7fff7299bff3  libquarantine.dylib (110.40.3) <67FE2676-F9E8-3797-AEE5-F5F9D191CFA3> /usr/lib/system/libquarantine.dylib
    0x7fff7299c000 -     0x7fff7299dff7  libremovefile.dylib (48) <5CEBDAB2-988A-3B66-87BC-3C45D1C08730> /usr/lib/system/libremovefile.dylib
    0x7fff7299e000 -     0x7fff729b5ff3  libsystem_asl.dylib (377.60.2) <7A07FF86-658E-35D7-8136-829737E98B7B> /usr/lib/system/libsystem_asl.dylib
    0x7fff729b6000 -     0x7fff729b6ff7  libsystem_blocks.dylib (74) <0D53847E-AF5F-3ACF-B51F-A15DEA4DEC58> /usr/lib/system/libsystem_blocks.dylib
    0x7fff729b7000 -     0x7fff72a3efff  libsystem_c.dylib (1353.100.2) <AF7873B0-AC4A-3C67-89BB-B8DA87718DAE> /usr/lib/system/libsystem_c.dylib
    0x7fff72a3f000 -     0x7fff72a42ffb  libsystem_configuration.dylib (1061.141.1) <0EE84C33-64FD-372B-974A-AF7A136F2068> /usr/lib/system/libsystem_configuration.dylib
    0x7fff72a43000 -     0x7fff72a46fff  libsystem_coreservices.dylib (114) <08B89E9B-C5B2-3E73-8964-03E58692B21F> /usr/lib/system/libsystem_coreservices.dylib
    0x7fff72a47000 -     0x7fff72a4ffff  libsystem_darwin.dylib (1353.100.2) <BD5BAD5B-AC3F-371A-B4FC-ADF86D6DCE51> /usr/lib/system/libsystem_darwin.dylib
    0x7fff72a50000 -     0x7fff72a57fff  libsystem_dnssd.dylib (1096.100.3) <01E0965B-83E5-356C-AC1F-C723F5AAB483> /usr/lib/system/libsystem_dnssd.dylib
    0x7fff72a58000 -     0x7fff72a59ffb  libsystem_featureflags.dylib (17) <6317641E-B43F-36A3-974E-6073786B94B9> /usr/lib/system/libsystem_featureflags.dylib
    0x7fff72a5a000 -     0x7fff72aa7ff7  libsystem_info.dylib (538) <4DD813CB-D7B0-3AB5-9054-D2E4FF7A64B9> /usr/lib/system/libsystem_info.dylib
    0x7fff72aa8000 -     0x7fff72ad4ff7  libsystem_kernel.dylib (6153.141.1) <2B6311E6-6240-3EF7-8C87-475B66F7452C> /usr/lib/system/libsystem_kernel.dylib
    0x7fff72ad5000 -     0x7fff72b1cfff  libsystem_m.dylib (3178) <77A9D888-36E9-3968-8103-C82FFFC60B9E> /usr/lib/system/libsystem_m.dylib
    0x7fff72b1d000 -     0x7fff72b44fff  libsystem_malloc.dylib (283.100.6) <059F4DBD-856A-3A59-8B20-FD4B6918C5F2> /usr/lib/system/libsystem_malloc.dylib
    0x7fff72b45000 -     0x7fff72b52ffb  libsystem_networkextension.dylib (1095.140.2) <4CCE78C9-1DC4-3375-9828-D5BD739D23F3> /usr/lib/system/libsystem_networkextension.dylib
    0x7fff72b53000 -     0x7fff72b5cff7  libsystem_notify.dylib (241.100.2) <DEAD75F2-DD34-3E8F-82DE-344625A2C25E> /usr/lib/system/libsystem_notify.dylib
    0x7fff72b5d000 -     0x7fff72b65fef  libsystem_platform.dylib (220.100.1) <97E825F6-D823-366C-9FF3-B1C8EA891044> /usr/lib/system/libsystem_platform.dylib
    0x7fff72b66000 -     0x7fff72b70fff  libsystem_pthread.dylib (416.100.3) <80B053AA-B6F7-3B59-BC44-78A5A4F7368F> /usr/lib/system/libsystem_pthread.dylib
    0x7fff72b71000 -     0x7fff72b75ff3  libsystem_sandbox.dylib (1217.140.4) <20BF94E2-DAB8-3EBE-AACE-99DF84C1C391> /usr/lib/system/libsystem_sandbox.dylib
    0x7fff72b76000 -     0x7fff72b78fff  libsystem_secinit.dylib (62.100.2) <28EDEB6F-899B-373D-B761-4C20D39285D9> /usr/lib/system/libsystem_secinit.dylib
    0x7fff72b79000 -     0x7fff72b80ffb  libsystem_symptoms.dylib (1238.120.1) <22800D8C-5C2A-3171-8C29-311BBE67F198> /usr/lib/system/libsystem_symptoms.dylib
    0x7fff72b81000 -     0x7fff72b97ff2  libsystem_trace.dylib (1147.120) <DC00C77E-4709-31F0-B913-CF09559B7A6F> /usr/lib/system/libsystem_trace.dylib
    0x7fff72b99000 -     0x7fff72b9eff7  libunwind.dylib (35.4) <42B7B509-BAFE-365B-893A-72414C92F5BF> /usr/lib/system/libunwind.dylib
    0x7fff72b9f000 -     0x7fff72bd4ffe  libxpc.dylib (1738.140.1) <58E276A9-EE11-3F02-9D3E-5371E604E677> /usr/lib/system/libxpc.dylib

External Modification Summary:
  Calls made by other processes targeting this process:
    task_for_pid: 0
    thread_create: 0
    thread_set_state: 0
  Calls made by this process:
    task_for_pid: 0
    thread_create: 0
    thread_set_state: 0
  Calls made by all processes on this machine:
    task_for_pid: 11477618
    thread_create: 0
    thread_set_state: 1859

VM Region Summary:
ReadOnly portion of Libraries: Total=658.3M resident=0K(0%) swapped_out_or_unallocated=658.3M(100%)
Writable regions: Total=661.1M written=0K(0%) resident=0K(0%) swapped_out=0K(0%) unallocated=661.1M(100%)
 
                                VIRTUAL   REGION 
REGION TYPE                        SIZE    COUNT (non-coalesced) 
===========                     =======  ======= 
Accelerate framework               128K        1 
Activity Tracing                   256K        1 
CG backing stores                 2816K        4 
CG image                            48K        4 
CoreAnimation                       96K        8 
CoreGraphics                         8K        1 
CoreImage                           24K        2 
CoreServices                        20K        1 
CoreUI image data                  784K        7 
Foundation                           4K        1 
Kernel Alloc Once                    8K        1 
MALLOC                           259.0M       64 
MALLOC guard page                   32K        7 
MALLOC_NANO (reserved)           384.0M        1         reserved VM address space (unallocated)
STACK GUARD                       56.1M       14 
Stack                             14.6M       14 
VM_ALLOCATE                        116K       15 
__DATA                            37.6M      354 
__DATA_CONST                        24K        2 
__FONT_DATA                          4K        1 
__LINKEDIT                       389.6M        8 
__OBJC_RO                         32.3M        1 
__OBJC_RW                         1908K        2 
__TEXT                           268.7M      352 
__UNICODE                          564K        1 
mapped file                       64.0M       42 
shared memory                      644K       16 
===========                     =======  ======= 
TOTAL                              1.5G      925 
TOTAL, minus reserved VM space     1.1G      925 

Model: MacBookPro16,1, BootROM 1037.147.1.0.0 (iBridge: 17.16.16065.0.0,0), 6 processors, 6-Core Intel Core i7, 2,6 GHz, 16 GB, SMC 
Graphics: kHW_IntelUHDGraphics630Item, Intel UHD Graphics 630, spdisplays_builtin
Graphics: kHW_AMDRadeonPro5300MItem, AMD Radeon Pro 5300M, spdisplays_pcie_device, 4 GB
Memory Module: BANK 0/ChannelA-DIMM0, 8 GB, DDR4, 2667 MHz, SK Hynix, -
Memory Module: BANK 2/ChannelB-DIMM0, 8 GB, DDR4, 2667 MHz, SK Hynix, -
AirPort: spairport_wireless_card_type_airport_extreme (0x14E4, 0x7BF), wl0: Apr  7 2020 13:09:12 version 9.30.357.41.32.5.49 FWID 01-617711e7
Bluetooth: Version 7.0.6f7, 3 services, 27 devices, 1 incoming serial ports
Network Service: Wi-Fi, AirPort, en0
USB Device: USB 3.1 Bus
USB Device: Hub
USB Device: USB Controls
USB Device: Apple T2 Bus
USB Device: Composite Device
USB Device: Touch Bar Backlight
USB Device: Touch Bar Display
USB Device: Apple Internal Keyboard / Trackpad
USB Device: Headset
USB Device: Ambient Light Sensor
USB Device: FaceTime HD Camera (Built-in)
USB Device: Apple T2 Controller
Thunderbolt Bus: MacBook Pro, Apple Inc., 55.3
Thunderbolt Bus: MacBook Pro, Apple Inc., 55.3

```
