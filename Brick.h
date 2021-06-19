#ifndef __BRICK_H__
#define __BRICK_H__

#include "cocos2d.h"
USING_NS_CC;
using namespace cocos2d;

class Brick : public Sprite
{
public:
	Brick(int nowType);
	~Brick();
	static Brick* create(Vec2 position, int nowType);
	virtual bool init(Vec2 position);
	void Blast();

	// get
	Rect getRect() { return m_rect; };
	int getType() { return type;  }

private:
	Sprite* m_sprite;  // 砖块精灵
	Rect m_rect;       // 包围框
	int type; // 类型：0砖块，2白石块，6海，10守护，12守护受伤
};

#endif