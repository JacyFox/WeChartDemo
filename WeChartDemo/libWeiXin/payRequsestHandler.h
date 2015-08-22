

#import <Foundation/Foundation.h>
#import "WXUtil.h"
#import "ApiXml.h"
/*
 // 签名实例
 // 更新时间：2015年3月3日
 // 负责人：李启波（marcyli）
 // 该Demo用于ios sdk 1.4
 
 //微信支付服务器签名支付请求请求类
 //============================================================================
 //api说明：
 //初始化商户参数，默认给一些参数赋值，如cmdno,date等。
 -(BOOL) init:(NSString *)app_id (NSString *)mch_id;
 
 //设置商户API密钥
 -(void) setKey:(NSString *)key;
 
 //生成签名
 -(NSString*) createMd5Sign:(NSMutableDictionary*)dict;
 
 //获取XML格式的数据
 -(NSString *) genPackage:(NSMutableDictionary*)packageParams;
 
 //提交预支付交易，获取预支付交易会话标识
 -(NSString *) sendPrepay:(NSMutableDictionary *);
 
 //签名实例测试
 - ( NSMutableDictionary *)sendPay_demo;
 
 //获取debug信息日志
 -(NSString *) getDebugifo;
 
 //获取最后返回的错误代码
 -(long) getLasterrCode;
 //============================================================================
 */

// 账号帐户资料
//更改商户把相关参数后可测试

//#define APP_ID          @"wx3fc45e364fbd6550"               //APPID
//#define APP_SECRET      @"63528205cbc2a9755f705cb2aafa2503" //appsecret
////商户号，填写商户对应参数
//#define MCH_ID          @"1249338801"
////商户API密钥，填写相应参数
//#define PARTNER_ID      @"5hG6G5Psndc78ln5NlldUr8H5GBvH0z4"
////支付结果回调页面
//#define NOTIFY_URL      @"http://123.57.136.95:4536/ResultNotifyPage.aspx"
////获取服务器端支付数据地址（商户自定义）
////#define SP_URL          @"http://123.57.136.95:4536/NativeNotifyPage.aspx"
//#define SP_URL          @"http://wxpay.weixin.qq.com/pub_v2/app/app_pay.php"


#define APP_ID          @"wx368442de910c1812"               //APPID
#define APP_SECRET      @"63528205cbc2a9755f705cb2aafa2503" //appsecret
//商户号，填写商户对应参数
#define MCH_ID          @"1260103201"
//商户API密钥，填写相应参数
#define PARTNER_ID      @"8h7g6f5e4d3c2b1aa1b2c3d4e5f6g7h8"
//支付结果回调页面
#define NOTIFY_URL      @"http://www.aliyueba.com:8080/ci/index.php/api/wxnotify/notify"
//获取服务器端支付数据地址（商户自定义）
//#define SP_URL          @"http://123.57.136.95:4536/NativeNotifyPage.aspx"
#define SP_URL          @"http://wxpay.weixin.qq.com/pub_v2/app/app_pay.php"

@interface payRequsestHandler : NSObject{
	//预支付网关url地址
    NSString *payUrl;

    //lash_errcode;
    long     last_errcode;
	//debug信息
    NSMutableString *debugInfo;
    NSString *appid,*mchid,*spkey;
    NSString *_price;
    NSString *_OrderNo;
}
//初始化函数
-(BOOL) init:(NSString *)app_id mch_id:(NSString *)mch_id price:(NSString *)price orderNo:(NSString *)orderNo;
-(NSString *) getDebugifo;
-(long) getLasterrCode;
//设置商户密钥
-(void) setKey:(NSString *)key;
- (void)setPrice:(NSString *)price;
//创建package签名
-(NSString*) createMd5Sign:(NSMutableDictionary*)dict;
//获取package带参数的签名包
-(NSString *)genPackage:(NSMutableDictionary*)packageParams;
//提交预支付
-(NSString *)sendPrepay:(NSMutableDictionary *)prePayParams;
//签名实例测试
- ( NSMutableDictionary *)sendPay_demo;

@end