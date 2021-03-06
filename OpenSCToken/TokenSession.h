/*
 * Copyright (C) 2017 Frank Morgner <frankmorgner@gmail.com>
 *
 * This file is part of OpenSCToken.
 *
 * This library is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * OpenSCToken is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * OpenSCToken.  If not, see <http://www.gnu.org/licenses/>.
 */
NS_ASSUME_NONNULL_BEGIN


@interface OpenSCAuthOperation : TKTokenSmartCardPINAuthOperation

- (instancetype)initWithSession:(OpenSCTokenSession *)session authID:(NSData *)authID;
@property (readonly) OpenSCTokenSession *session;
@property (readonly) NSData *authID;

@end

@interface OpenSCPINPadAuthOperation : TKTokenAuthOperation

- (instancetype)initWithSession:(OpenSCTokenSession *)session authID:(NSData *)authID;
@property (readonly) OpenSCTokenSession *session;
@property (readonly) NSData *authID;

@end


NS_ASSUME_NONNULL_END
