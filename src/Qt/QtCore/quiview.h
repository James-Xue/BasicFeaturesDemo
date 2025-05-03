// Copyright (C) 2016 The Qt Company Ltd.


#import <UIKit/UIKit.h>

#include <qhash.h>
#include <qstring.h>

#include <qpa/qwindowsysteminterface.h>

QT_BEGIN_NAMESPACE

class QIOSWindow;

QT_END_NAMESPACE

@class QIOSViewController;

@interface QUIView : UIView
- (instancetype)initWithQIOSWindow:(QT_PREPEND_NAMESPACE(QIOSWindow) *)window;
- (void)sendUpdatedExposeEvent;
- (BOOL)isActiveWindow;
- (bool)handlePresses:(NSSet<UIPress *> *)presses eventType:(QEvent::Type)type;
@property (nonatomic, assign) QT_PREPEND_NAMESPACE(QIOSWindow) *platformWindow;
@end

@interface QUIView (Accessibility)
- (void)clearAccessibleCache;
@end

@interface UIView (QtHelpers)
- (QWindow *)qwindow;
- (UIViewController *)viewController;
- (QIOSViewController*)qtViewController;
@end

#if QT_CONFIG(metal)
@interface QUIMetalView : QUIView
@end
#endif
