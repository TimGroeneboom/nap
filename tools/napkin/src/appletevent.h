/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once

#include <nap/event.h>

namespace napkin
{
	/**
	 * Applet event base class
	 */
	class AppletEvent : public nap::Event
	{
		RTTI_ENABLE(nap::Event)
	};


	/**
	 * Updates applet GUI scale using Qt window scaling factor.
	 */
	class SyncWindowRatioEvent : public AppletEvent
	{
		RTTI_ENABLE(AppletEvent)
	public:
		SyncWindowRatioEvent(float ratio) : mRatio(ratio) { }
		float mRatio = 1.0f;
	};

	using AppletEventPtr = std::unique_ptr<AppletEvent>;
}
