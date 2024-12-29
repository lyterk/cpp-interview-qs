add_executable(tests tests.cpp questions_t.cpp)
target_link_libraries(tests PUBLIC questions)
target_include_directories(tests PUBLIC ../ext)

# allow user to run tests with `make test` or `ctest`
include(../cmake/Catch.cmake)
catch_discover_tests(tests)