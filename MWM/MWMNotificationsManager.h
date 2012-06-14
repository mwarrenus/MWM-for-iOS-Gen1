/*****************************************************************************
 *  Copyright (c) 2011 Meta Watch Ltd.                                       *
 *  www.MetaWatch.org                                                        *
 *                                                                           *
 =============================================================================
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the "License");          *
 *  you may not use this file except in compliance with the License.         *
 *  You may obtain a copy of the License at                                  *
 *                                                                           *
 *    http://www.apache.org/licenses/LICENSE-2.0                             *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an "AS IS" BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 *****************************************************************************/

//
//  MWMNotificationsManager.h
//  MWM
//
//  Created by Siqi Hao on 6/6/12.
//  Copyright (c) 2012 Meta Watch. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <EventKit/EventKit.h>

@interface MWMNotificationsManager : NSObject

+ (MWMNotificationsManager *) sharedManager;

- (void) setNotificationsEnabled:(BOOL)enable;

- (void) setCalendarAlertEnabled:(BOOL)enable;
- (void) enableTimeZoneSupport:(BOOL)enable;

- (void) update:(NSInteger)timestamp;



@end
