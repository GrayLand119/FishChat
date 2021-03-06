//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseEvent.h"

#import "NotifyFromEventDelegate.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface CMultiEvent : CBaseEvent <NotifyFromEventDelegate>
{
    NSMutableArray *m_arrEvent;
    MMTimer *m_oTimerCheckEvent;
    NSMutableDictionary *m_dicThreadEvent;
    NSOperationQueue *m_operationQueuEvent;
}

- (void).cxx_destruct;
- (id)GetLock;
- (id)FindEvent:(unsigned int)arg1;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (_Bool)IsEventRunning:(unsigned int)arg1;
- (unsigned int)IsEventTypeExist:(unsigned int)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (_Bool)SetEvent:(id)arg1 EventInfo:(id)arg2 Start:(_Bool)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5;
- (_Bool)StartEvent:(id)arg1 Ret:(unsigned int *)arg2 RetInfo:(id)arg3;
- (void)ClearStopEvent;
- (void)TimerCheckEvent;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

