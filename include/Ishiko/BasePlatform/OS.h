/*
    Copyright (c) 2020-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/base-platform/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_BASEPLATFORM_OS_H_
#define _ISHIKO_BASEPLATFORM_OS_H_

#if defined(__linux__)
    #define ISHIKO_OS_LINUX 1
    #define ISHIKO_OS ISHIKO_OS_LINUX
#elif defined(_WIN32)
    #define ISHIKO_OS_WINDOWS 2
    #define ISHIKO_OS ISHIKO_OS_WINDOWS
#elif defined(__CYGWIN__)
    #define ISHIKO_OS_CYGWIN 3
    #define ISHIKO_OS ISHIKO_OS_CYGWIN
#else
    #error Unsupported or unrecognized OS
#endif

#endif
