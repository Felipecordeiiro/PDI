# CMake generated Testfile for 
# Source directory: /home/felipe/Desktop/graduation/2025.2/PDI/opencv/modules/flann
# Build directory: /home/felipe/Desktop/graduation/2025.2/PDI/build/modules/flann
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_flann "/home/felipe/Desktop/graduation/2025.2/PDI/build/bin/opencv_test_flann" "--gtest_output=xml:opencv_test_flann.xml")
set_tests_properties(opencv_test_flann PROPERTIES  LABELS "Main;opencv_flann;Accuracy" WORKING_DIRECTORY "/home/felipe/Desktop/graduation/2025.2/PDI/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/felipe/Desktop/graduation/2025.2/PDI/opencv/cmake/OpenCVUtils.cmake;1799;add_test;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/cmake/OpenCVModule.cmake;1365;ocv_add_test_from_target;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/cmake/OpenCVModule.cmake;1123;ocv_add_accuracy_tests;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/modules/flann/CMakeLists.txt;2;ocv_define_module;/home/felipe/Desktop/graduation/2025.2/PDI/opencv/modules/flann/CMakeLists.txt;0;")
