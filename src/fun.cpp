// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>
#include <stdio.h>
#include <cmath>

unsigned int faStr1(const char *str) {
    int count = 0;
    bool isSpace = false;
    bool isCorrect = true;

    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++)
    {
        if (str[i] == ' ')
        {
            isSpace = true;
        }

        if (isdigit(str[i]))
        {
            isCorrect = false;
        }

        if (isSpace == true)
        {
            if (isCorrect)
            {
                count++;
            }

            isCorrect = true;
            isSpace = false;
        }
    }

    return count;
}

unsigned int faStr2(const char *str) {
      int count = 0;
    bool isSpace = false;
    bool isCorrect = true;
    bool isFirstChar = true;

    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        if (str[i] == ' ')
        {
            isSpace = true;
        }

        if (isFirstChar)
        {
            isFirstChar = false;

            if (!isupper(str[i]))
            {
                isCorrect = false;
            }
        }
        else
        {
            if (!islower(str[i]))
            {
                isCorrect = false;
            }
        }

        if (isSpace == true)
        {
            if (isCorrect)
            {
                count++;
            }

            isCorrect = true;
            isSpace = false;
            isFirstChar = true;
        }
    }

    return count;
}

unsigned int faStr3(const char *str) {
     int countWord = 0;
    int countChar = 0;
    bool isSpace = false;

    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        if (str[i] == ' ')
        {
            isSpace = true;
        }
        else
        {
            countChar++;
        }

        if (isSpace == true)
        {
            countWord++;
            isSpace = false;
        }
    }

    return  round(countChar / countWord);
}
