/* Copyright � 2003, Leaky Puppy Software, Net Monkey Inc.

This file is part of Fob.

Fob is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

Fob is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Fob; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

//  prefs.h
//  Fob
//
//  Created by Thomas Finley on Fri Jan 10 2003.
//  Copyright (c) 2003 Leaky Puppy Software, for Net Monkey Inc. All rights reserved.
//  This program is distributed under the terms of the GNU General Public License.

#include <Cocoa/Cocoa.h>

extern NSString *FobPresetAlarmsKey;
extern NSString *FobActiveAlarmsKey;
extern NSString *FobPausedAlarmsKey;
extern NSString *FobConfirmDeleteKey;
extern NSString *FobKeepWindowOpenKey;
extern NSString *FobFeedbackLevelKey;
extern NSString *FobBounceLevelKey;
extern NSString *FobDisplayedAlarmKey;
extern NSString *FobStatusItemVisibleKey;
extern NSString *FobStatusItemTitleVisibleKey;
extern NSString *FobScaleDockTimeKey;
extern NSString *FobDisableCommandQKey;
extern NSString *FobDockMenuSubmenusKey;
extern NSString *FobClearDueOnQuitKey;

typedef enum _FeedbackLevel {
    flash = 0, beep, alwaysBeep
} FeedbackLevel;

typedef enum _BounceLevel {
    dont = 0, once, always
} BounceLevel;

NSMutableArray * correspondingDataArray(NSArray * array);
NSMutableArray * correspondingObjectArray(NSArray * array);
NSMutableDictionary *factoryDefaults();
void setFactoryDefaults();
