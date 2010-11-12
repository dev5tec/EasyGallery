//
//  EasyGalleryViewController.h
//  EasyGallery
//
//  Created by Hiroshi Hashiguchi on 10/09/28.
//  Copyright 2010 . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FTGalleryView.h"

@interface EasyGalleryViewController : UIViewController <FTGalleryViewDelegate> {

	NSMutableArray* imageFiles_;
	
	FTGalleryView* galleryView;
}

@property (nonatomic, retain) NSMutableArray* imageFiles;
@property (nonatomic, retain) IBOutlet FTGalleryView* galleryView;
- (IBAction)playSlideShow:(id)sender;
- (IBAction)changeMode:(id)sender;
- (IBAction)movePage:(id)sender;
- (IBAction)refresh:(id)sender;
- (IBAction)deletePage:(id)sender;
- (IBAction)movePrevious:(id)sender;
- (IBAction)moveNext:(id)sender;
@end

