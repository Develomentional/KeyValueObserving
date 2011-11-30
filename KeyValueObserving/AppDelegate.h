//
//  AppDelegate.h
//  KeyValueObserving
//
//  Created by Tobias Preuss on 30.11.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject<NSApplicationDelegate> {
	
	NSString*	m_text;
	NSButton*	m_button;
}

@property (assign) IBOutlet NSWindow* window;
@property (assign, readwrite) NSString* text;
@property (assign, readwrite) IBOutlet NSButton* button;

@end
