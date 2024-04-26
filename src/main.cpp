#include<iostream>

//if using default values they must be set in the declaration if a declaration is used
int volume(int length=100, int width=20, int height=3);

int main() {
	std::cout << volume() << std::endl;
}

//don't repeat or restate the default values in the definition
int volume(int length, int width, int height) {
	return length * width * height;
}