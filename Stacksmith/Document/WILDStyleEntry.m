//
//  UKPropStyleEntry.m
//  Stacksmith
//
//  Created by Uli Kusterer on 25.04.10.
//  Copyright 2010 The Void Software. All rights reserved.
//

#import "WILDStyleEntry.h"
#import "UKHelperMacros.h"



@implementation WILDStyleEntry

-(id)	initWithFontName: (NSString*)theName fontSize: (NSInteger)theSize
			styles: (NSArray*)theStyles
{
	if(( self = [super init] ))
	{
		ASSIGN(mFontName,theName);
		mFontSize = theSize;
		ASSIGN(mFontStyles,theStyles);
	}
	
	return self;
}

-(void)	dealloc
{
	DESTROY_DEALLOC(mFontName);
	DESTROY_DEALLOC(mFontStyles);
	
	[super dealloc];
}

-(NSString*)	fontName
{
	return mFontName;
}


-(void)			setFontName: (NSString*)fName
{
	ASSIGN(mFontName,fName);
}


-(NSInteger)	fontSize
{
	return mFontSize;
}


-(NSArray*)		styles
{
	return mFontStyles;
}

-(NSString*)	description
{
	return [NSString stringWithFormat: @"%@ { font = %@, size = %d, style = %@ }",
						[self class], mFontName, mFontSize, [mFontStyles componentsJoinedByString: @", "]];
}

@end



