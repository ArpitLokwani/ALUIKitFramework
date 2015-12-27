//
//  ViewController.m
//  Elemetdemo
//
//  Created by Arpit Lokwani on 12/27/15.
//  Copyright © 2015 Arpit Lokwani. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Like this you can use for other UIElements like scrollView, Label,Textfield,TextView Etc...
    
    UIButton *demo = [ElementSkin button:CGRectMake(20, 100, 100, 50) title:@"arpit"];
    demo.backgroundColor = [UIColor redColor];
    [self.view addSubview:demo];
    
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
