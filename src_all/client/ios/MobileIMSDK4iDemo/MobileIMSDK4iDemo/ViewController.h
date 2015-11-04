//  ----------------------------------------------------------------------
//  Copyright (C) 2015 Jack Jiang The MobileIMSDK Project.
//  All rights reserved.
//  Project URL:  https://github.com/JackJiang2011/MobileIMSDK
//
//  openmob.net PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
//
//  You can contact author with jack.jiang@openmob.net or jb2011@163.com.
//  ----------------------------------------------------------------------
//
//  ViewController.h
//  RainbowCore4i
//
//  Created by JackJiang on 14/10/21.
//  Copyright (c) 2014年 cngeeker.com. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

// 登陆名
@property (weak, nonatomic) IBOutlet UITextField *loginName;
// 登陆密码
@property (weak, nonatomic) IBOutlet UITextField *loginPsw;

// 服务端分配给我的id(登陆成功后)
@property (weak, nonatomic) IBOutlet UILabel *myId;
// 要发送消息的对方id
@property (weak, nonatomic) IBOutlet UITextField *friendId;

// 服务器地址
@property (weak, nonatomic) IBOutlet UITextField *addrField;
// 服务器端口
@property (weak, nonatomic) IBOutlet UITextField *portField;
// 要发送的消息
@property (weak, nonatomic) IBOutlet UITextField *messageField;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

/*!
 *  @Author Jack Jiang, 14-11-08 15:11:43
 *
 *  登陆。
 *
 *  @param sender
 */
- (IBAction)signIn:(id)sender;
/*!
 *  @Author Jack Jiang, 14-11-08 15:11:53
 *
 *  退出登陆。
 *
 *  @param sender
 */
- (IBAction)signOut:(id)sender;

/*!
 *  @Author Jack Jiang, 14-11-08 15:11:07
 *
 *  发送消息。
 *
 *  @param sender
 */
- (IBAction)send:(id)sender;

- (IBAction)TextField_DidEndOnExit:(id)sender;

/*!
 *  @Author Jack Jiang, 14-11-08 15:11:26
 *
 *  显示登陆成功后的user_id.
 *
 *  @param myid
 */
- (void) setMyid:(int)myid;

/*!
 *  @Author Jack Jiang, 14-11-08 15:11:46
 *
 *  点击背影影藏键盘。
 *
 *  @param sender
 */
- (IBAction)clickBgToHideKeyboard:(id)sender;

- (void) showIMInfo_black:(NSString*)txt;
- (void) showIMInfo_blue:(NSString*)txt;
- (void) showIMInfo_brightred:(NSString*)txt;
- (void) showIMInfo_red:(NSString*)txt;
- (void) showIMInfo_green:(NSString*)txt;

//----------------------------------------- for debug START
//@property (weak, nonatomic) IBOutlet UIImageView *iviewLocalNetwork;
//@property (weak, nonatomic) IBOutlet UIImageView *iviewIsLogin;
@property (weak, nonatomic) IBOutlet UIImageView *iviewOnline;

@property (weak, nonatomic) IBOutlet UIImageView *iviewAutoRelogin;
@property (weak, nonatomic) IBOutlet UIImageView *iviewKeepAlive;

@property (weak, nonatomic) IBOutlet UIImageView *iviewQoSSend;
@property (weak, nonatomic) IBOutlet UIImageView *iviewQoSReceive;
//----------------------------------------- for debug END

@end

