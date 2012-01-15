/*
 * Copyright (c) 2010-2012 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef FRAMEWORK_UI_DECLARATIONS_H
#define FRAMEWORK_UI_DECLARATIONS_H

#include <framework/global.h>

class UIManager;
class UIWidget;
class UILineEdit;
class UIFrameCounter;
class UILayout;
class UIBoxLayout;
class UIHorizontalLayout;
class UIVerticalLayout;
class UIGridLayout;
class UIAnchorLayout;

typedef std::shared_ptr<UIWidget> UIWidgetPtr;
typedef std::weak_ptr<UIWidget> UIWidgetWeakPtr;

typedef std::shared_ptr<UILineEdit> UILineEditPtr;
typedef std::shared_ptr<UIFrameCounter> UIFrameCounterPtr;
typedef std::shared_ptr<UILayout> UILayoutPtr;
typedef std::shared_ptr<UIBoxLayout> UIBoxLayoutPtr;
typedef std::shared_ptr<UIHorizontalLayout> UIHorizontalLayoutPtr;
typedef std::shared_ptr<UIVerticalLayout> UIVerticalLayoutPtr;
typedef std::shared_ptr<UIGridLayout> UIGridLayoutPtr;
typedef std::shared_ptr<UIAnchorLayout> UIAnchorLayoutPtr;

typedef std::deque<UIWidgetPtr> UIWidgetList;

#endif
