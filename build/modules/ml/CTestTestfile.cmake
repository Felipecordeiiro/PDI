# CMake generated Testfile for 
# Source directory: /home/felipe/Desktop/graduation/2025.2/PDI/opencv/modules/ml
# Build directory: /home/felipe/Desktop/graduation/2025.2/PDI/build/modules/ml
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_ml "/home/felipe/Desktop/graduation/2025.2/PDI/build/bin/opencv_test_ml" "--gtest_output=xml:opencv_test_ml.xml")
set_tests_properties(opencv_test_ml PROPERTIES  LABELS "Main;opencv_ml;Accuracy" WORKING_DIRECTORY "/home/felipe/Desktop/graduation/2025.2/PDI/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/felipe/Desktop/graduation/2025.2/PDI/opencv/cmake/OpenCVUtils.cmake;1799;add_test;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/cmake/OpenCVModule.cmake;1365;ocv_add_test_from_target;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/cmake/OpenCVModule.cmake;1123;ocv_add_accuracy_tests;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/modules/ml/CMakeLists.txt;2;ocv_define_module;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/modules/ml/CMakeLists.txt;0;")
