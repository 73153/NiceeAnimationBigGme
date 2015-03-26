//
//  THSwitchButton.h
//  PackageApp
//
//  Created by pureye4u BX on 12. 7. 10..
//  Copyright CJ Educations 2012. All rights reserved.
//

#ifndef PackageApp_THSwitchButton_h
#define PackageApp_THSwitchButton_h

#include "THSwitchButtonDelegate.h"

class THSwitchButton : public cocos2d::CCLayerColor
{
public:
	THSwitchButton();
	~THSwitchButton();
	virtual bool init(const char *pszSwitchImage, const char *pszThumbImage = NULL, int iTouchPriority = 0);
	virtual bool getValue();
	virtual void setValue(bool isOn, bool withAnimation = false);
	virtual void setDelegate(THSwitchButtonDelegate *delegate);
	virtual void setToOn();
	virtual void setToOff();
	
	virtual void onExit();
	
protected:
	bool m_isScrolling;
	bool m_returnToMin;
	bool m_returnToMax;
	float m_direction;
	float m_limitMinX;
	float m_limitMaxX;
	bool m_isOn;
	cocos2d::CCPoint m_scrollDistance;
	cocos2d::CCRect m_hitArea;
	cocos2d::CCSprite *m_thumb;
	THSwitchButtonDelegate *m_delegate;
	
	virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
};


#endif
