#include <opencv2/opencv.hpp>
#include <iostream>
 
int main() {
 
    // Load the image
    cv::Mat image = cv::imread("C:/Users/ssabb/Downloads/japan1.jpg");
 
    // Check if the image is loaded successfully
    if (image.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }
 
    // Display the original image
    cv::imshow("Original Image", image);
    cv::waitKey(0);
    return 0;
}