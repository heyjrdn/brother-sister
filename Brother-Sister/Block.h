//
//  Block.h
//  Brother-Sister
//
//  Created by Jordan Cortes Guzman on 11/10/13.
//  Copyright (c) 2013 Ceci & Jordan. All rights reserved.
//

#ifndef __Block__
#define __Block__

class Block
{
    float x, y, height, width;
    int side;
    float repeat_x, repeat_y;
    
public:
    Block();
    Block(float, float, float, float);
    Block(float, float, float, float, int);
    Block(float, float, float, float, int, float, float);
    
public:
    float getX();
    float getY();
    float getWidth();
    float getHeight();
    int getSide();
    float getRepeatX();
    float getRepeatY();
    void setX(float);
    void setY(float);
    void setWidth(float);
    void setHeight(float);
    void setSide(int);
    void setRepeatX(float);
    void setRepeatY(float);
};

#endif /* defined(__Block__) */