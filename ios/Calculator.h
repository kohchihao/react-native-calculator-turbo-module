#import <Foundation/Foundation.h>

#ifdef RCT_NEW_ARCH_ENABLED

#import <RNCalculatorSpec/RNCalculatorSpec.h>
@interface Calculator: NSObject <NativeCalculatorSpec>

#else

#import <React/RCTBridgeModule.h>
@interface Calculator : NSObject <RCTBridgeModule>

#endif

@end