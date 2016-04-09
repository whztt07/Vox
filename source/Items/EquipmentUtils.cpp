// ******************************************************************************
// Filename:    EquipmentUtils.cpp
// Project:     Vox
// Author:      Steven Ball
//
// Purpose:
//   Utility functionality for equipment, mostly a way to associate equipment
//   enums with data like the friendly names and display strings.
//
// Revision History:
//   Initial Revision - 12/04/14
//
// Copyright (c) 2005-2016, Steven Ball
// ******************************************************************************

#include "Item.h"

string GetEquipmentTitleForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "Normal Pickaxe"; } break;
		case eEquipment_Torch:				{ return "Torch"; } break;
		case eEquipment_WoodenBow:			{ return "Wooden Bow"; } break;
		case eEquipment_IronSword:			{ return "Iron Sword"; } break;
		case eEquipment_IronShield:			{ return "Iron Shield"; } break;
	}

	return "";
}

string GetEquipmentDescriptionForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "Used for mining and digging the world."; } break;
		case eEquipment_Torch:				{ return "A torch to light up the darkness."; } break;
		case eEquipment_WoodenBow:			{ return "A wooden bow, made for shooting arrows."; } break;
		case eEquipment_IronSword:			{ return "A sturdy sword made of iron."; } break;
		case eEquipment_IronShield:			{ return "A shield of pure iron."; } break;
	}

	return "";
}

string GetEquipmentFilenameForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "media/gamedata/weapons/Pickaxe/Pickaxe.weapon"; } break;
		case eEquipment_Torch:				{ return "media/gamedata/weapons/Torch/Torch.weapon"; } break;
		case eEquipment_WoodenBow:			{ return "media/gamedata/weapons/WoodenBow/WoodenBow.weapon"; } break;
		case eEquipment_IronSword:			{ return "media/gamedata/weapons/IronSword/IronSword.weapon"; } break;
		case eEquipment_IronShield:			{ return "media/gamedata/weapons/IronShield/IronShield.weapon"; } break;
	}

	return "";
}

string GetEquipmentTextureForType(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return ""; } break;
		case eEquipment_NormalPickaxe:		{ return "media/textures/items/pickaxe.tga"; } break;
		case eEquipment_Torch:				{ return "media/textures/items/torch.tga"; } break;
		case eEquipment_WoodenBow:			{ return "media/textures/items/wooden_bow.tga"; } break;
		case eEquipment_IronSword:			{ return "media/textures/items/iron_sword.tga"; } break;
		case eEquipment_IronShield:			{ return "media/textures/items/iron_shield.tga"; } break;
	}

	return "";
}

InventoryType GetInventoryTypeForEquipment(eEquipment type)
{
	switch(type)
	{
		case eEquipment_None:				{ return InventoryType_Nothing; } break;
		case eEquipment_NormalPickaxe:		{ return InventoryType_Weapon_Pickaxe; } break;
		case eEquipment_Torch:				{ return InventoryType_Weapon_Torch; } break;
		case eEquipment_WoodenBow:			{ return InventoryType_Weapon_Bow; } break;
		case eEquipment_IronSword:			{ return InventoryType_Weapon_Sword; } break;
		case eEquipment_IronShield:			{ return InventoryType_Weapon_Shield; } break;
	}

	return InventoryType_Nothing;
}

EquipSlot GetEquipSlotForEquipment(eEquipment type)
{
	switch (type)
	{
		case eEquipment_None:				{ return EquipSlot_NoSlot; } break;
		case eEquipment_NormalPickaxe:		{ return EquipSlot_RightHand; } break;
		case eEquipment_Torch:				{ return EquipSlot_LeftHand; } break;
		case eEquipment_WoodenBow:			{ return EquipSlot_LeftHand; } break;
		case eEquipment_IronSword:			{ return EquipSlot_RightHand; } break;
		case eEquipment_IronShield:			{ return EquipSlot_LeftHand; } break;
	}

	return EquipSlot_NoSlot;
}

ItemQuality GetItemQualityForEquipment(eEquipment type)
{
	switch (type)
	{
		case eEquipment_None:				{ return ItemQuality_Common; } break;
		case eEquipment_NormalPickaxe:		{ return ItemQuality_Common; } break;
		case eEquipment_Torch:				{ return ItemQuality_Common; } break;
		case eEquipment_WoodenBow:			{ return ItemQuality_Common; } break;
		case eEquipment_IronSword:			{ return ItemQuality_Common; } break;
		case eEquipment_IronShield:			{ return ItemQuality_Common; } break;
	}

	return ItemQuality_Common;
}

void GetItemSidesForEquipment(eEquipment type, bool *left, bool *right)
{
	switch (type)
	{
		case eEquipment_None:				{ *left = false; *right = false; } break;
		case eEquipment_NormalPickaxe:		{ *left = false; *right = false; } break;
		case eEquipment_Torch:				{ *left = false; *right = false; } break;
		case eEquipment_WoodenBow:			{ *left = false; *right = false; } break;
		case eEquipment_IronSword:			{ *left = false; *right = false; } break;
		case eEquipment_IronShield:			{ *left = false; *right = false; } break;
	}
}