#ifndef KEYBOARD_H
#define KEYBOARD_H

enum Key { Quit, Left, Right, Up, Down, Other };

class keyboard{
public:
    void Init();
    char Read();
    void Free();
};


#endif