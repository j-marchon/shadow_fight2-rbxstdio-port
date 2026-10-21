// TypeDefIndex 1549
// Namespace: 
// public static class OOBBAGLCFPF
// Fields:
//   private const int HNMLNAEJEOG = -10000;

// ===== public static bool IGOCIGBDBEI(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9950]
// OOBBAGLCFPF$$IGOCIGBDBEI @ RVA 0x31A9950

bool OOBBAGLCFPF__IGOCIGBDBEI(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  float fVar2;
  
  iVar1 = OOBBAGLCFPF__FKFDENOLEKK(IHODMKCBNKJ,method);
  fVar2 = OOBBAGLCFPF__OECPILPMHCA(IHODMKCBNKJ,method_00);
  return (float)iVar1 <= fVar2;
}


// ===== public static long KLIMJDLDMCI(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9A78]
// OOBBAGLCFPF$$KLIMJDLDMCI @ RVA 0x31A9A78

int64_t OOBBAGLCFPF__KLIMJDLDMCI(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  
  if ((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
     (pPVar1 = (IHODMKCBNKJ->fields).LBKLNIPHGMM, pPVar1 != (PGICCMFLDPI_o *)0x0)) {
    return (IHODMKCBNKJ->fields).IKNCNGMNPPK + (pPVar1->fields).GDKPGIBMFPA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool IFFNMNFGOII(AADKBCFCLKK IIPPMAOIKHB)  [RVA 0x31A9AA0]
// OOBBAGLCFPF$$IFFNMNFGOII @ RVA 0x31A9AA0

bool OOBBAGLCFPF__IFFNMNFGOII(AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  KDADMJGPAOM_o *pKVar3;
  float fVar4;
  
  bVar1 = false;
  if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
    pKVar3 = (IIPPMAOIKHB->fields).LHFLMBNKPHF;
    if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pKVar3->fields).PDGEHKCPGDK < 1) {
      iVar2 = OOBBAGLCFPF__FKFDENOLEKK(IIPPMAOIKHB,method);
      fVar4 = OOBBAGLCFPF__OECPILPMHCA(IIPPMAOIKHB,method_00);
      bVar1 = fVar4 < (float)iVar2;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== public static bool LJEHOIFPLJK(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9B24]
// OOBBAGLCFPF$$LJEHOIFPLJK @ RVA 0x31A9B24

bool OOBBAGLCFPF__LJEHOIFPLJK(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  bool bVar1;
  SFRequestSender_o *__this;
  PGICCMFLDPI_o *pPVar2;
  long lVar3;
  
  if (IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) {
    pPVar2 = (IHODMKCBNKJ->fields).FAEDHKAJJNK;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      bVar1 = false;
    }
    else {
      lVar3 = (pPVar2->fields).GDKPGIBMFPA;
      __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this == (SFRequestSender_o *)0x0) ||
         (pPVar2 = SFRequestSender__MPBLBEGCAKP(__this,(MethodInfo *)0x0),
         pPVar2 == (PGICCMFLDPI_o *)0x0)) goto LAB_032a9b70;
      bVar1 = lVar3 - (pPVar2->fields).GDKPGIBMFPA < 1;
    }
    return bVar1;
  }
LAB_032a9b70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void KDJGNPFFBDL(AADKBCFCLKK DBBIOFNFOCI)  [RVA 0x31A9B74]
// OOBBAGLCFPF$$KDJGNPFFBDL @ RVA 0x31A9B74

void OOBBAGLCFPF__KDJGNPFFBDL(AADKBCFCLKK_o *DBBIOFNFOCI,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar1;
  Il2CppObject *message;
  MethodInfo *extraout_x1;
  KDADMJGPAOM_o *pKVar2;
  PGICCMFLDPI_o *pPVar3;
  undefined1 local_50 [4];
  int32_t local_4c;
  int64_t local_48;
  
  if ((DAT_04566b2a & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_14858/*"Warning: has no boss!!!"*/);
    FUN_01bab630(&StringLiteral_16764/*"boss_cur_hp:     "*/);
    FUN_01bab630(&StringLiteral_18258/*"finished:        "*/);
    FUN_01bab630(&StringLiteral_18136/*"expire_time:     "*/);
    FUN_01bab630(&StringLiteral_16669/*"battle_id:       "*/);
    FUN_01bab630(&StringLiteral_19621/*"max_duration:    "*/);
    FUN_01bab630(&StringLiteral_21211/*"start_time:      "*/);
    FUN_01bab630(&StringLiteral_16765/*"boss_id:         "*/);
    FUN_01bab630(&StringLiteral_5865/*"Error dump battle info, cause it is NULL"*/);
    FUN_01bab630(&StringLiteral_18137/*"expire_time:     NULL"*/);
    DAT_04566b2a = 1;
    method = extraout_x1;
  }
  local_4c = 0;
  local_50[0] = 0;
  if (DBBIOFNFOCI == (AADKBCFCLKK_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_5865/*"Error dump battle info, cause it is NULL"*/,(MethodInfo *)0x0);
    return;
  }
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  local_48 = (DBBIOFNFOCI->fields).AMKHEHFFAKJ;
  pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_16669/*"battle_id:       "*/,pSVar1,(MethodInfo *)0x0);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
    pKVar2 = (DBBIOFNFOCI->fields).LHFLMBNKPHF;
    pSVar1 = StringLiteral_14858/*"Warning: has no boss!!!"*/;
    if (pKVar2 != (KDADMJGPAOM_o *)0x0) {
      local_4c = (pKVar2->fields).IILCHFKCEEH;
      pSVar1 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_16765/*"boss_id:         "*/,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      pKVar2 = (DBBIOFNFOCI->fields).LHFLMBNKPHF;
      if (pKVar2 == (KDADMJGPAOM_o *)0x0) goto LAB_032a9efc;
      local_4c = (pKVar2->fields).PDGEHKCPGDK;
      pSVar1 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_16764/*"boss_cur_hp:     "*/,pSVar1,(MethodInfo *)0x0);
    }
    System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
    pPVar3 = (DBBIOFNFOCI->fields).LBKLNIPHGMM;
    if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
      local_48 = (pPVar3->fields).GDKPGIBMFPA;
      pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_21211/*"start_time:      "*/,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      local_48 = (DBBIOFNFOCI->fields).IKNCNGMNPPK;
      pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_19621/*"max_duration:    "*/,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      local_50[0] = (DBBIOFNFOCI->fields).IOLELGMBJFL;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = System_Boolean__ToString(SUB81(local_50,0),(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_18258/*"finished:        "*/,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      pPVar3 = (DBBIOFNFOCI->fields).FAEDHKAJJNK;
      pSVar1 = StringLiteral_18137/*"expire_time:     NULL"*/;
      if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
        local_48 = (pPVar3->fields).GDKPGIBMFPA;
        pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
        pSVar1 = System_String__Concat(StringLiteral_18136/*"expire_time:     "*/,pSVar1,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      message = (Il2CppObject *)
                (*(__this->klass->vtable)._3_ToString.methodPtr)
                          (__this,(__this->klass->vtable)._3_ToString.method);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032a9efc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EJBFAOJGGNB(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9F00]
// OOBBAGLCFPF$$EJBFAOJGGNB @ RVA 0x31A9F00

bool OOBBAGLCFPF__EJBFAOJGGNB(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  bool bVar1;
  SFRequestSender_o *__this;
  PGICCMFLDPI_o *pPVar2;
  int64_t iVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar4;
  
  __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this != (SFRequestSender_o *)0x0) &&
     (pPVar2 = SFRequestSender__MPBLBEGCAKP(__this,(MethodInfo *)0x0), pPVar2 != (PGICCMFLDPI_o *)0x0))
  {
    lVar4 = (pPVar2->fields).GDKPGIBMFPA;
    iVar3 = OOBBAGLCFPF__ECMGIIFNEDE(IHODMKCBNKJ,method_00);
    if (lVar4 < iVar3) {
      bVar1 = false;
    }
    else {
      iVar3 = OOBBAGLCFPF__KLIMJDLDMCI(IHODMKCBNKJ,method_01);
      bVar1 = lVar4 <= iVar3;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long ACNOPBOADGE(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9FE4]
// OOBBAGLCFPF$$ACNOPBOADGE @ RVA 0x31A9FE4

int64_t OOBBAGLCFPF__ACNOPBOADGE(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  int64_t iVar1;
  RaidConfig_o *__this;
  HJEODECHNDG_o *pHVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b2b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566b2b = 1;
    method = extraout_x1;
  }
  iVar1 = OOBBAGLCFPF__EMCFJLGHAOE(IHODMKCBNKJ,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this != (RaidConfig_o *)0x0) &&
     (pHVar2 = RaidConfig__KAPJBGIIHAA(__this,(MethodInfo *)0x0), pHVar2 != (HJEODECHNDG_o *)0x0))
  {
    return iVar1 - (pHVar2->fields)._PJHAOAKJMLG_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int FKFDENOLEKK(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9984]
// OOBBAGLCFPF$$FKFDENOLEKK @ RVA 0x31A9984

int32_t OOBBAGLCFPF__FKFDENOLEKK(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  NODLJPNGNBG_o *pNVar1;
  
  if ((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
     (pNVar1 = RaidManager__AFHLHFMLNEO
                         ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                          (IHODMKCBNKJ->fields).MPAIPMANDEO,(MethodInfo *)0x0),
     pNVar1 != (NODLJPNGNBG_o *)0x0)) {
    return (pNVar1->fields).LINGIJDCLLC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float OECPILPMHCA(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A99AC]
// OOBBAGLCFPF$$OECPILPMHCA @ RVA 0x31A99AC

float OOBBAGLCFPF__OECPILPMHCA(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  int32_t iVar1;
  CNLGMNIEGFG_o *pCVar2;
  ModelParameters_o *pPVar3;
  MethodInfo *extraout_x1;
  KDADMJGPAOM_o *pKVar4;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar5;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_04566b2c & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566b2c = 1;
    method = extraout_x1;
  }
  if ((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
     (pKVar4 = (IHODMKCBNKJ->fields).LHFLMBNKPHF, pKVar4 != (KDADMJGPAOM_o *)0x0)) {
    iVar1 = (pKVar4->fields).IILCHFKCEEH;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
    }
    pCVar2 = GameUtils__MJDCGINJMOP(iVar1,false,(MethodInfo *)0x0);
    if (pCVar2 == (CNLGMNIEGFG_o *)0x0) {
      return 0.0;
    }
    OKBIKHHKOEN = (pCVar2->fields).super.MECHOBPGHFJ;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar3 = GameUtils__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
    if (pPVar3 != (ModelParameters_o *)0x0) {
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar3->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
      pCVar5 = (pCVar2->fields).BOOKHNOMHGM;
      if (pCVar5 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
        return (pCVar5->fields).LMBCNLBOPAF * (float)iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool FLMDOPMDKID(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31AA0A0]
// OOBBAGLCFPF$$FLMDOPMDKID @ RVA 0x31AA0A0

bool OOBBAGLCFPF__FLMDOPMDKID(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  NODLJPNGNBG_o *pNVar5;
  int64_t iVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  KDADMJGPAOM_o *pKVar7;
  ICBMOMGINFH_o *pIVar8;
  float fVar9;
  
  if (IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) {
    pNVar5 = RaidManager__AFHLHFMLNEO
                       ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                        (IHODMKCBNKJ->fields).MPAIPMANDEO,(MethodInfo *)0x0);
    if ((pNVar5 == (NODLJPNGNBG_o *)0x0) ||
       (pKVar7 = (IHODMKCBNKJ->fields).LHFLMBNKPHF, pKVar7 == (KDADMJGPAOM_o *)0x0)) {
LAB_032aa194:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar8 = (pNVar5->fields).PMMFPJJOPKE;
    if ((pKVar7->fields).PDGEHKCPGDK < 1) {
      iVar4 = OOBBAGLCFPF__FKFDENOLEKK(IHODMKCBNKJ,method_00);
      fVar9 = OOBBAGLCFPF__OECPILPMHCA(IHODMKCBNKJ,method_01);
      bVar3 = (float)iVar4 <= fVar9;
      method_02 = extraout_x1;
    }
    else {
      bVar3 = false;
      method_02 = method_00;
    }
    iVar6 = OOBBAGLCFPF__EMCFJLGHAOE(IHODMKCBNKJ,method_02);
    if (iVar6 < -9999) {
      pKVar7 = (IHODMKCBNKJ->fields).LHFLMBNKPHF;
      if (pKVar7 == (KDADMJGPAOM_o *)0x0) goto LAB_032aa194;
      bVar1 = 0 < (pKVar7->fields).PDGEHKCPGDK;
    }
    else {
      bVar1 = false;
    }
    bVar2 = OOBBAGLCFPF__LJEHOIFPLJK(IHODMKCBNKJ,method_03);
    OOBBAGLCFPF__EMCFJLGHAOE(IHODMKCBNKJ,method_04);
                    /* try { // try from 032aa15c to 033aa42f has its CatchHandler @ 032aa15c
                       catch() { ... } // from try @ 032aa15c with catch @ 032aa15c
                       catch() { ... } // from try @ 032aa5b0 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aa7d0 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aaa00 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aace0 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aada8 with catch @ 032aa15c
                       catch() { ... } // from try @ 032aaea4 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab0c4 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab17c with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab1bc with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab5e8 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab618 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab630 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab678 with catch @ 032aa15c
                       catch() { ... } // from try @ 032ab6b8 with catch @ 032aa15c */
    if (!(bool)(bVar3 | pIVar8 != (ICBMOMGINFH_o *)0x0 | bVar1) && !bVar2) {
      if ((IHODMKCBNKJ->fields).IOLELGMBJFL == false) {
        return false;
      }
      bVar3 = OOBBAGLCFPF__IFFNMNFGOII(IHODMKCBNKJ,method_05);
      return !bVar3;
    }
  }
  return true;
}


// ===== public static long ECMGIIFNEDE(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31A9F60]
// OOBBAGLCFPF$$ECMGIIFNEDE @ RVA 0x31A9F60

int64_t OOBBAGLCFPF__ECMGIIFNEDE(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  int64_t iVar1;
  RaidConfig_o *__this;
  HJEODECHNDG_o *pHVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b2d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566b2d = 1;
    method = extraout_x1;
  }
  iVar1 = OOBBAGLCFPF__KLIMJDLDMCI(IHODMKCBNKJ,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((__this != (RaidConfig_o *)0x0) &&
     (pHVar2 = RaidConfig__KAPJBGIIHAA(__this,(MethodInfo *)0x0), pHVar2 != (HJEODECHNDG_o *)0x0))
  {
    return iVar1 - (pHVar2->fields)._PJHAOAKJMLG_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long EMCFJLGHAOE(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31AA068]
// OOBBAGLCFPF$$EMCFJLGHAOE @ RVA 0x31AA068

int64_t OOBBAGLCFPF__EMCFJLGHAOE(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  int64_t iVar1;
  SFRequestSender_o *__this;
  PGICCMFLDPI_o *pPVar2;
  
  iVar1 = OOBBAGLCFPF__KLIMJDLDMCI(IHODMKCBNKJ,method);
  __this = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this != (SFRequestSender_o *)0x0) &&
     (pPVar2 = SFRequestSender__MPBLBEGCAKP(__this,(MethodInfo *)0x0), pPVar2 != (PGICCMFLDPI_o *)0x0))
  {
    return iVar1 - (pPVar2->fields).GDKPGIBMFPA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool ECCKBGBDALK(AADKBCFCLKK IIPPMAOIKHB)  [RVA 0x31A9AFC]
// OOBBAGLCFPF$$ECCKBGBDALK @ RVA 0x31A9AFC

bool OOBBAGLCFPF__ECCKBGBDALK(AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  bool bVar1;
  KDADMJGPAOM_o *pKVar2;
  
  bVar1 = false;
  if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
    pKVar2 = (IIPPMAOIKHB->fields).LHFLMBNKPHF;
    if (pKVar2 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (pKVar2->fields).PDGEHKCPGDK < 1;
  }
  return bVar1;
}


// ===== public static int CGAMEAEGLCA(AADKBCFCLKK IHODMKCBNKJ)  [RVA 0x31AA198]
// OOBBAGLCFPF$$CGAMEAEGLCA @ RVA 0x31AA198

int32_t OOBBAGLCFPF__CGAMEAEGLCA(AADKBCFCLKK_o *IHODMKCBNKJ,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  
  if ((IHODMKCBNKJ != (AADKBCFCLKK_o *)0x0) &&
     (pKVar1 = (IHODMKCBNKJ->fields).LHFLMBNKPHF, pKVar1 != (KDADMJGPAOM_o *)0x0)) {
    return (pKVar1->fields).IOJIABMGMGB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

