//
// TimeServiceProxyFactory.h
//
// Package: Generated
// Module:  TimeServiceProxyFactory
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2006-2016, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef TimeServiceProxyFactory_INCLUDED
#define TimeServiceProxyFactory_INCLUDED


#include "Poco/RemotingNG/ProxyFactory.h"
#include "TimeServiceProxy.h"


namespace Services {


class TimeServiceProxyFactory: public Poco::RemotingNG::ProxyFactory
{
public:
	TimeServiceProxyFactory();
		/// Creates a TimeServiceProxyFactory.

	~TimeServiceProxyFactory();
		/// Destroys the TimeServiceProxyFactory.

	Poco::RemotingNG::Proxy* createProxy(const Poco::RemotingNG::Identifiable::ObjectId& oid) const;
		/// Creates and returns a new Proxy object.

};


} // namespace Services


#endif // TimeServiceProxyFactory_INCLUDED

