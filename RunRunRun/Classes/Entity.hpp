//
//  Entity.hpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#ifndef Entity_hpp
#define Entity_hpp

#include <cocos2d.h>

USING_NS_CC;


class Entity : public Node
{
    
public:
    void BindSprite(Sprite* sprite);
protected:
    Sprite* m_sprite;

};



#endif /* Entity_hpp */
