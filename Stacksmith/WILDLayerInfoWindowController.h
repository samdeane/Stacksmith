//
//  WILDLayerInfoWindowController.h
//  Stacksmith
//
//  Created by Uli Kusterer on 18.03.11.
//  Copyright 2011 Uli Kusterer. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@class WILDCardView;
@class WILDLayer;


@interface WILDLayerInfoWindowController : NSWindowController
{
    WILDCardView	*	mCardView;
	WILDLayer		*	mLayer;
	
	NSTextField		*	mNameField;
	NSTextField		*	mNumberField;
	NSTextField		*	mIDField;
	NSTextField		*	mFieldCountField;
	NSTextField		*	mButtonCountField;
	NSButton		*	mEditScriptButton;
	NSButton		*	mDontSearchSwitch;
	NSButton		*	mCantDeleteSwitch;
}

@property (retain) WILDCardView				*	cardView;
@property (retain) WILDLayer				*	layer;

@property (retain) IBOutlet	NSButton		*	editScriptButton;
@property (retain) IBOutlet	NSButton		*	dontSearchSwitch;
@property (retain) IBOutlet	NSButton		*	cantDeleteSwitch;
@property (retain) IBOutlet	NSTextField		*	nameField;
@property (retain) IBOutlet	NSTextField		*	numberField;
@property (retain) IBOutlet	NSTextField		*	IDField;
@property (retain) IBOutlet	NSTextField		*	fieldCountField;
@property (retain) IBOutlet	NSTextField		*	buttonCountField;

-(id)		initWithLayer: (WILDLayer*)inCard ofCardView: (WILDCardView*)owningView;

-(IBAction)	doOKButton: (id)sender;
-(IBAction)	doCancelButton: (id)sender;
-(IBAction)	doEditScriptButton: (id)sender;

@end
