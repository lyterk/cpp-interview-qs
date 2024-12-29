add_library(questions questions.cpp)
target_include_directories(questions PUBLIC ../include)
# require at least c++11
target_compile_features(questions PUBLIC cxx_std_11)
