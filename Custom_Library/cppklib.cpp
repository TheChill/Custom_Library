#include "cppklib.h"

HWND myconsole = GetConsoleWindow();
HDC mydc = GetDC(myconsole);

void Rectangle(int w_pos, int h_pos, int width, int height, COLORREF color) {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (i == 0 || i == width - 1 || j == 0 || j == height - 1) {
				SetPixel(mydc, w_pos + i, h_pos + j, color);
			}
		}
	}
}

void Rectangle(int w_pos, int h_pos, int width, int height, int thickness, COLORREF color) {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (i < thickness || i > (width - thickness) - 1 || j < thickness || j >(height - thickness) - 1) {
				SetPixel(mydc, w_pos + i, h_pos + j, color);
			}
		}
	}
}

void FilledRectangle(int w_pos, int h_pos, int width, int height, COLORREF color) {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			SetPixel(mydc, w_pos + i, h_pos + j, color);
		}
	}
}

void Circle(int w_pos, int h_pos, int radius, COLORREF color) {
	int w_top_left_of_rectangle = w_pos - radius;
	int h_top_left_of_rectangle = h_pos - radius;
	int w_bottom_right_of_rectangle = w_pos + radius + 1;
	int h_bottom_right_of_rectangle = h_pos + radius + 1;

	for (int i = w_top_left_of_rectangle; i < w_bottom_right_of_rectangle; i++) {
		for (int j = h_top_left_of_rectangle; j < h_bottom_right_of_rectangle; j++) {
			if (sqrt(pow(w_pos - i, 2) + pow(h_pos - j, 2)) <= radius) {
				if (!(sqrt(pow(w_pos - i, 2) + pow(h_pos - j, 2)) <= radius - 1)) {
					SetPixel(mydc, i, j, color);
				}
			}
		}
	}
}

void Circle(int w_pos, int h_pos, int radius, int thickness, COLORREF color) {
	int w_top_left_of_rectangle = w_pos - radius;
	int h_top_left_of_rectangle = h_pos - radius;
	int w_bottom_right_of_rectangle = w_pos + radius + 1;
	int h_bottom_right_of_rectangle = h_pos + radius + 1;

	for (int i = w_top_left_of_rectangle; i < w_bottom_right_of_rectangle; i++) {
		for (int j = h_top_left_of_rectangle; j < h_bottom_right_of_rectangle; j++) {
			if (sqrt(pow(w_pos - i, 2) + pow(h_pos - j, 2)) <= radius) {
				if (!(sqrt(pow(w_pos - i, 2) + pow(h_pos - j, 2)) <= radius - thickness)) {
					SetPixel(mydc, i, j, color);
				}
			}
		}
	}
}

void FilledCircle(int w_pos, int h_pos, int radius, COLORREF color) {
	int w_top_left_of_rectangle = w_pos - radius;
	int h_top_left_of_rectangle = h_pos - radius;
	int w_bottom_right_of_rectangle = w_pos + radius + 1;
	int h_bottom_right_of_rectangle = h_pos + radius + 1;

	for (int i = w_top_left_of_rectangle; i < w_bottom_right_of_rectangle; i++) {
		for (int j = h_top_left_of_rectangle; j < h_bottom_right_of_rectangle; j++) {
			if (sqrt(pow(w_pos - i, 2) + pow(h_pos - j, 2)) <= radius) {
				SetPixel(mydc, i, j, color);
			}
		}
	}
}

void SmallNumber(int w_pos, int h_pos, std::string number, COLORREF color) {
	for (int i = 0; i < number.length(); i++) {
		if (number[i] == '0') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '1'){
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '2') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '3') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '4') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '5') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '6') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '7') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '8') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 4, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
		else if (number[i] == '9') {
			SetPixel(mydc, w_pos + (4 * i), h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 1, color);
			SetPixel(mydc, w_pos + (4 * i), h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 1, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 2, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 3, color);
			SetPixel(mydc, w_pos + (4 * i) + 2, h_pos + 4, color);
		}
	}
}

void Line(int a_w_pos, int a_h_pos, int b_w_pos, int b_h_pos) {
	
}