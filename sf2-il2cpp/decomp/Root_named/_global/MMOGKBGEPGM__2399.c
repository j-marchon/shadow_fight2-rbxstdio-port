// TypeDefIndex 2399
// Namespace: 
// [Extension]
// public static class MMOGKBGEPGM
// Fields:

// ===== public static string GKMAFGODLLG(HPPDIEDAKEC OOGPLJBADCD)  [RVA 0x3333374]
// MMOGKBGEPGM$$GKMAFGODLLG @ RVA 0x3333374

System_String_o * MMOGKBGEPGM__GKMAFGODLLG(int32_t OOGPLJBADCD,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04567930 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10916/*"RaidMapStage"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_10712/*"QuestItems"*/);
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_2720/*"Achievements"*/);
    FUN_01bab630(&StringLiteral_11452/*"Ruby"*/);
    FUN_01bab630(&StringLiteral_9222/*"Moves"*/);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_12433/*"StoryMapStage"*/);
    FUN_01bab630(&StringLiteral_4289/*"Cheat"*/);
    FUN_01bab630(&StringLiteral_3437/*"BattlePass"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04567930 = 1;
  }
  if (OOGPLJBADCD - 1U < 0x11) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_14870/*"Weapon"*/_03fc6700)[(int)(OOGPLJBADCD - 1U)];
  }
  else {
    puVar1 = &StringLiteral_5245/*"Default"*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static HPPDIEDAKEC GFLCMDMEOBN(string OOGPLJBADCD)  [RVA 0x33334A0]
// MMOGKBGEPGM$$GFLCMDMEOBN @ RVA 0x33334A0

int32_t MMOGKBGEPGM__GFLCMDMEOBN(System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_04567931 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10916/*"RaidMapStage"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_10712/*"QuestItems"*/);
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_2720/*"Achievements"*/);
    FUN_01bab630(&StringLiteral_11452/*"Ruby"*/);
    FUN_01bab630(&StringLiteral_9222/*"Moves"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_12433/*"StoryMapStage"*/);
    FUN_01bab630(&StringLiteral_4289/*"Cheat"*/);
    FUN_01bab630(&StringLiteral_3437/*"BattlePass"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04567931 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(OOGPLJBADCD,(MethodInfo *)0x0);
  if (uVar2 < 0x9c42ba6e) {
    if (uVar2 < 0x51a391d2) {
      if (uVar2 < 0x1d39e33f) {
        if (uVar2 == 0x1c5c36fb) {
          bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
          if (bVar1) {
            return 7;
          }
        }
        else if ((uVar2 == 0x1d39e33e) &&
                (bVar1 = System_String__op_Equality
                                   (OOGPLJBADCD,StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0), bVar1)) {
          return 8;
        }
      }
      else if (uVar2 == 0x3a27dfec) {
        bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_4289/*"Cheat"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 9;
        }
      }
      else if ((uVar2 == 0x51a391d1) &&
              (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_2720/*"Achievements"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 0xc;
      }
    }
    else if (uVar2 < 0x7c2a088b) {
      if (uVar2 == 0x79868dc5) {
        bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_9222/*"Moves"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0xb;
        }
      }
      else if ((uVar2 == 0x7c2a088a) &&
              (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10239/*"Perks"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 10;
      }
    }
    else if (uVar2 == 0x84b84174) {
      bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_3076/*"Armor"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 2;
      }
    }
    else if ((uVar2 == 0x9c42ba6d) &&
            (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_11452/*"Ruby"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 6;
    }
  }
  else if (uVar2 < 0xb9105d26) {
    if (uVar2 < 0xb3fb0418) {
      if (uVar2 == 0x9d9dc599) {
        bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_7066/*"Helm"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 3;
        }
      }
      else if ((uVar2 == 0xb3fb0417) &&
              (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10712/*"QuestItems"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 0xd;
      }
    }
    else if (uVar2 == 0xb7c10361) {
      bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 1;
      }
    }
    else if ((uVar2 == 0xb9105d25) &&
            (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_10916/*"RaidMapStage"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 0x11;
    }
  }
  else if (uVar2 < 0xbaf7c21b) {
    if (uVar2 == 0xb960112c) {
      bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 5;
      }
    }
    else if ((uVar2 == 0xbaf7c21a) &&
            (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_3437/*"BattlePass"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 0xf;
    }
  }
  else if (uVar2 == 0xbf96ceba) {
    bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_12433/*"StoryMapStage"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return 0x10;
    }
  }
  else if (uVar2 == 0xcb2ec7a2) {
    bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return 4;
    }
  }
  else if ((uVar2 == 0xe1e7b894) &&
          (bVar1 = System_String__op_Equality(OOGPLJBADCD,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0),
          bVar1)) {
    return 0xe;
  }
  return 0;
}


// ===== public static DBMPKPJGIPI KBMJOICLEHN(HPPDIEDAKEC NNAAKHIDJBH)  [RVA 0x333398C]
// MMOGKBGEPGM$$KBMJOICLEHN @ RVA 0x333398C

int32_t MMOGKBGEPGM__KBMJOICLEHN(int32_t NNAAKHIDJBH,MethodInfo *method)

{
  if (NNAAKHIDJBH - 1U < 0x11) {
    return *(int32_t *)(&DAT_00e29830 + (long)(int)(NNAAKHIDJBH - 1U) * 4);
  }
  return 0xb;
}

