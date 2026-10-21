// TypeDefIndex 3418
// Namespace: 
// public sealed class KFKFNDEJLKK
// Fields:
//   public readonly KFKFNDEJLKK.PCJFAKMBHCE BGHFADDGPAD; // 0x10

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3559C4C]
// KFKFNDEJLKK$$.ctor @ RVA 0x3559C4C

void KFKFNDEJLKK___ctor(KFKFNDEJLKK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  undefined1 auVar2 [16];
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar2 = (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    iVar1 = KFKFNDEJLKK__PLKDFGDHJKE(auVar2._0_8_,auVar2._8_8_);
    (__this->fields).BGHFADDGPAD = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static KFKFNDEJLKK.PCJFAKMBHCE PLKDFGDHJKE(string ACCIHBHMFPN)  [RVA 0x3559C90]
// KFKFNDEJLKK$$PLKDFGDHJKE @ RVA 0x3559C90

int32_t KFKFNDEJLKK__PLKDFGDHJKE(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *message;
  undefined8 *puVar3;
  
  if ((DAT_04568b7f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_12381/*"StarterPackPress"*/);
    FUN_01bab630(&StringLiteral_5057/*"DailyWindowOpen"*/);
    FUN_01bab630(&StringLiteral_5772/*"EnergyChanged"*/);
    FUN_01bab630(&StringLiteral_14978/*"WithdrawGDPRConsent"*/);
    FUN_01bab630(&StringLiteral_5288/*"Delivery"*/);
    FUN_01bab630(&StringLiteral_8356/*"LeaderBoardTap"*/);
    FUN_01bab630(&StringLiteral_10581/*"Purchase"*/);
    FUN_01bab630(&StringLiteral_3446/*"BeforeQueue"*/);
    FUN_01bab630(&StringLiteral_11273/*"RequestDownloadPacks"*/);
    FUN_01bab630(&StringLiteral_3548/*"BossShieldDestroyed"*/);
    FUN_01bab630(&StringLiteral_6483/*"FirstLaunch"*/);
    FUN_01bab630(&StringLiteral_9949/*"OpenRaidChat"*/);
    FUN_01bab630(&StringLiteral_10589/*"PurchaseUnsuccessful"*/);
    FUN_01bab630(&StringLiteral_6355/*"FightPreEnd"*/);
    FUN_01bab630(&StringLiteral_6343/*"FightEnter"*/);
    FUN_01bab630(&StringLiteral_11903/*"SetItemAcquired"*/);
    FUN_01bab630(&StringLiteral_10391/*"PrePurchase"*/);
    FUN_01bab630(&StringLiteral_4317/*"CheckUserUpdate"*/);
    FUN_01bab630(&StringLiteral_11764/*"SeasonStartWithRestore"*/);
    FUN_01bab630(&StringLiteral_11720/*"SceneLoaded"*/);
    FUN_01bab630(&StringLiteral_5056/*"DailyRefreshRewardedVideo"*/);
    FUN_01bab630(&StringLiteral_3626/*"BuySpinGems"*/);
    FUN_01bab630(&StringLiteral_10904/*"RaidLogin"*/);
    FUN_01bab630(&StringLiteral_9950/*"OpenRaids"*/);
    FUN_01bab630(&StringLiteral_2734/*"ActivatePerk"*/);
    FUN_01bab630(&StringLiteral_8623/*"LoginEnd"*/);
    FUN_01bab630(&StringLiteral_8105/*"ItemBought"*/);
    FUN_01bab630(&StringLiteral_3438/*"BattlePassInfo"*/);
    FUN_01bab630(&StringLiteral_10906/*"RaidLootReceived"*/);
    FUN_01bab630(&StringLiteral_5771/*"EnergyBarPress"*/);
    FUN_01bab630(&StringLiteral_11875/*"SessionStart"*/);
    FUN_01bab630(&StringLiteral_5216/*"DeactivatePerk"*/);
    FUN_01bab630(&StringLiteral_11236/*"ReplayButtonPress"*/);
    FUN_01bab630(&StringLiteral_8824/*"MapButtonPress"*/);
    FUN_01bab630(&StringLiteral_10844/*"RaidFightEnter"*/);
    FUN_01bab630(&StringLiteral_6711/*"GamingServiceLoginEnd"*/);
    FUN_01bab630(&StringLiteral_5701/*"Enchantment"*/);
    FUN_01bab630(&StringLiteral_6893/*"GotItem"*/);
    FUN_01bab630(&StringLiteral_10843/*"RaidFightEnd"*/);
    FUN_01bab630(&StringLiteral_13818/*"TimerEnd"*/);
    FUN_01bab630(&StringLiteral_10838/*"RaidEnd"*/);
    FUN_01bab630(&StringLiteral_10914/*"RaidMapEnter"*/);
    FUN_01bab630(&StringLiteral_6592/*"FreeSectionButton"*/);
    FUN_01bab630(&StringLiteral_5493/*"DuelUnlocked"*/);
    FUN_01bab630(&StringLiteral_5702/*"EnchantmentUnsuccessful"*/);
    FUN_01bab630(&StringLiteral_12115/*"ShowRewardedVideo"*/);
    FUN_01bab630(&StringLiteral_2732/*"Activate"*/);
    FUN_01bab630(&StringLiteral_10845/*"RaidFightRewardedVideo"*/);
    FUN_01bab630(&StringLiteral_5282/*"DeleteSave"*/);
    FUN_01bab630(&StringLiteral_10839/*"RaidEnter"*/);
    FUN_01bab630(&StringLiteral_10851/*"RaidFloorChanged"*/);
    FUN_01bab630(&StringLiteral_3019/*"ApplicationStart"*/);
    FUN_01bab630(&StringLiteral_10064/*"PVPTutorial2"*/);
    FUN_01bab630(&StringLiteral_4260/*"ChangeTab"*/);
    FUN_01bab630(&StringLiteral_8423/*"LevelUp"*/);
    FUN_01bab630(&StringLiteral_11858/*"ServerCurrencyMessage"*/);
    FUN_01bab630(&StringLiteral_10952/*"RaidProfileClosed"*/);
    FUN_01bab630(&StringLiteral_4854/*"CreateClan"*/);
    FUN_01bab630(&StringLiteral_11015/*"RangChanged"*/);
    FUN_01bab630(&StringLiteral_14791/*"VideoButtonPress"*/);
    FUN_01bab630(&StringLiteral_14489/*"Unknown event type: "*/);
    FUN_01bab630(&StringLiteral_14608/*"UrlOpened"*/);
    FUN_01bab630(&StringLiteral_9948/*"OpenLottery"*/);
    FUN_01bab630(&StringLiteral_6342/*"FightEnd"*/);
    FUN_01bab630(&StringLiteral_12165/*"SkipDeliveryRewardedVideo"*/);
    FUN_01bab630(&StringLiteral_11765/*"SeasonStartWithoutRestore"*/);
    FUN_01bab630(&StringLiteral_10953/*"RaidProfileOpened"*/);
    FUN_01bab630(&StringLiteral_6714/*"GamingServiceSignOut"*/);
    FUN_01bab630(&StringLiteral_8694/*"LotterySpinRewardedVideo"*/);
    FUN_01bab630(&StringLiteral_5351/*"Dialog"*/);
    FUN_01bab630(&StringLiteral_4298/*"CheckClanTutorialStep"*/);
    FUN_01bab630(&StringLiteral_9802/*"OfferItemRecieved"*/);
    FUN_01bab630(&StringLiteral_11024/*"RankChanged"*/);
    FUN_01bab630(&StringLiteral_12005/*"ShopButtonPress"*/);
    FUN_01bab630(&StringLiteral_6713/*"GamingServiceSignIn"*/);
    FUN_01bab630(&StringLiteral_8627/*"LoginFacebook"*/);
    FUN_01bab630(&StringLiteral_12112/*"ShowRaidLoot"*/);
    FUN_01bab630(&StringLiteral_12096/*"ShowGDPRConsent"*/);
    FUN_01bab630(&StringLiteral_2785/*"AfterFightVideoMultiplier"*/);
    FUN_01bab630(&StringLiteral_4402/*"ClanRaidInvite"*/);
    FUN_01bab630(&StringLiteral_10954/*"RaidPurchase"*/);
    FUN_01bab630(&StringLiteral_10913/*"RaidMapButtonPress"*/);
    DAT_04568b7f = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x7d3ec570) {
    if (uVar2 < 0x32c25bf6) {
      if (uVar2 < 0x15242d8b) {
        if (uVar2 < 0x539ec76) {
          if (uVar2 < 0x7d2483) {
            if (uVar2 == 0x4b84d7) {
              bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6355/*"FightPreEnd"*/,(MethodInfo *)0x0);
              if (bVar1) {
                return 2;
              }
            }
            else if ((uVar2 == 0x7d2482) &&
                    (bVar1 = System_String__op_Equality
                                       (ACCIHBHMFPN,StringLiteral_5701/*"Enchantment"*/,(MethodInfo *)0x0), bVar1)) {
              return 0x1b;
            }
          }
          else if (uVar2 == 0xcfa24e) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10952/*"RaidProfileClosed"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x4a;
            }
          }
          else if (uVar2 == 0x3f2a984) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12381/*"StarterPackPress"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x15;
            }
          }
          else if ((uVar2 == 0x539ec75) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_4317/*"CheckUserUpdate"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x4e;
          }
        }
        else if (uVar2 < 0x9bb60d5) {
          if (uVar2 == 0x706636a) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5057/*"DailyWindowOpen"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x29;
            }
          }
          else if ((uVar2 == 0x9bb60d4) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_2734/*"ActivatePerk"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x1d;
          }
        }
        else if (uVar2 == 0xd0bb9b2) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6714/*"GamingServiceSignOut"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x47;
          }
        }
        else if (uVar2 == 0x1046ed12) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_9948/*"OpenLottery"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x42;
          }
        }
        else if ((uVar2 == 0x15242d8a) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_9950/*"OpenRaids"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x22;
        }
      }
      else if (uVar2 < 0x22906e67) {
        if (uVar2 < 0x188a8e02) {
          if (uVar2 == 0x1789891b) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10953/*"RaidProfileOpened"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x49;
            }
          }
          else if ((uVar2 == 0x188a8e01) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_8356/*"LeaderBoardTap"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x2a;
          }
        }
        else if (uVar2 == 0x1d1a7358) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11858/*"ServerCurrencyMessage"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x10;
          }
        }
        else if (uVar2 == 0x1e1525b2) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11720/*"SceneLoaded"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x30;
          }
        }
        else if ((uVar2 == 0x22906e66) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_10904/*"RaidLogin"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x26;
        }
      }
      else if (uVar2 < 0x26be3ada) {
        if (uVar2 == 0x25b03e7c) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12005/*"ShopButtonPress"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x38;
          }
        }
        else if ((uVar2 == 0x26be3ad9) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_5351/*"Dialog"*/,(MethodInfo *)0x0), bVar1)) {
          return 8;
        }
      }
      else if (uVar2 == 0x2cdd655b) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_2785/*"AfterFightVideoMultiplier"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x39;
        }
      }
      else if (uVar2 == 0x31cebd73) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10064/*"PVPTutorial2"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x40;
        }
      }
      else if ((uVar2 == 0x32c25bf5) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6711/*"GamingServiceLoginEnd"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 0x3e;
      }
      goto LAB_0365b2ec;
    }
    if (0x547a4f6e < uVar2) {
      if (uVar2 < 0x693fa7c3) {
        if (uVar2 < 0x60f19a8c) {
          if (uVar2 == 0x56eb0a54) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8824/*"MapButtonPress"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x19;
            }
          }
          else if ((uVar2 == 0x60f19a8b) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_5772/*"EnergyChanged"*/,(MethodInfo *)0x0), bVar1)) {
            return 0xf;
          }
        }
        else if (uVar2 == 0x640b9dd9) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5771/*"EnergyBarPress"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x16;
          }
        }
        else if (uVar2 == 0x67579f6a) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10843/*"RaidFightEnd"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 5;
          }
        }
        else if ((uVar2 == 0x693fa7c2) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_3438/*"BattlePassInfo"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x44;
        }
      }
      else if (uVar2 < 0x6c1af054) {
        if (uVar2 == 0x6bd1269f) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10589/*"PurchaseUnsuccessful"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x14;
          }
        }
        else if ((uVar2 == 0x6c1af053) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_9949/*"OpenRaidChat"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x2d;
        }
      }
      else if (uVar2 == 0x6ec3aabd) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10391/*"PrePurchase"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0xc;
        }
      }
      else if (uVar2 == 0x7ce2cb09) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11236/*"ReplayButtonPress"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x37;
        }
      }
      else if ((uVar2 == 0x7d3ec56f) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_14791/*"VideoButtonPress"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 0x17;
      }
      goto LAB_0365b2ec;
    }
    if (uVar2 < 0x456c3cad) {
      if (uVar2 < 0x3afbdb83) {
        if (uVar2 == 0x39988064) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_14978/*"WithdrawGDPRConsent"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x2f;
          }
        }
        else if ((uVar2 == 0x3afbdb82) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_10581/*"Purchase"*/,(MethodInfo *)0x0), bVar1)) {
          return 0xb;
        }
      }
      else if (uVar2 == 0x3b8f0190) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_2732/*"Activate"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 10;
        }
      }
      else if (uVar2 == 0x400864d5) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12096/*"ShowGDPRConsent"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x2e;
        }
      }
      else if ((uVar2 == 0x456c3cac) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10906/*"RaidLootReceived"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 0x4c;
      }
      goto LAB_0365b2ec;
    }
    if (uVar2 < 0x4c7699c0) {
      if (uVar2 == 0x48f38d75) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5288/*"Delivery"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0xe;
        }
      }
      else if ((uVar2 == 0x4c7699bf) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8623/*"LoginEnd"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 0x2c;
      }
      goto LAB_0365b2ec;
    }
    if (uVar2 == 0x4d6930df) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3019/*"ApplicationStart"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 0x12;
      }
      goto LAB_0365b2ec;
    }
    if (uVar2 != 0x5301c8b9) {
      if ((uVar2 == 0x547a4f6e) &&
         (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6592/*"FreeSectionButton"*/,(MethodInfo *)0x0),
         bVar1)) {
        return 0x11;
      }
      goto LAB_0365b2ec;
    }
    puVar3 = &StringLiteral_11015/*"RangChanged"*/;
  }
  else {
    if (0xbf21ebcd < uVar2) {
      if (uVar2 < 0xe48f6057) {
        if (uVar2 < 0xd072c34b) {
          if (uVar2 < 0xc98f8c63) {
            if (uVar2 == 0xc0f4fe0e) {
              bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6342/*"FightEnd"*/,(MethodInfo *)0x0);
              if (bVar1) {
                return 3;
              }
            }
            else if ((uVar2 == 0xc98f8c62) &&
                    (bVar1 = System_String__op_Equality
                                       (ACCIHBHMFPN,StringLiteral_11765/*"SeasonStartWithoutRestore"*/,(MethodInfo *)0x0), bVar1))
            {
              return 0x28;
            }
          }
          else if (uVar2 == 0xcc5f4861) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12115/*"ShowRewardedVideo"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x2b;
            }
          }
          else if (uVar2 == 0xccf48fbf) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_14608/*"UrlOpened"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x50;
            }
          }
          else if ((uVar2 == 0xd072c34a) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_6483/*"FirstLaunch"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x31;
          }
        }
        else if (uVar2 < 0xd2cdb69c) {
          if (uVar2 == 0xd1b56949) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3446/*"BeforeQueue"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x48;
            }
          }
          else if ((uVar2 == 0xd2cdb69b) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_4298/*"CheckClanTutorialStep"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x36;
          }
        }
        else if (uVar2 == 0xd583064e) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12112/*"ShowRaidLoot"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x4f;
          }
        }
        else if (uVar2 == 0xe2b6f094) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4260/*"ChangeTab"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x13;
          }
        }
        else if ((uVar2 == 0xe48f6056) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_10838/*"RaidEnd"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x24;
        }
      }
      else if (uVar2 < 0xf44fd917) {
        if (uVar2 < 0xe8e65b9c) {
          if (uVar2 == 0xe4b3c706) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11764/*"SeasonStartWithRestore"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x27;
            }
          }
          else if ((uVar2 == 0xe8e65b9b) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_5216/*"DeactivatePerk"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x1e;
          }
        }
        else if (uVar2 == 0xf1249b34) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3548/*"BossShieldDestroyed"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x25;
          }
        }
        else if (uVar2 == 0xf2e772f6) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5056/*"DailyRefreshRewardedVideo"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x3c;
          }
        }
        else if ((uVar2 == 0xf44fd916) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_8627/*"LoginFacebook"*/,(MethodInfo *)0x0), bVar1)) {
          return 0xd;
        }
      }
      else if (uVar2 < 0xfbcbe115) {
        if (uVar2 == 0xf4a2aa2e) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6893/*"GotItem"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 7;
          }
        }
        else if (uVar2 == 0xf60733a2) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5493/*"DuelUnlocked"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x21;
          }
        }
        else if ((uVar2 == 0xfbcbe114) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_4402/*"ClanRaidInvite"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x35;
        }
      }
      else if (uVar2 == 0xfcf3b311) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6713/*"GamingServiceSignIn"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x46;
        }
      }
      else if (uVar2 == 0xff76d888) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10913/*"RaidMapButtonPress"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x1a;
        }
      }
      else if ((uVar2 == 0xffc948b5) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_9802/*"OfferItemRecieved"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 0x4b;
      }
      goto LAB_0365b2ec;
    }
    if (0x90ceeddf < uVar2) {
      if (uVar2 < 0x9ee09dc0) {
        if (uVar2 < 0x951f07c8) {
          if (uVar2 == 0x929529fb) {
            bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8694/*"LotterySpinRewardedVideo"*/,(MethodInfo *)0x0);
            if (bVar1) {
              return 0x3b;
            }
          }
          else if ((uVar2 == 0x951f07c7) &&
                  (bVar1 = System_String__op_Equality
                                     (ACCIHBHMFPN,StringLiteral_12165/*"SkipDeliveryRewardedVideo"*/,(MethodInfo *)0x0), bVar1)) {
            return 0x3a;
          }
        }
        else if (uVar2 == 0x979aeabd) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_11875/*"SessionStart"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 9;
          }
        }
        else if (uVar2 == 0x9b452b35) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8105/*"ItemBought"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x41;
          }
        }
        else if ((uVar2 == 0x9ee09dbf) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_3626/*"BuySpinGems"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x1f;
        }
      }
      else if (uVar2 < 0xa39e0b0d) {
        if (uVar2 == 0xa085188f) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_13818/*"TimerEnd"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x18;
          }
        }
        else if ((uVar2 == 0xa39e0b0c) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_11903/*"SetItemAcquired"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x20;
        }
      }
      else if (uVar2 == 0xaacdf118) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8423/*"LevelUp"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 6;
        }
      }
      else if (uVar2 == 0xb5801f9f) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5702/*"EnchantmentUnsuccessful"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x1c;
        }
      }
      else if ((uVar2 == 0xbf21ebcd) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10844/*"RaidFightEnter"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 4;
      }
      goto LAB_0365b2ec;
    }
    if (0x86e873e9 < uVar2) {
      if (uVar2 < 0x8a25c949) {
        if (uVar2 == 0x893f7b51) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10839/*"RaidEnter"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 0x23;
          }
        }
        else if ((uVar2 == 0x8a25c948) &&
                (bVar1 = System_String__op_Equality
                                   (ACCIHBHMFPN,StringLiteral_11273/*"RequestDownloadPacks"*/,(MethodInfo *)0x0), bVar1)) {
          return 0x4d;
        }
      }
      else if (uVar2 == 0x8c37a115) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10914/*"RaidMapEnter"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x32;
        }
      }
      else if (uVar2 == 0x8e5b9a55) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4854/*"CreateClan"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x43;
        }
      }
      else if ((uVar2 == 0x90ceeddf) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10851/*"RaidFloorChanged"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 0x45;
      }
      goto LAB_0365b2ec;
    }
    if (0x83868416 < uVar2) {
      if (uVar2 == 0x84deff17) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5282/*"DeleteSave"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x3f;
        }
      }
      else if (uVar2 == 0x850c1f9e) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10954/*"RaidPurchase"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0x33;
        }
      }
      else if ((uVar2 == 0x86e873e9) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6343/*"FightEnter"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 1;
      }
      goto LAB_0365b2ec;
    }
    if (uVar2 != 0x80834f25) {
      if ((uVar2 == 0x83868416) &&
         (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10845/*"RaidFightRewardedVideo"*/,(MethodInfo *)0x0),
         bVar1)) {
        return 0x3d;
      }
      goto LAB_0365b2ec;
    }
    puVar3 = &StringLiteral_11024/*"RankChanged"*/;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return 0x34;
  }
LAB_0365b2ec:
  message = System_String__Concat(StringLiteral_14489/*"Unknown event type: "*/,ACCIHBHMFPN,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return 0;
}

