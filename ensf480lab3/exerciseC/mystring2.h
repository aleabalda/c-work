/*
File Name: mystring2.h
Assignment: Lab 3 Exercise B
Completed by: Alessandro Baldassarre and Christopher Michaud
Submission Date: Oct 11, 2023
*/

#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstring>
#include <iostream>

class Mystring
{
public:
  Mystring();
  Mystring(int n);
  Mystring(const char *s);
  ~Mystring();
  Mystring(const Mystring &source);
  Mystring &operator=(const Mystring &rhs);

  int length() const;
  char get_char(int pos) const;
  const char *c_str() const;
  void set_char(int pos, char c);
  Mystring &append(const Mystring &other);
  void set_str(char *s);

  bool operator>(const Mystring &other) const
  {
    return strcmp(this->charsM, other.charsM) > 0;
  }

  friend std::ostream &operator<<(std::ostream &os, const Mystring &str);

private:
  int lengthM;
  char *charsM;
  void memory_check(char *s);
};

#endif
