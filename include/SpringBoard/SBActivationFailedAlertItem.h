/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "SBUnknownSuperclass.h"


@interface SBActivationFailedAlertItem : SBUnknownSuperclass <UIAlertViewDelegate> {
	BOOL _showRetryButton;	// 15 = 0xf
	BOOL _showSupportNumber;	// 16 = 0x10
}
- (id)initWithFailureCount:(int)failureCount;	// 0x12a015
- (void)performUnlockAction;	// 0x12a3ad
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x12a379
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x12a0c9
- (id)lockLabel;	// 0x12a071
@end
