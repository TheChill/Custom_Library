# Custom Library

**Multiple functions for drawing different shapes on the console**

```
void Rectangle(int w_pos, int h_pos, int width, int height, COLORREF color);
void Rectangle(int w_pos, int h_pos, int width, int height, int thickness, COLORREF color);
void FilledRectangle(int w_pos, int h_pos, int width, int height, COLORREF color);
void Circle(int w_pos, int h_pos, int radius, COLORREF color);
void Circle(int w_pos, int h_pos, int radius, int thickness, COLORREF color);
void FilledCircle(int w_pos, int h_pos, int radius, COLORREF color);
void SmallNumber(int w_pos, int h_pos, std::string number, COLORREF color);
```