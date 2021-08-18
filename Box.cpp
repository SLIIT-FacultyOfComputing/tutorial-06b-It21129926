#include "Box.h"

// Implement setters and getters
void Box::setLength(int le)
{
  length = le;
}
void Box::setWidth(int we)
{
  width = we;
}
void Box::setHeight(int he)
{
  height = he;
}
int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return (length*width*height);
}
