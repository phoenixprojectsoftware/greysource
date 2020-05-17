/*
	TRIGGER_HURT_REMOTE written by Sabian Roberts.
	Copyright © 2020 The Phoenix Project
	This software follows the Half Life 1 SDK LICENSE.
*/
/*

	Copyright (c) 1996-2001, Valve LLC. All rights reserved.

	This product contains software technology licensed from Id
	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc.
	All Rights Reserved.

    Use, distribution, and modification of this source code and/or resulting
    object code is restricted to non-commercial enhancements to products from
    Valve LLC.  All other use, distribution, or modification is prohibited
    without written permission from Valve LLC.

*/

/*

====hurtremote.cpp======================================
Purpose: Creates the trigger_hurt_remote entity. This entity hurts whatever's in its target field, rather than whatever's inside the brush.
========================================================
*/

#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CTriggerHurtRemote : public CBaseEntity
{
public:
	void Spawn();
	void KeyValue(KeyValueData* pkvd);
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value);
};