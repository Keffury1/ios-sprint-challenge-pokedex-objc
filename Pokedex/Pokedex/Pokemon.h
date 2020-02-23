//
//  Pokemon.h
//  Pokedex
//
//  Created by Bobby Keffury on 2/23/20.
//  Copyright © 2020 Bobby Keffury. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Pokemon)
@interface Pokemon : NSObject

//MARK: - Initialization

- (instancetype)initWithName:(NSString *)name url:(NSString *)url;

//MARK: - Properties

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *url;

@end

NS_ASSUME_NONNULL_END
