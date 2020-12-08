//
// BundleActivator.cpp
//
// Copyright (c) 2018, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// SPDX-License-Identifier: GPL-3.0-only
//

#include "Poco/OSP/BundleActivator.h"
#include "Poco/OSP/BundleContext.h"
#include "Poco/ClassLibrary.h"


namespace LTEBundle {


class BundleActivator: public Poco::OSP::BundleActivator
{
public:
	void start(Poco::OSP::BundleContext::Ptr pContext)
	{
		pContext->logger().information("Bundle libqmi Start ");
		std::system("/bin/sh /usr/sbin/libqmi.sh start");
	}

	void stop(Poco::OSP::BundleContext::Ptr pContext)
	{
		pContext->logger().information("Bundle Libqmi Stop ");
	}
};


} // namespace HelloBundle


POCO_BEGIN_MANIFEST(Poco::OSP::BundleActivator)
	POCO_EXPORT_CLASS(LTEBundle::BundleActivator)
POCO_END_MANIFEST
