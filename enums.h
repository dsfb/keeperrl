/* Copyright (C) 2013-2014 Michal Brzozowski (rusolis@poczta.fm)

   This file is part of KeeperRL.

   KeeperRL is free software; you can redistribute it and/or modify it under the terms of the
   GNU General Public License as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   KeeperRL is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
   even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along with this program.
   If not, see http://www.gnu.org/licenses/ . */

#pragma once

#include "stdafx.h"

using TeamId = int;
using LevelId = long long;
using GenericId = long long;

enum class MusicType;
enum class SunlightState;
enum class GameSaveType;
enum class EnemyId;
enum class CollectiveResourceId : std::uint8_t;
enum class CollectiveConfigId;
enum class MsgType;
enum class BodyPart;
enum class AttackType;
enum class AttackLevel;
enum class AttrType;
enum class ExperienceType;
enum class ItemClass;
enum class EquipmentSlot;
enum class SplashType;
enum class MenuType;
enum class OptionId;
enum class CampaignType;
enum class PlayerRole;

enum class MovementTrait;
enum class CreatureSize;

enum class SquareApplyType;
enum class SquareId;
enum class FurnitureType : std::uint8_t;
enum class FurnitureLayer;
enum class ItemAction;
enum class WorshipType;

enum class FurnitureUsageType;
enum class FurnitureClickType;
enum class FurnitureTickType;

enum class MinionActivity;
enum class MinionTrait;
enum class TrapType : std::uint8_t;

enum class SquareAttrib;

enum class Dir;

using CreatureId = string;

enum class ViewLayer;
enum class HighlightType;
enum class StairLook;

enum class SettlementType;
enum class VillainType;
enum class BiomeId;
enum class ZoneId;
enum class ViewId : std::uint16_t;

enum class AnimationId;

enum class SpellId;
enum class SkillId;
enum class VisionId;

enum class LastingEffect;
enum class CreatureCondition;

enum class NameGeneratorId;
enum class ItemIndex;

enum class CollectiveWarning;
enum class SoundId;
enum class Keybinding;
enum class TutorialHighlight;

enum class MessagePriority;
enum class WorkshopType;
enum class PlayerType;
enum class CreatureStatus;
enum class TeamOrder;

enum class FXName;
enum class FXVariantName;
enum class StorageId;
enum class TribeAlignment;
enum class TutorialState;
enum class AvatarMenuOption;
enum class PassableInfo;
enum class ConquerCondition;
enum class FurnitureOnBuilt;
enum class ViewObjectAction : std::uint8_t;
enum class Gender : std::uint8_t;

struct FXInfo;
struct FXSpawnInfo;
using TechId = string;
