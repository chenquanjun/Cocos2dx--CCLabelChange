#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "CCLabelChange.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
//    do {//labelaltas数字
//        CCLabelAtlas *label = CCLabelAtlas::create("", "num.png", 30, 29, '0');
//        
//        CCLabelChange *pChange = CCLabelChange::create(5, 20, 10000);
//        
//        label->runAction(pChange);
//        label->setPosition(ccp(winSize.width * 0.15, winSize.height * 0.5f));
//        
//        this->addChild(label);
//        
//    } while (0);
//    
//    do {
//
//    } while (0);
//    
//    do {//数字增加
//        
//        CCLabelTTF *label = CCLabelTTF::create("", "Arial", 30);
//        
//        float duration = 5.0f;
//        int fromNum = 20; //开始数字
//        int toNum = 1000; //结束数字
//        
//        CCLabelChange *pChange = CCLabelChange::create(duration, fromNum, toNum);
//        
//        label->runAction(pChange);
//        label->setPosition(ccp(winSize.width * 0.3f, winSize.height * 0.5f));
//        
//        this->addChild(label);
//        
//    } while (0);
//    
//    do {//数字减少
//        
//        CCLabelTTF *label = CCLabelTTF::create("", "Arial", 30);
//        
//        CCLabelChange *pChange = CCLabelChange::create(5, 1000, 20);
//        
//        label->runAction(pChange);
//        label->setPosition(ccp(winSize.width * 0.7f, winSize.height * 0.5f));
//        
//        this->addChild(label);
//        
//    } while (0);
//    
//    
//    do {//与tintTo同时使用（纯粹无聊）
//        
//        CCLabelTTF *label = CCLabelTTF::create("", "Arial", 30);
//
//        CCLabelChange *pChange = CCLabelChange::create(5, 20, 1000);
//        CCTintTo *pTint = CCTintTo::create(5, 255, 0, 0);
//        
//        CCSpawn *pSpawn = CCSpawn::create(pChange,
//                                         pTint,
//                                         NULL
//                                         );
//        
//    
//        
//        
//        label->setColor(ccc3(0, 255, 255));
//        label->runAction(pSpawn);
//        label->setPosition(ccp(winSize.width * 0.5f, winSize.height * 0.5f));
//        
//        this->addChild(label);
//    } while (0);
    
    
    do {//
        CCLabelFadeIn *pFade4 = CCLabelFadeIn::create(10.0f, "最近使用cocos2d-x写一款跨平台的游戏，有这样一个功能需求，手机屏幕的某块区域可上下滚动，滚动区域的内容又是可点击的按钮。首先想到在CCScrollView里面添加CCMenu。恰好这个CCMenu是一张张图片，即CCItemImage，当图片布满整个滚动区域的时候，你会发现CCScrollView滑动不了了。原因很简单，是CCMenu的触摸事件吃掉了CCScrollView的触摸事件，因为CCMenu的默认触摸优先级是最高的。于是就有两套解决方案，一是改变CCScrollView的优先级，使之比CCMenu还高，CCMenu的默认优先级是-128，CCScrollView的默认优先级是0，cocos2d-x中数值越低，优先级越高。二是改变CCMenu的优先级，使之比CCScrollView低就行了。接下来如何改还是个问题，我们知道CCMenu和CCScrollView都是继承CCLayer的，CCLayer有一个虚方法registerWithTouchDispatcher，在此方法中用如下代码CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority, true);控制此Layer的优先级。而CCMenu和CCScrollView都复写了此方法。我们只需要在复写的方法中修改优先级就可以了最近使用cocos2d-x写一款跨平台的游戏，有这样一个功能需求，手机屏幕的某块区域可上下滚动，滚动区域的内容又是可点击的按钮。首先想到在CCScrollView里面添加CCMenu。恰好这个CCMenu是一张张图片，即CCItemImage，当图片布满整个滚动区域的时候，你会发现CCScrollView滑动不了了。原因很简单，是CCMenu的触摸事件吃掉了CCScrollView的触摸事件，因为CCMenu的默认触摸优先级是最高的。于是就有两套解决方案，一是改变CCScrollView的优先级，使之比CCMenu还高，CCMenu的默认优先级是-128，CCScrollView的默认优先级是0，cocos2d-x中数值越低，优先级越高。二是改变CCMenu的优先级，使之比CCScrollView低就行了。接下来如何改还是个问题，我们知道CCMenu和CCScrollView都是继承CCLayer的，CCLayer有一个虚方法registerWithTouchDispatcher，在此方法中用如下代码CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority, true);控制此Layer的优先级。而CCMenu和CCScrollView都复写了此方法。我们只需要在复写的方法中修改优先级就可以了。");
        CCLayer *labelLayer = CCLayer::create();
        labelLayer->setContentSize(CCSizeMake(604, 300));
        this->addChild(labelLayer);
//        labelLayer->setScale(0.5f);
        
//        CCLabelFadeIn *pFade4 = CCLabelFadeIn::create(20, "在此方法中用如下代码CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority, true);");
        
//        CCLabelFadeIn *pFade4 = CCLabelFadeIn::create(10.0f, "");
        
        CCLabelTTF *label = CCLabelTTF::create("最近使用cocos2d-x写一款跨平台的游戏，有这样一个功能需求，手机屏幕的某块区域可上下滚动，滚动区域的内容又是可点击的按钮。首先想到在CCScrollView里面添加CCMenu。恰好这个CCMenu是一张张图片，即CCItemImage，当图片布满整个滚动区域的时候，你会发现CCScrollView滑动不了了。原因很简单，是CCMenu的触摸事件吃掉了CCScrollView的触摸事件，因为CCMenu的默认触摸优先级是最高的。于是就有两套解决方案，一是改变CCScrollView的优先级，使之比CCMenu还高，CCMenu的默认优先级是-128，CCScrollView的默认优先级是0，cocos2d-x中数值越低，优先级越高。二是改变CCMenu的优先级，使之比CCScrollView低就行了。接下来如何改还是个问题，我们知道CCMenu和CCScrollView都是继承CCLayer的，CCLayer有一个虚方法registerWithTouchDispatcher，在此方法中用如下代码CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority, true);控制此Layer的优先级。而CCMenu和CCScrollView都复写了此方法。我们只需要在复写的方法中修改优先级就可以了最近使用cocos2d-x写一款跨平台的游戏，有这样一个功能需求，手机屏幕的某块区域可上下滚动，滚动区域的内容又是可点击的按钮。首先想到在CCScrollView里面添加CCMenu。恰好这个CCMenu是一张张图片，即CCItemImage，当图片布满整个滚动区域的时候，你会发现CCScrollView滑动不了了。原因很简单，是CCMenu的触摸事件吃掉了CCScrollView的触摸事件，因为CCMenu的默认触摸优先级是最高的。于是就有两套解决方案，一是改变CCScrollView的优先级，使之比CCMenu还高，CCMenu的默认优先级是-128，CCScrollView的默认优先级是0，cocos2d-x中数值越低，优先级越高。二是改变CCMenu的优先级，使之比CCScrollView低就行了。接下来如何改还是个问题，我们知道CCMenu和CCScrollView都是继承CCLayer的，CCLayer有一个虚方法registerWithTouchDispatcher，在此方法中用如下代码CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority, true);控制此Layer的优先级。而CCMenu和CCScrollView都复写了此方法。我们只需要在复写的方法中修改优先级就可以了", "Arial", 25, CCSizeMake(604, 1200), kCCTextAlignmentLeft, kCCVerticalTextAlignmentBottom);
        label->setAnchorPoint(ccp(0.5, 0));
        
        label->runAction(pFade4);
        
        label->setTextureRect(CCRectMake(0, 0, 604, 300));
        
        labelLayer->setPosition(ccp(winSize.width * 0.5f, winSize.height * 0.5f));
        
        labelLayer->addChild(label);
        
    } while (0);

    
    return true;
}


