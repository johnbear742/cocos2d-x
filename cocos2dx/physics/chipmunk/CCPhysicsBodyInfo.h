/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "../CCPhysicsSetting.h"
#if (CC_PHYSICS_ENGINE == CC_PHYSICS_CHIPMUNK)

#ifndef __CCPHYSICS_BODY_INFO_H__
#define __CCPHYSICS_BODY_INFO_H__
#include "chipmunk.h"
#include "platform/CCPlatformMacros.h"
#include "cocoa/CCObject.h"

NS_CC_BEGIN

class PhysicsBodyInfo : public Clonable
{
public:
    cpBody* body;
    
private:
    PhysicsBodyInfo();
    ~PhysicsBodyInfo();
    
    Clonable* clone() const override;
    
    friend class PhysicsBody;
};

NS_CC_END
#endif // __CCPHYSICS_BODY_INFO_H__

#endif // CC_PHYSICS_ENGINE == CC_PHYSICS_CHIPMUNK
