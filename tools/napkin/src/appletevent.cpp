/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "appletevent.h"

RTTI_DEFINE_BASE(napkin::AppletEvent)

RTTI_BEGIN_CLASS_NO_DEFAULT_CONSTRUCTOR(napkin::SyncWindowRatioEvent)
	RTTI_CONSTRUCTOR(float)
RTTI_END_CLASS
