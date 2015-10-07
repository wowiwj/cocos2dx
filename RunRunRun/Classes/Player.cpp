//
//  Player.cpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#include "Player.hpp"


bool Player::init()
{
    
    
    return true;
}

void Player::run()
{
    
    SpriteFrameCache* frameCache = SpriteFrameCache::getInstance();
    frameCache->addSpriteFramesWithFile("boys.plist", "boys.png");
    
    SpriteFrame* frame = NULL;
    
    //创建精灵帧对象，添加到列表
    Vector<SpriteFrame*> framelist;
    for (int i = 1 ; i < 15; i ++) {
        frame = frameCache->getSpriteFrameByName(StringUtils::format("run%d.png",i));
        
        framelist.pushBack(frame);
    }
    
    //根据精灵帧对象创建动画
    Animation* animation = Animation::createWithSpriteFrames(framelist);
    animation->setLoops(-1);//循环播放
    animation->setDelayPerUnit(0.08f);//每帧播放的间隔
    
    Animate* animate = Animate::create(animation);
    
    m_sprite->runAction(animate);
}