// TypeDefIndex 680
// Namespace: 
// [Extension]
// public static class BFKOGEBDAEH
// Fields:
//   public const string FGNEILPGEAH = "ClanTutError";
//   public const string NKADEJPENND = "ClanTutIntroShown";
//   public const string IDJINLOBMGD = "ClanTutUnlockClanRaid";
//   public const string APGLEOPCJHE = "ClanTutFirstRaidCreate";
//   public const string NNFCHDNEPKJ = "ClanTutFirstRaidInvite";

// ===== public static IKEPNHIAEHO HDLGLCEKGAN(string CJNHFNHJHPE)  [RVA 0x302FD1C]
// BFKOGEBDAEH$$HDLGLCEKGAN @ RVA 0x302FD1C

int32_t BFKOGEBDAEH__HDLGLCEKGAN(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  int32_t iVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = CJNHFNHJHPE;
  if ((DAT_04565cf0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_21648/*"ucr"*/);
    FUN_01bab630(&StringLiteral_18354/*"fri"*/);
    FUN_01bab630(&StringLiteral_18348/*"frc"*/);
    auVar3 = FUN_01bab630(&StringLiteral_19110/*"is"*/);
    DAT_04565cf0 = 1;
  }
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  a = System_String__ToLower(CJNHFNHJHPE,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,StringLiteral_19110/*"is"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_21648/*"ucr"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_18348/*"frc"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 4;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_18354/*"fri"*/,(MethodInfo *)0x0);
        iVar2 = 8;
        if (!bVar1) {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}


// ===== public static IKEPNHIAEHO CCIALCAAHKG(string CJNHFNHJHPE)  [RVA 0x302FE1C]
// BFKOGEBDAEH$$CCIALCAAHKG @ RVA 0x302FE1C

int32_t BFKOGEBDAEH__CCIALCAAHKG(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04565cf1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4417/*"ClanTutUnlockClanRaid"*/);
    FUN_01bab630(&StringLiteral_4415/*"ClanTutFirstRaidInvite"*/);
    FUN_01bab630(&StringLiteral_4416/*"ClanTutIntroShown"*/);
    FUN_01bab630(&StringLiteral_4414/*"ClanTutFirstRaidCreate"*/);
    DAT_04565cf1 = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4416/*"ClanTutIntroShown"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4417/*"ClanTutUnlockClanRaid"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4414/*"ClanTutFirstRaidCreate"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 4;
      }
      else {
        bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_4415/*"ClanTutFirstRaidInvite"*/,(MethodInfo *)0x0);
        iVar2 = 8;
        if (!bVar1) {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}


// ===== public static string GKMAFGODLLG(IKEPNHIAEHO CJNHFNHJHPE)  [RVA 0x302FF08]
// BFKOGEBDAEH$$GKMAFGODLLG @ RVA 0x302FF08

System_String_o * BFKOGEBDAEH__GKMAFGODLLG(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04565cf2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4417/*"ClanTutUnlockClanRaid"*/);
    FUN_01bab630(&StringLiteral_4415/*"ClanTutFirstRaidInvite"*/);
    FUN_01bab630(&StringLiteral_4413/*"ClanTutError"*/);
    FUN_01bab630(&StringLiteral_4416/*"ClanTutIntroShown"*/);
    FUN_01bab630(&StringLiteral_4414/*"ClanTutFirstRaidCreate"*/);
    DAT_04565cf2 = 1;
  }
  if (CJNHFNHJHPE - 1U < 8) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_4416/*"ClanTutIntroShown"*/_03fc6308)[(int)(CJNHFNHJHPE - 1U)];
  }
  else {
    puVar1 = &StringLiteral_4413/*"ClanTutError"*/;
  }
  return (System_String_o *)*puVar1;
}

