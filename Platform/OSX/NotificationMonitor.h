// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// RealCash is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// RealCash is distributed in the hope that it will be useful. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with RealCash.  If not, see <http://www.gnu.org/licenses/>.

#import <Foundation/NSObject.h>
#import <Foundation/NSNotification.h>

namespace WalletGui {
  class INotificationMonitorObserver;
}

@interface NotificationMonitor: NSObject {
  WalletGui::INotificationMonitorObserver* m_observer;
}
-(id) init: (WalletGui::INotificationMonitorObserver*) observer;
-(void) receive: (NSNotification*) notification;
@end
