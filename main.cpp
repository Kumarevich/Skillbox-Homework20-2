#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>

int main() {
    std::srand(std::time(nullptr));
    int height, width;
    std::cout << "Input height and width: ";
    std::cin >> height >> width;
    std::vector<std::vector<bool>> picture;
    for (int i = 0; i < height; ++i) {
        picture.push_back(std::vector<bool>());
        for (int j = 0; j < width; ++j) {
            picture[i].push_back(std::rand() % 2);
        }
    }

    std::ofstream drawing;
    drawing.open("..\\pic.txt");
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            drawing << picture[i][j];
        }
        drawing << std::endl;
    }

    drawing.close();
    return 0;
}
