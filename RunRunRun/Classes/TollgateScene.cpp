//
//  TollgateScene.cpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//
//

#include "TollgateScene.hpp"

Scene* TollgateScene :: createScene()
{
    
    auto scene = Scene::create();
    
    auto layer = TollgateScene::create();
    
    scene->addChild(layer);
    
    return scene;
    
}

bool TollgateScene::init()
{
    if (!Layer::init()) {
        return false;
    }
    
    TMXTiledMap* map = TMXTiledMap::create("level01.tmx");
    this->addChild(map);
    
    //加载玩家
    addPlayer(map);
    return true;
    
}

//添加角色
void TollgateScene::addPlayer(TMXTiledMap* map)
{
   // Size visibleSize = Director::getInstance()->getVisibleSize();
    
    

    
    
    //创建精灵
    Sprite* playerSprite = Sprite::create("player.png");
    
    
    //讲精灵绑定到对象
    Player* mPlayer = Player::create();
    mPlayer->BindSprite(playerSprite);
    mPlayer->run();
    
    //加载对象层
    TMXObjectGroup* objGroup = map->getObjectGroup("objects");
    
    //加载玩家对象坐标
    
    ValueMap playerPointMap = objGroup->getObject("PlayerPoint");
    
    float playerX = playerPointMap.at("x").asFloat();
    float PlayerY = playerPointMap.at("y").asFloat();
    
    
    
    //设置玩家坐标
    mPlayer->setPosition(Point(playerX,PlayerY));
    
    
    //将玩家添加到地图
    map->addChild(mPlayer);
    
    
    //创建简单的玩家控制器
    SimpleMoveController* simpleMoveControll = SimpleMoveController::create();
    
    
    //设置速度
    simpleMoveControll->setiSpeed(1);
    
    this->addChild(simpleMoveControll);
    
    mPlayer->setController(simpleMoveControll);    

}