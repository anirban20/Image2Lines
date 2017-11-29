#include "LineSegmentation.hpp"

int main() {
    string img_path = "../img/A.jpg";
    LineSegmentation line_segmentation(img_path);
    vector<cv::Mat> lines = line_segmentation.get_lines();
    return 0;
}