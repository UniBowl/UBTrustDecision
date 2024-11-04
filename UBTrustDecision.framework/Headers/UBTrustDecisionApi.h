//
//  UBTrustDecisionApi.h
//  UBTrustDecision
//
//  Created by virusboo on 2024/11/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UBTrustDecisionApi : NSObject

+ (void)getBlackBox:(void(^)(NSString *blackBox))completion;

@end

NS_ASSUME_NONNULL_END
