// TypeDefIndex 2979
// Namespace: 
// public static class HJPEKDOPBHN
// Fields:
//   private static bool NKIKDJEPECM; // 0x0
//   public static ObscuredInt MJEPNDCEBCK; // 0x4
//   public static ObscuredInt ENCOAOMGLKD; // 0x14
//   private static RaidConfig GALCGHPGAIB; // 0x28
//   private static RaidManager JJCKLFCCDKC; // 0x30
//   private static NFFDIPBFJHP HIJGAAGBIIM; // 0x38
//   private static PlayerData MIJBAIOPKEC; // 0x40
//   private static CFMDGLMCNIL BICPIBOGEMA; // 0x48
//   private static RaidPlayerInfoHelper ODAGGAFNJKB; // 0x50
//   private static RaidLeaderboardsManager OABNFJDEBDG; // 0x58
//   private static RaidQuestsManager FMAOIMEMFIM; // 0x60
//   private static HCKCBFOGMMJ CLCJDMCNJCJ; // 0x68
//   private static RaidPaymentService JCLHALJBHCD; // 0x70
//   private static MCEIBCKPIAD HJENHAFJCEK; // 0x78
//   private static RaidClansManager GBIANJOGFPB; // 0x80
//   private static KCJMBDCBIIF NAOOEGOOACF; // 0x88
//   private static ChatManager GLEJDICJDEE; // 0x90
//   private static EGMONPGHHDP JPHBJJPHCPC; // 0x98

// ===== public static NFFDIPBFJHP FPALMCILCOD()  [RVA 0x34A1B48]
// HJPEKDOPBHN$$FPALMCILCOD @ RVA 0x34A1B48

NFFDIPBFJHP_o * HJPEKDOPBHN__FPALMCILCOD(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a0 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a0 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->HIJGAAGBIIM;
}


// ===== private static void .cctor()  [RVA 0x34A1FA8]
// HJPEKDOPBHN$$.cctor @ RVA 0x34A1FA8

void HJPEKDOPBHN___cctor(MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  HJPEKDOPBHN_StaticFields *pHVar6;
  BGPFALGFJIL_StaticFields *pBVar7;
  
  if ((DAT_045684a1 & 1) == 0) {
    FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a1 = 1;
  }
  pHVar6 = HJPEKDOPBHN_TypeInfo->static_fields;
  pHVar6->NKIKDJEPECM = false;
  if ((BGPFALGFJIL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pHVar6 = HJPEKDOPBHN_TypeInfo->static_fields;
  }
  pBVar7 = BGPFALGFJIL_TypeInfo->static_fields;
  bVar1 = (pBVar7->NLEJEOIFOMI).fields.fakeValueActive;
  bVar2 = (pBVar7->NLEJEOIFOMI).fields.inited;
  uVar3 = *(undefined2 *)&(pBVar7->NLEJEOIFOMI).fields.field_0xe;
  iVar4 = (pBVar7->NLEJEOIFOMI).fields.currentCryptoKey;
  iVar5 = (pBVar7->NLEJEOIFOMI).fields.hiddenValue;
  (pHVar6->MJEPNDCEBCK).fields.fakeValue = (pBVar7->NLEJEOIFOMI).fields.fakeValue;
  (pHVar6->MJEPNDCEBCK).fields.fakeValueActive = bVar1;
  (pHVar6->MJEPNDCEBCK).fields.inited = bVar2;
  *(undefined2 *)&(pHVar6->MJEPNDCEBCK).fields.field_0xe = uVar3;
  (pHVar6->MJEPNDCEBCK).fields.currentCryptoKey = iVar4;
  (pHVar6->MJEPNDCEBCK).fields.hiddenValue = iVar5;
  pBVar7 = BGPFALGFJIL_TypeInfo->static_fields;
  bVar1 = (pBVar7->JBGPHLKPICA).fields.fakeValueActive;
  bVar2 = (pBVar7->JBGPHLKPICA).fields.inited;
  uVar3 = *(undefined2 *)&(pBVar7->JBGPHLKPICA).fields.field_0xe;
  iVar4 = (pBVar7->JBGPHLKPICA).fields.currentCryptoKey;
  iVar5 = (pBVar7->JBGPHLKPICA).fields.hiddenValue;
  pHVar6 = HJPEKDOPBHN_TypeInfo->static_fields;
  (pHVar6->ENCOAOMGLKD).fields.fakeValue = (pBVar7->JBGPHLKPICA).fields.fakeValue;
  (pHVar6->ENCOAOMGLKD).fields.fakeValueActive = bVar1;
  (pHVar6->ENCOAOMGLKD).fields.inited = bVar2;
  *(undefined2 *)&(pHVar6->ENCOAOMGLKD).fields.field_0xe = uVar3;
  (pHVar6->ENCOAOMGLKD).fields.currentCryptoKey = iVar4;
  (pHVar6->ENCOAOMGLKD).fields.hiddenValue = iVar5;
  return;
}


// ===== public static ChatManager BMIEIJAJNAJ()  [RVA 0x34A2050]
// HJPEKDOPBHN$$BMIEIJAJNAJ @ RVA 0x34A2050

ChatManager_o * HJPEKDOPBHN__BMIEIJAJNAJ(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a2 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->GLEJDICJDEE;
}


// ===== public static PlayerData NLNDOENIAEO()  [RVA 0x34A20AC]
// HJPEKDOPBHN$$NLNDOENIAEO @ RVA 0x34A20AC

PlayerData_o * HJPEKDOPBHN__NLNDOENIAEO(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a3 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->MIJBAIOPKEC;
}


// ===== public static RaidClansManager CEFGBPEHJJG()  [RVA 0x34A2108]
// HJPEKDOPBHN$$CEFGBPEHJJG @ RVA 0x34A2108

RaidClansManager_o * HJPEKDOPBHN__CEFGBPEHJJG(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a4 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->GBIANJOGFPB;
}


// ===== public static HCKCBFOGMMJ OGBJOOPBEFG()  [RVA 0x34A2164]
// HJPEKDOPBHN$$OGBJOOPBEFG @ RVA 0x34A2164

HCKCBFOGMMJ_o * HJPEKDOPBHN__OGBJOOPBEFG(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a5 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a5 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->CLCJDMCNJCJ;
}


// ===== public static RaidPlayerInfoHelper JHBLAJKKPFG()  [RVA 0x34A21C0]
// HJPEKDOPBHN$$JHBLAJKKPFG @ RVA 0x34A21C0

RaidPlayerInfoHelper_o * HJPEKDOPBHN__JHBLAJKKPFG(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a6 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->ODAGGAFNJKB;
}


// ===== public static RaidManager FKBPIBLMJEF()  [RVA 0x34A221C]
// HJPEKDOPBHN$$FKBPIBLMJEF @ RVA 0x34A221C

RaidManager_o * HJPEKDOPBHN__FKBPIBLMJEF(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a7 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->JJCKLFCCDKC;
}


// ===== public static bool OOCIJPLODLJ()  [RVA 0x34A2278]
// HJPEKDOPBHN$$OOCIJPLODLJ @ RVA 0x34A2278

bool HJPEKDOPBHN__OOCIJPLODLJ(MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  GCPFDLNAFDF_o *pGVar5;
  VirtualInvokeData *pVVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE;
  
  if ((DAT_045684a8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&KADDELABILH_TypeInfo);
    DAT_045684a8 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar5 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar5 == (GCPFDLNAFDF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pGVar7 = pGVar5->klass;
  uVar1._0_1_ = (pGVar7->_2).rank;
  uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)KADDELABILH_TypeInfo) {
        pVVar6 = pGVar7->vtable + (*piVar9 + 4);
        goto LAB_035a2340;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pGVar5,KADDELABILH_TypeInfo,4);
LAB_035a2340:
  CJNHFNHJHPE.fields =
       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
       (*pVVar6->methodPtr)(pGVar5,pVVar6->method);
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (HJPEKDOPBHN_TypeInfo->static_fields->MJEPNDCEBCK).fields,(MethodInfo *)0x0);
  if (iVar4 < iVar3) {
    bVar2 = false;
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (HJPEKDOPBHN_TypeInfo->static_fields->ENCOAOMGLKD).fields,(MethodInfo *)0x0);
    bVar2 = iVar4 <= iVar3;
  }
  return bVar2;
}


// ===== public static RaidConfig GAFKBFMBPKO()  [RVA 0x3490048]
// HJPEKDOPBHN$$GAFKBFMBPKO @ RVA 0x3490048

RaidConfig_o * HJPEKDOPBHN__GAFKBFMBPKO(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684a9 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a9 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->GALCGHPGAIB;
}


// ===== public static RaidQuestsManager CCIPAEHGPFC()  [RVA 0x34A23D4]
// HJPEKDOPBHN$$CCIPAEHGPFC @ RVA 0x34A23D4

RaidQuestsManager_o * HJPEKDOPBHN__CCIPAEHGPFC(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684aa & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684aa = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->FMAOIMEMFIM;
}


// ===== public static bool AAENFELBKDD()  [RVA 0x34A2430]
// HJPEKDOPBHN$$AAENFELBKDD @ RVA 0x34A2430

bool HJPEKDOPBHN__AAENFELBKDD(MethodInfo *method)

{
  if ((DAT_045684ab & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684ab = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HJPEKDOPBHN_TypeInfo->static_fields->NKIKDJEPECM;
}


// ===== public static EGMONPGHHDP IAALPCFKGEK()  [RVA 0x34A2488]
// HJPEKDOPBHN$$IAALPCFKGEK @ RVA 0x34A2488

EGMONPGHHDP_o * HJPEKDOPBHN__IAALPCFKGEK(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684ac & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684ac = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->JPHBJJPHCPC;
}


// ===== public static MCEIBCKPIAD IOMECNCIENO()  [RVA 0x34A24E4]
// HJPEKDOPBHN$$IOMECNCIENO @ RVA 0x34A24E4

MCEIBCKPIAD_o * HJPEKDOPBHN__IOMECNCIENO(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684ad & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684ad = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->HJENHAFJCEK;
}


// ===== public static RaidLeaderboardsManager NKPPBANIAFK()  [RVA 0x34A2540]
// HJPEKDOPBHN$$NKPPBANIAFK @ RVA 0x34A2540

RaidLeaderboardsManager_o * HJPEKDOPBHN__NKPPBANIAFK(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684ae & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684ae = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->OABNFJDEBDG;
}


// ===== public static KCJMBDCBIIF ODLPHDBFGPL()  [RVA 0x34900A4]
// HJPEKDOPBHN$$ODLPHDBFGPL @ RVA 0x34900A4

/* WARNING: Control flow encountered bad instruction data */

KCJMBDCBIIF_o * HJPEKDOPBHN__ODLPHDBFGPL(MethodInfo *method)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== public static RaidPaymentService EKIJCGJLILF()  [RVA 0x34A259C]
// HJPEKDOPBHN$$EKIJCGJLILF @ RVA 0x34A259C

RaidPaymentService_o * HJPEKDOPBHN__EKIJCGJLILF(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684b0 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684b0 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->JCLHALJBHCD;
}


// ===== public static CFMDGLMCNIL POHONLHCOJN()  [RVA 0x34A25F8]
// HJPEKDOPBHN$$POHONLHCOJN @ RVA 0x34A25F8

CFMDGLMCNIL_o * HJPEKDOPBHN__POHONLHCOJN(MethodInfo *method)

{
  HJPEKDOPBHN_c *method_00;
  
  if ((DAT_045684b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684b1 = 1;
  }
  method_00 = HJPEKDOPBHN_TypeInfo;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
  }
  HJPEKDOPBHN__GIENGNEGHPJ((MethodInfo *)method_00);
  return HJPEKDOPBHN_TypeInfo->static_fields->BICPIBOGEMA;
}


// ===== private static void GIENGNEGHPJ()  [RVA 0x34A1BA4]
// HJPEKDOPBHN$$GIENGNEGHPJ @ RVA 0x34A1BA4

void HJPEKDOPBHN__GIENGNEGHPJ(MethodInfo *method)

{
  RaidConfig_o *__this;
  RaidConfig_o **ppJVar1;
  RaidManager_o *__this_00;
  RaidManager_o **ppCVar2;
  NFFDIPBFJHP_o *__this_01;
  NFFDIPBFJHP_o **ppNVar3;
  PlayerData_o *__this_02;
  PlayerData_o **ppEVar4;
  CFMDGLMCNIL_o *__this_03;
  CFMDGLMCNIL_o **ppCVar5;
  RaidPlayerInfoHelper_o *__this_04;
  RaidPlayerInfoHelper_o **ppPVar6;
  RaidLeaderboardsManager_o *__this_05;
  RaidLeaderboardsManager_o **ppPVar7;
  RaidQuestsManager_o *__this_06;
  RaidQuestsManager_o **ppGVar8;
  HCKCBFOGMMJ_o *__this_07;
  HCKCBFOGMMJ_o **ppHVar9;
  MCEIBCKPIAD_o *__this_08;
  MCEIBCKPIAD_o **ppMVar10;
  RaidClansManager_o *__this_09;
  RaidClansManager_o **ppEVar11;
  RaidPaymentService_o *__this_10;
  RaidPaymentService_o **ppAVar12;
  KCJMBDCBIIF_o *__this_11;
  KCJMBDCBIIF_o **ppKVar13;
  ChatManager_o *__this_12;
  ChatManager_o **ppAVar14;
  EGMONPGHHDP_o *__this_13;
  EGMONPGHHDP_o **ppEVar15;
  HJPEKDOPBHN_StaticFields *pHVar16;
  
  if ((DAT_045684b2 & 1) == 0) {
    FUN_01bab630(&RaidPaymentService_TypeInfo);
    FUN_01bab630(&ChatManager_TypeInfo);
    FUN_01bab630(&CFMDGLMCNIL_TypeInfo);
    FUN_01bab630(&RaidManager_TypeInfo);
    FUN_01bab630(&PlayerData_TypeInfo);
    FUN_01bab630(&RaidClansManager_TypeInfo);
    FUN_01bab630(&EGMONPGHHDP_TypeInfo);
    FUN_01bab630(&RaidQuestsManager_TypeInfo);
    FUN_01bab630(&HCKCBFOGMMJ_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&RaidConfig_TypeInfo);
    FUN_01bab630(&KCJMBDCBIIF_TypeInfo);
    FUN_01bab630(&MCEIBCKPIAD_TypeInfo);
    FUN_01bab630(&NFFDIPBFJHP_TypeInfo);
    FUN_01bab630(&RaidPlayerInfoHelper_TypeInfo);
    FUN_01bab630(&RaidLeaderboardsManager_TypeInfo);
    DAT_045684b2 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pHVar16 = HJPEKDOPBHN_TypeInfo->static_fields;
  if (pHVar16->NKIKDJEPECM != false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pHVar16 = HJPEKDOPBHN_TypeInfo->static_fields;
  }
  pHVar16->NKIKDJEPECM = true;
  __this = (RaidConfig_o *)thunk_FUN_01bda818(RaidConfig_TypeInfo);
  RaidConfig___ctor(__this,(MethodInfo *)0x0);
  ppJVar1 = &HJPEKDOPBHN_TypeInfo->static_fields->GALCGHPGAIB;
  *ppJVar1 = __this;
  thunk_FUN_01c20e04(ppJVar1,__this);
  __this_00 = (RaidManager_o *)thunk_FUN_01bda818(RaidManager_TypeInfo);
  RaidManager___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar2 = &HJPEKDOPBHN_TypeInfo->static_fields->JJCKLFCCDKC;
  *ppCVar2 = __this_00;
  thunk_FUN_01c20e04(ppCVar2,__this_00);
  __this_01 = (NFFDIPBFJHP_o *)thunk_FUN_01bda818(NFFDIPBFJHP_TypeInfo);
  NFFDIPBFJHP___ctor(__this_01,(MethodInfo *)0x0);
  ppNVar3 = &HJPEKDOPBHN_TypeInfo->static_fields->HIJGAAGBIIM;
  *ppNVar3 = __this_01;
  thunk_FUN_01c20e04(ppNVar3,__this_01);
  __this_02 = (PlayerData_o *)thunk_FUN_01bda818(PlayerData_TypeInfo);
  PlayerData___ctor(__this_02,(MethodInfo *)0x0);
  ppEVar4 = &HJPEKDOPBHN_TypeInfo->static_fields->MIJBAIOPKEC;
  *ppEVar4 = __this_02;
  thunk_FUN_01c20e04(ppEVar4,__this_02);
  __this_03 = (CFMDGLMCNIL_o *)thunk_FUN_01bda818(CFMDGLMCNIL_TypeInfo);
  CFMDGLMCNIL___ctor(__this_03,(MethodInfo *)0x0);
  ppCVar5 = &HJPEKDOPBHN_TypeInfo->static_fields->BICPIBOGEMA;
  *ppCVar5 = __this_03;
  thunk_FUN_01c20e04(ppCVar5,__this_03);
  __this_04 = (RaidPlayerInfoHelper_o *)thunk_FUN_01bda818(RaidPlayerInfoHelper_TypeInfo);
  RaidPlayerInfoHelper___ctor(__this_04,(MethodInfo *)0x0);
  ppPVar6 = &HJPEKDOPBHN_TypeInfo->static_fields->ODAGGAFNJKB;
  *ppPVar6 = __this_04;
  thunk_FUN_01c20e04(ppPVar6,__this_04);
  __this_05 = (RaidLeaderboardsManager_o *)thunk_FUN_01bda818(RaidLeaderboardsManager_TypeInfo);
  RaidLeaderboardsManager___ctor(__this_05,(MethodInfo *)0x0);
  ppPVar7 = &HJPEKDOPBHN_TypeInfo->static_fields->OABNFJDEBDG;
  *ppPVar7 = __this_05;
  thunk_FUN_01c20e04(ppPVar7,__this_05);
  __this_06 = (RaidQuestsManager_o *)thunk_FUN_01bda818(RaidQuestsManager_TypeInfo);
  RaidQuestsManager___ctor(__this_06,(MethodInfo *)0x0);
  ppGVar8 = &HJPEKDOPBHN_TypeInfo->static_fields->FMAOIMEMFIM;
  *ppGVar8 = __this_06;
  thunk_FUN_01c20e04(ppGVar8,__this_06);
  __this_07 = (HCKCBFOGMMJ_o *)thunk_FUN_01bda818(HCKCBFOGMMJ_TypeInfo);
  HCKCBFOGMMJ___ctor(__this_07,(MethodInfo *)0x0);
  ppHVar9 = &HJPEKDOPBHN_TypeInfo->static_fields->CLCJDMCNJCJ;
  *ppHVar9 = __this_07;
  thunk_FUN_01c20e04(ppHVar9,__this_07);
  __this_08 = (MCEIBCKPIAD_o *)thunk_FUN_01bda818(MCEIBCKPIAD_TypeInfo);
  MCEIBCKPIAD___ctor(__this_08,(MethodInfo *)0x0);
  ppMVar10 = &HJPEKDOPBHN_TypeInfo->static_fields->HJENHAFJCEK;
  *ppMVar10 = __this_08;
  thunk_FUN_01c20e04(ppMVar10,__this_08);
  __this_09 = (RaidClansManager_o *)thunk_FUN_01bda818(RaidClansManager_TypeInfo);
  RaidClansManager___ctor(__this_09,(MethodInfo *)0x0);
  ppEVar11 = &HJPEKDOPBHN_TypeInfo->static_fields->GBIANJOGFPB;
  *ppEVar11 = __this_09;
  thunk_FUN_01c20e04(ppEVar11,__this_09);
  __this_10 = (RaidPaymentService_o *)thunk_FUN_01bda818(RaidPaymentService_TypeInfo);
  RaidPaymentService___ctor(__this_10,(MethodInfo *)0x0);
  ppAVar12 = &HJPEKDOPBHN_TypeInfo->static_fields->JCLHALJBHCD;
  *ppAVar12 = __this_10;
  thunk_FUN_01c20e04(ppAVar12,__this_10);
  __this_11 = (KCJMBDCBIIF_o *)thunk_FUN_01bda818(KCJMBDCBIIF_TypeInfo);
  KCJMBDCBIIF___ctor(__this_11,(MethodInfo *)0x0);
  ppKVar13 = &HJPEKDOPBHN_TypeInfo->static_fields->NAOOEGOOACF;
  *ppKVar13 = __this_11;
  thunk_FUN_01c20e04(ppKVar13,__this_11);
  __this_12 = (ChatManager_o *)thunk_FUN_01bda818(ChatManager_TypeInfo);
  ChatManager___ctor(__this_12,(MethodInfo *)0x0);
  ppAVar14 = &HJPEKDOPBHN_TypeInfo->static_fields->GLEJDICJDEE;
  *ppAVar14 = __this_12;
  thunk_FUN_01c20e04(ppAVar14,__this_12);
  __this_13 = (EGMONPGHHDP_o *)thunk_FUN_01bda818(EGMONPGHHDP_TypeInfo);
  EGMONPGHHDP___ctor(__this_13,(MethodInfo *)0x0);
  ppEVar15 = &HJPEKDOPBHN_TypeInfo->static_fields->JPHBJJPHCPC;
  *ppEVar15 = __this_13;
  thunk_FUN_01c20e04(ppEVar15,__this_13);
  return;
}

