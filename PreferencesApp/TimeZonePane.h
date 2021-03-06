//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSEditingPane.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, UISearchBar, UITableView;

@interface TimeZonePane : PSEditingPane <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_completionTable;
    NSArray *_cities;
    UISearchBar *_searchBar;
}

+ (void)setTimeZone:(id)arg1;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)textValueChanged:(id)arg1;
- (void)layoutSubviews;
- (void)updateTableInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

