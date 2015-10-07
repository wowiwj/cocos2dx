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
    return true;
    
}

//添加角色
void TollgateScene::addPlayer(TMXTiledMap* map)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    
    //创建精灵
    Sprite* playerSprite = Sprite::create("player.png");
    
    
    //讲精灵绑定到对象
    Player* mPlayer = Player::create();
    mPlayer->BindSprite(playerSprite);
    mPlayer->run();
    
    
    //设置玩家坐标
    mPlayer->setPosition(Point(100,visibleSize.height * 0.5f));
    
    //将玩家添加到地图
    map->addChild(mPlayer);

}