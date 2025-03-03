cmake_minimum_required(VERSION 3.10)

project (demo-eclipse)

include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("-std=c++17" COMPILER_SUPPORTS_CPP17)
if (COMPILER_SUPPORTS_CPP17)
    add_compile_definitions(SUPPORTS_CPP17)
endif()

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
)

target_include_directories(main PRIVATE include)
