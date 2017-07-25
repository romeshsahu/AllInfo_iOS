//
//  ModulViewController.h
//  All Info
//
//  Created by iPhones on 4/23/16.
//  Copyright © 2016 Parkhya solutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "IntrestCatViewController.h"


@interface ModulViewController : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate>
- (IBAction)ActionONBack:(id)sender;

- (IBAction)btn_Share:(id)sender;

- (IBAction)actiononserch:(id)sender;

@property (weak, nonatomic) IBOutlet UICollectionView *HomeCollectionView;

- (IBAction)ActionOnmenuBtn:(id)sender;


@property (weak, nonatomic) IBOutlet UITextField *searchFiled;
@property (strong, nonatomic) IBOutlet UIView *view_PopUp;
- (IBAction)btn_CloseView:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *tf_Phone;
@property (strong, nonatomic) IBOutlet UITextField *tf_Name;
@property (strong, nonatomic) IBOutlet UITextField *tf_Email;
@property (strong, nonatomic) IBOutlet UIButton *btn_TermsConditions;
- (IBAction)btn_TermsConditions:(id)sender;

- (IBAction)btn_Submit:(id)sender;



@end
