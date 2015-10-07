//
//  TollgateScene.hpp
//  RunRunRun
//  关卡场景
//  Created by wangju on 15/10/7.
//
//

#ifndef TollgateScene_hpp
#define TollgateScene_hpp





#include <iostream>
#include "cocos2d.h"
#include "Player.hpp"

USING_NS_CC;

class TollgateScene : public Layer
{
public:
    static Scene* createScene();
    virtual bool init();
    CREATE_FUNC(TollgateScene);
    //添加角色
    void addPlayer(TMXTiledMap* map);

    
};






#endif /* TollgateScene_hpp */
