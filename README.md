# ColorCpp
A simple C++ library for writing colorful texts.

<img src="picture.png" alt="Demo picture" width="65%"/>

## Usage
To make a text colored, pass the text to `color::Colored()` and specify the color:
```cpp
std::cout << color::Colored("This is a colored text!", colored::RED) << std::endl;
```
