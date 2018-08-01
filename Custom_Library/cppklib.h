#pragma once
#include <string>
#include <cmath>
#include <windows.h>

void Rectangle(int w_pos, int h_pos, int width, int height, COLORREF color);

void Rectangle(int w_pos, int h_pos, int width, int height, int thickness, COLORREF color);

void FilledRectangle(int w_pos, int h_pos, int width, int height, COLORREF color);

void Circle(int w_pos, int h_pos, int radius, COLORREF color);

void Circle(int w_pos, int h_pos, int radius, int thickness, COLORREF color);

void FilledCircle(int w_pos, int h_pos, int radius, COLORREF color);

void SmallNumber(int w_pos, int h_pos, std::string number, COLORREF color);

void Line(int a_w_pos, int a_h_pos, int b_w_pos, int b_h_pos);