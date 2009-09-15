/*

The MIT License

Copyright (c) 2008-2009 ClickToFlash Developers

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

*/

#import <Cocoa/Cocoa.h>

@class CTFWhitelistWindowController;
@class CTFAboutBoxWindowController;

extern NSString* kCTFLoadAllFlashViews;
extern NSString* kCTFLoadFlashViewsForWindow;
extern NSString* kCTFLoadInvisibleFlashViewsForWindow;

extern NSInteger maxInvisibleDimension;


@interface CTFMenubarMenuController : NSObject {
	IBOutlet NSMenu* menu;
    CTFWhitelistWindowController *_whitelistWindowController;
	CTFAboutBoxWindowController * _aboutBoxWindowController;
	NSHashTable *_views;
}

+ (CTFMenubarMenuController*) sharedController;

- (void) loadFlashForWindow: (NSWindow*) window;

- (IBAction) loadAllFlash: (id) sender;
- (IBAction) loadKeyWindowFlash: (id) sender;
- (IBAction) loadKeyWindowInvisibleFlash: (id) sender;
- (IBAction) showSettingsWindow: (id) sender;
- (IBAction) showAboutBox: (id) sender;

- (BOOL) multipleFlashViewsExistForWindow: (NSWindow*) window;

- (void) registerView: (NSView*) view;
- (void) unregisterView: (NSView*) view;

@end
