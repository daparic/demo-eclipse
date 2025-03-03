cmake_minimum_required(VERSION 3.10)

project (demo-eclipse)

# This line is important for Parasoft C/C++ code analysis to work
include(/opt/parasoft/cpptest_professional-2024.2.0-linux.x86_64/integration/cmake/cpptest-project.cmake)

#################################################################################################
# this block here is not important, it's just to check if we are using a C++17 standard compiler
# for my personal explorations
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("-std=c++17" COMPILER_SUPPORTS_CPP17)
if (COMPILER_SUPPORTS_CPP17)
    add_compile_definitions(SUPPORTS_CPP17)
endif()
################################################################################################

add_executable(main
    main.cpp
    ATM.cpp
    Account.cpp
    Bank.cpp
    TestObjectFactory.cpp
    dbutil.cpp
    BaseDisplay.cpp
    decide.cpp
    misc/bbb/CODSTA-MCPP-48.cpp
    misc/bbb/CODSTA-MCPP-42.cpp
    misc/bbb/CODSTA-MCPP-04.cpp
    misc/bbb/ccc/CODSTA-MCPP-57.cpp
    misc/bbb/ccc/CODSTA-MCPP-45.cpp
    misc/BD-PB-NORETURN.cpp
    misc/CODSTA-MCPP-01-3.cpp
    misc/CODSTA-MCPP-17_c-3.cpp
    misc/CODSTA-MCPP-11_a_cpp11-4.cpp
    misc/aaa/CODSTA-MCPP-50.cpp
    misc/aaa/CODSTA-MCPP-103.cpp
    misc/aaa/CODSTA-MCPP-31.cpp
    misc/my/my.c
)

target_include_directories(main PRIVATE include)

# This block generates the cpptestscan.bdf file needed by 
# Parasoft C/C++ code analysis either in GUI or CLI 
# Adjust value of CPPTEST_COMPILER_ID accordingly (gcc_11-64, gcc_13-64, etc)
# There is also an examples/CMakeProject/ on where you unzip the tool
cpptest_add_executable(
    cpptestscan 
    CPPTEST_COMPILER_ID gcc_13-64
    CPPTEST_PROJECT_LOC
        ${CMAKE_SOURCE_DIR}
    CPPTEST_PROJECT_FOLDERS
        app=${CMAKE_CURRENT_SOURCE_DIR}
    SOURCES
        main.cpp
        ATM.cpp
        Account.cpp
        Bank.cpp
        TestObjectFactory.cpp
        dbutil.cpp
        BaseDisplay.cpp
        decide.cpp
        misc/bbb/CODSTA-MCPP-48.cpp
        misc/bbb/CODSTA-MCPP-42.cpp
        misc/bbb/CODSTA-MCPP-04.cpp
        misc/bbb/ccc/CODSTA-MCPP-57.cpp
        misc/bbb/ccc/CODSTA-MCPP-45.cpp
        misc/BD-PB-NORETURN.cpp
        misc/CODSTA-MCPP-01-3.cpp
        misc/CODSTA-MCPP-17_c-3.cpp
        misc/CODSTA-MCPP-11_a_cpp11-4.cpp
        misc/aaa/CODSTA-MCPP-50.cpp
        misc/aaa/CODSTA-MCPP-103.cpp
        misc/aaa/CODSTA-MCPP-31.cpp
        misc/my/my.c
)
target_include_directories(cpptestscan PRIVATE include)
