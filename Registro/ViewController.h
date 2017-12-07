//
//  ViewController.h
//  Registro
//
//  Created by Mario Rueda on 12/5/17.
//  Copyright © 2017 Mario Rueda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebServices.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtUser;
@property (weak, nonatomic) IBOutlet UITextField *txtEmail;
@property (weak, nonatomic) IBOutlet UITextField *txtPhone;
@property (weak, nonatomic) IBOutlet UILabel *lblMessage;


@end

