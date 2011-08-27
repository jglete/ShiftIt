/*
 ShiftIt: Resize windows with Hotkeys
 Copyright (C) 2010  Aravind
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */


#import <Cocoa/Cocoa.h>
#import <ShortcutRecorder/ShortcutRecorder.h>

@class GTMLogger;

@interface PreferencesWindowController : NSWindowController {
 @private
	NSString *selectedTabIdentifier_;
    GTMLogger *logger_;
	
	IBOutlet NSButton * openAtLogin_;
    IBOutlet NSTabView * tabView_;
	IBOutlet NSTextField * versionLabel_;
}

@property BOOL shouldStartAtLogin;

-(void)updateRecorderCombos;
-(IBAction)showPreferences:(id)sender;
-(IBAction)revertDefaults:(id)sender;

@end
