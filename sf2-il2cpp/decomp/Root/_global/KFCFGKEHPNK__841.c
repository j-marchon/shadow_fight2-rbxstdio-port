// TypeDefIndex 841
// Namespace: 
// public static class KFCFGKEHPNK
// Fields:

// ===== public static void LKMPIPHGNKF(string JJDMDJPNINC)  [RVA 0x3082CFC]
// KFCFGKEHPNK$$LKMPIPHGNKF @ RVA 0x3082CFC

void KFCFGKEHPNK__LKMPIPHGNKF(System_String_o *JJDMDJPNINC,MethodInfo *method)

{
  int32_t AIJPKOCFDJP;
  MethodInfo *method_00;
  
                    /* try { // try from 03182d04 to 03282d07 has its CatchHandler @ 03182d50 */
  AIJPKOCFDJP = BFKOGEBDAEH__CCIALCAAHKG(JJDMDJPNINC,(MethodInfo *)0x0);
                    /* try { // try from 03182d08 to 03282d1b has its CatchHandler @ 03182d58 */
  KFCFGKEHPNK__LKMPIPHGNKF(AIJPKOCFDJP,method_00);
  return;
}


// ===== public static string DJDNNHMCGAE()  [RVA 0x3082ED0]
// KFCFGKEHPNK$$DJDNNHMCGAE @ RVA 0x3082ED0

System_String_o * KFCFGKEHPNK__DJDNNHMCGAE(MethodInfo *method)

{
  EEOMEMBBGNA_o *__this;
  EEGDOGKBLNG_o *__this_00;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566005 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566005 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((__this_00 != (EEGDOGKBLNG_o *)0x0) &&
     (PEJIFIIDFMM = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0),
     __this != (EEOMEMBBGNA_o *)0x0)) {
    pMVar1 = EEOMEMBBGNA__MPCGKMBAHHO(__this,PEJIFIIDFMM,(MethodInfo *)0x0);
    if (pMVar1 != (MGDJPGGPDJI_o *)0x0) {
      pSVar2 = DKDMBPOCAJL__JHDLBBNGEGA((pMVar1->fields).BDPMJNBHKIJ,(MethodInfo *)0x0);
      return pSVar2;
    }
    return (System_String_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool OEMIEJCOCDI()  [RVA 0x3082F6C]
// KFCFGKEHPNK$$OEMIEJCOCDI @ RVA 0x3082F6C

bool KFCFGKEHPNK__OEMIEJCOCDI(MethodInfo *method)

{
  bool bVar1;
  EEOMEMBBGNA_o *pEVar2;
  EEGDOGKBLNG_o *__this;
  int64_t FKIGDGJPIAC;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  
  if ((DAT_04566006 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_4855/*"CreateClanRaid"*/);
    DAT_04566006 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
    PBNPKBJKFHE = (pEVar2->fields).MICFEIBNOLM;
    if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
      return false;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this != (EEGDOGKBLNG_o *)0x0) {
      FKIGDGJPIAC = EEGDOGKBLNG__APCMGOCHMGC(__this,(MethodInfo *)0x0);
      bVar1 = DOCPIHOLNOA__BJBGLBAEIJB(PBNPKBJKFHE,StringLiteral_4855/*"CreateClanRaid"*/,FKIGDGJPIAC,(MethodInfo *)0x0)
      ;
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EECLBEHBHFI(IKEPNHIAEHO AIJPKOCFDJP)  [RVA 0x3083028]
// KFCFGKEHPNK$$EECLBEHBHFI @ RVA 0x3083028

void KFCFGKEHPNK__EECLBEHBHFI(int32_t AIJPKOCFDJP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar4;
  LPAPAMPGDFN_o *pLVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04566007 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566007 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_02;
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar5 = (pAVar4->fields).LMCDOMHENMC, pLVar5 != (LPAPAMPGDFN_o *)0x0)) {
    if (((pLVar5->fields).AMIMEMOELHE != 0x32) ||
       (bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(AIJPKOCFDJP,method), bVar1)) {
      return;
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      pPVar6 = (pNVar2->fields).QuestParameters;
      pSVar3 = BFKOGEBDAEH__GKMAFGODLLG(AIJPKOCFDJP,(MethodInfo *)0x0);
      if (pPVar6 != (PKHMIGFEJCL_o *)0x0) {
        ppSVar7 = &(pPVar6->fields).GHOHAHIJJJN;
        *ppSVar7 = pSVar3;
        thunk_FUN_01c20e04(ppSVar7,pSVar3);
        pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x36,(MethodInfo *)0x0);
          *ppSVar7 = StringLiteral_1/*""*/;
          thunk_FUN_01c20e04(ppSVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CJFHNCGHAPF(ClanLogoImage GPPDAEOOLLN, string NEJHIEOHMCF, int OHLDDIANEPE = 0, float JKOJPEKLBCI = 1)  [RVA 0x3083254]
// KFCFGKEHPNK$$CJFHNCGHAPF @ RVA 0x3083254

void KFCFGKEHPNK__CJFHNCGHAPF
               (ClanLogoImage_o *GPPDAEOOLLN,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
               float JKOJPEKLBCI,MethodInfo *method)

{
  UnityEngine_Transform_o *transform;
  
  if (GPPDAEOOLLN != (ClanLogoImage_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)GPPDAEOOLLN,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(transform,JKOJPEKLBCI,(MethodInfo *)0x0);
    ClanLogoImage__Refresh(GPPDAEOOLLN,NEJHIEOHMCF,OHLDDIANEPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static ClanLogoImage LEIGOOFFFPE(Transform ODNJEHJPBGA, OJEHKJHEBID PBNPKBJKFHE, bool KLJCGIAILPD = False, float JKOJPEKLBCI = 1)  [RVA 0x30832AC]
// KFCFGKEHPNK$$LEIGOOFFFPE @ RVA 0x30832AC

ClanLogoImage_o *
KFCFGKEHPNK__LEIGOOFFFPE
          (UnityEngine_Transform_o *ODNJEHJPBGA,OJEHKJHEBID_o *PBNPKBJKFHE,bool KLJCGIAILPD,
          float JKOJPEKLBCI,MethodInfo *method)

{
  ClanLogoImage_o *pCVar1;
  int32_t OHLDDIANEPE;
  
  if ((DAT_04566008 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566008 = 1;
  }
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    if (KLJCGIAILPD) {
      OHLDDIANEPE = (PBNPKBJKFHE->fields).GPDALMOAKGG;
    }
    else {
      OHLDDIANEPE = 0;
    }
    pCVar1 = KFCFGKEHPNK__LEIGOOFFFPE
                       (ODNJEHJPBGA,(PBNPKBJKFHE->fields).MMIHELOLFPP,OHLDDIANEPE,JKOJPEKLBCI,method
                       );
    return pCVar1;
  }
  pCVar1 = KFCFGKEHPNK__LEIGOOFFFPE(ODNJEHJPBGA,StringLiteral_1/*""*/,0,1.0,method);
  return pCVar1;
}


// ===== public static float IJLDCOOMEBN(int BLEOKMIDGIK)  [RVA 0x30834FC]
// KFCFGKEHPNK$$IJLDCOOMEBN @ RVA 0x30834FC

float KFCFGKEHPNK__IJLDCOOMEBN(int32_t BLEOKMIDGIK,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  float fVar5;
  
  if ((DAT_04566009 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Item__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566009 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
    pJVar4 = (pJVar2->fields)._LGFNDLOCGPB_k__BackingField;
    fVar5 = 0.0;
    if (pJVar4 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
      __this = (System_Collections_Generic_Dictionary_int__object__o *)(pJVar4->fields).BCEDGEOHECB;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_031835cc;
      bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                        (__this,BLEOKMIDGIK,
                         Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_ContainsKey__
                        );
      fVar5 = 0.0;
      if (bVar1) {
        pIVar3 = System_Collections_Generic_Dictionary<int,_object>__get_Item
                           (__this,BLEOKMIDGIK,
                            Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_get_Item__
                           );
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_031835cc;
        fVar5 = *(float *)((long)&pIVar3[1].klass + 4);
      }
    }
    return fVar5;
  }
LAB_031835cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KAFBLLCOIFP(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x30835D0]
// KFCFGKEHPNK$$KAFBLLCOIFP @ RVA 0x30835D0

/* WARNING: Removing unreachable block (ram,0x03183804) */

bool KFCFGKEHPNK__KAFBLLCOIFP(OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  EEGDOGKBLNG_o *__this;
  int64_t iVar5;
  System_Collections_Generic_IEnumerator_T__o *pSVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  
  if ((DAT_0456600a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_0456600a = 1;
    method = extraout_x1;
  }
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this != (EEGDOGKBLNG_o *)0x0) {
      iVar5 = EEGDOGKBLNG__APCMGOCHMGC(__this,(MethodInfo *)0x0);
      __this_00 = (PBNPKBJKFHE->fields).MABPCBMOECE;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
        pSVar6 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                            Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                           );
        if (pSVar6 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          pSVar9 = pSVar6->klass;
          uVar1._0_1_ = (pSVar9->_2).rank;
          uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                pVVar7 = pSVar9->vtable + *piVar11;
                goto LAB_031836e4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_031836e4:
          bVar4 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
          if ((bVar4 & 1) == 0) {
            bVar4 = 0;
            break;
          }
          pSVar9 = pSVar6->klass;
          uVar2._0_1_ = (pSVar9->_2).rank;
          uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar2;
          if (uVar10 != 0) {
            piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
                pVVar7 = pSVar9->vtable + *piVar11;
                goto LAB_03183744;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,
                                0);
LAB_03183744:
          lVar8 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(long *)(lVar8 + 0x18) != iVar5);
        if (pSVar6 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
          pSVar9 = pSVar6->klass;
          uVar3._0_1_ = (pSVar9->_2).rank;
          uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_IDisposable_TypeInfo) {
                pVVar7 = pSVar9->vtable + *piVar11;
                goto LAB_031837d4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_IDisposable_TypeInfo,0);
LAB_031837d4:
          (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
        }
        goto LAB_031837e4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar4 = 0;
LAB_031837e4:
  return (bool)(bVar4 & 1);
}


// ===== public static int OHJCOEOKFLG(NLFLMJPNOLF NLOFDAJCIML)  [RVA 0x30838C0]
// KFCFGKEHPNK$$OHJCOEOKFLG @ RVA 0x30838C0

int32_t KFCFGKEHPNK__OHJCOEOKFLG(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  int32_t iVar1;
  CNLGMNIEGFG_o *pCVar2;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456600b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    DAT_0456600b = 1;
    method = extraout_x1;
  }
  pCVar2 = KFCFGKEHPNK__FHEIBJBHOKF(NLOFDAJCIML,method);
  iVar1 = 0;
  if (pCVar2 != (CNLGMNIEGFG_o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)
             (*(pCVar2->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (pCVar2,(pCVar2->klass->vtable)._4_NIKCNPMKAFK.method);
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03183950:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((__this->fields)._size < 1) {
      iVar1 = 0;
    }
    else {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03183950;
      iVar1 = *(int32_t *)&pIVar3[6].klass;
    }
  }
  return iVar1;
}


// ===== public static string GFKNDINNDAE(NLFLMJPNOLF NLOFDAJCIML)  [RVA 0x30839C8]
// KFCFGKEHPNK$$GFKNDINNDAE @ RVA 0x30839C8

System_String_o * KFCFGKEHPNK__GFKNDINNDAE(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  CNLGMNIEGFG_o *pCVar1;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar2;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *pHVar3;
  MethodInfo *extraout_x1;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_0456600c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456600c = 1;
    method = extraout_x1;
  }
  pCVar1 = KFCFGKEHPNK__FHEIBJBHOKF(NLOFDAJCIML,method);
  if (pCVar1 == (CNLGMNIEGFG_o *)0x0) {
    return (System_String_o *)0x0;
  }
  __this = (System_Collections_Generic_List_object__o *)
           (*(pCVar1->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                     (pCVar1,(pCVar1->klass->vtable)._4_NIKCNPMKAFK.method);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    if ((__this->fields)._size < 1) {
      return (System_String_o *)0x0;
    }
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       (__this,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    if (pIVar2 != (Il2CppObject *)0x0) {
      KGLJICLJHEL = pIVar2[5].monitor;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      if ((__this_00 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
         (pHVar3 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0),
         pHVar3 != (HBNENINHPGF_o *)0x0)) {
        return (pHVar3->fields)._PGCEKJLODEJ_k__BackingField;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GHLDEKNCIEG(AFFHKININGD FBFPLEFCDOK)  [RVA 0x3083AA8]
// KFCFGKEHPNK$$GHLDEKNCIEG @ RVA 0x3083AA8

System_String_o * KFCFGKEHPNK__GHLDEKNCIEG(AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_0456600d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456600d = 1;
    method = extraout_x1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    OKBIKHHKOEN = (FBFPLEFCDOK->fields).MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    pPVar1 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
      pSVar2 = OFFIONDOEPM__GKOLODJCIOK((pPVar1->fields).NILOEHGNJNL,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)0x0;
}


// ===== public static bool ECJLKNEAMKH(IKEPNHIAEHO AIJPKOCFDJP)  [RVA 0x3083150]
// KFCFGKEHPNK$$ECJLKNEAMKH @ RVA 0x3083150

bool KFCFGKEHPNK__ECJLKNEAMKH(int32_t AIJPKOCFDJP,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar2;
  LPAPAMPGDFN_o *pLVar3;
  
  if ((DAT_0456600e & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456600e = 1;
    method = extraout_x1;
  }
  if (AIJPKOCFDJP == 0) {
    bVar1 = true;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_02;
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
      bVar1 = false;
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (pLVar3 = (pAVar2->fields).LMCDOMHENMC, pLVar3 == (LPAPAMPGDFN_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = 0 < ((pLVar3->fields).AHLHMBIFONA & AIJPKOCFDJP);
    }
  }
  return bVar1;
}


// ===== public static bool PIOIEAEGHCP()  [RVA 0x3083B28]
// KFCFGKEHPNK$$PIOIEAEGHCP @ RVA 0x3083B28

bool KFCFGKEHPNK__PIOIEAEGHCP(MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this;
  EEOMEMBBGNA_o *pEVar2;
  CJFBGEEIPBA_o *__this_00;
  
  if ((DAT_0456600f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456600f = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this != (CHDGOFBHAFI_o *)0x0) {
    bVar1 = CHDGOFBHAFI__BHHNJDDGDHF(__this,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if ((pEVar2 != (EEOMEMBBGNA_o *)0x0) &&
       (__this_00 = (pEVar2->fields).GMNJEBCECDA, __this_00 != (CJFBGEEIPBA_o *)0x0)) {
      bVar1 = CJFBGEEIPBA__HOMIFFIACAC(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool ECJLKNEAMKH(string JJDMDJPNINC)  [RVA 0x3083BC8]
// KFCFGKEHPNK$$ECJLKNEAMKH @ RVA 0x3083BC8

bool KFCFGKEHPNK__ECJLKNEAMKH(System_String_o *JJDMDJPNINC,MethodInfo *method)

{
  bool bVar1;
  int32_t AIJPKOCFDJP;
  MethodInfo *method_00;
  
  AIJPKOCFDJP = BFKOGEBDAEH__CCIALCAAHKG(JJDMDJPNINC,(MethodInfo *)0x0);
  bVar1 = KFCFGKEHPNK__ECJLKNEAMKH(AIJPKOCFDJP,method_00);
  return bVar1;
}


// ===== public static void LKMPIPHGNKF(IKEPNHIAEHO AIJPKOCFDJP)  [RVA 0x3082D10]
// KFCFGKEHPNK$$LKMPIPHGNKF @ RVA 0x3082D10

void KFCFGKEHPNK__LKMPIPHGNKF(int32_t AIJPKOCFDJP,MethodInfo *method)

{
  uint CJNHFNHJHPE;
  EEGDOGKBLNG_o *pEVar1;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  LPAPAMPGDFN_o *pLVar3;
  uint local_24;
  
                    /* try { // try from 03182d24 to 03282d2f has its CatchHandler @ 03182d54 */
  if ((DAT_04566010 & 1) == 0) {
                    /* try { // try from 03182d30 to 03282d6f has its CatchHandler @ 03182cb0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03182d04 with catch @ 03182d50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03182d24 with catch @ 03182d54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03182d08 with catch @ 03182d58
                        */
    FUN_01bab630(&StringLiteral_17504/*"ctt"*/);
    DAT_04566010 = 1;
    method = extraout_x1;
  }
  if (AIJPKOCFDJP == 0) {
    return;
  }
                    /* try { // try from 03182d70 to 03282d87 has its CatchHandler @ 03182dc4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03182d88 to 03282db3 has its CatchHandler @ 03182cb0 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03182db4 to 03282dc3 has its CatchHandler @ 03182dc4 */
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 03182d70 with catch @ 03182dc4
                       catch() { ... } // from try @ 03182db4 with catch @ 03182dc4 */
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar3 = (pAVar2->fields).LMCDOMHENMC, pLVar3 != (LPAPAMPGDFN_o *)0x0)) {
                    /* try { // try from 03182dc8 to 03282dcb has its CatchHandler @ 03182dd4 */
                    /* try { // try from 03182dcc to 03282dd7 has its CatchHandler @ 03182cb0 */
    CJNHFNHJHPE = (pLVar3->fields).AHLHMBIFONA | AIJPKOCFDJP;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03182dc8 with catch @ 03182dd4
                        */
    local_24 = CJNHFNHJHPE;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
       (pLVar3 = (pAVar2->fields).LMCDOMHENMC, pLVar3 != (LPAPAMPGDFN_o *)0x0)) {
      LPAPAMPGDFN__MKACHLMIINH(pLVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (KDDOKHLOKMI_TypeInfo->static_fields->MANGIHDNLPM != false) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (pEVar1 == (EEGDOGKBLNG_o *)0x0) goto LAB_03182ecc;
        EEGDOGKBLNG__IOCIGCHAANI(pEVar1,StringLiteral_17504/*"ctt"*/,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__BBMCMFOPMFN(pEVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03182ecc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static ClanLogoImage LEIGOOFFFPE(Transform ODNJEHJPBGA, string NEJHIEOHMCF, int OHLDDIANEPE = 0, float JKOJPEKLBCI = 1)  [RVA 0x308334C]
// KFCFGKEHPNK$$LEIGOOFFFPE @ RVA 0x308334C

ClanLogoImage_o *
KFCFGKEHPNK__LEIGOOFFFPE
          (UnityEngine_Transform_o *ODNJEHJPBGA,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
          float JKOJPEKLBCI,MethodInfo *method)

{
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  ClanLogoImage_o *__this_00;
  UnityEngine_Transform_o *transform;
  
  if ((DAT_04566011 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ClanLogoImage>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10409/*"Prefabs/Raids/ClanLogoImage"*/);
    DAT_04566011 = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10409/*"Prefabs/Raids/ClanLogoImage"*/,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,ODNJEHJPBGA,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (ClanLogoImage_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this,Method_UnityEngine_GameObject_GetComponent<ClanLogoImage>__),
     __this_00 != (ClanLogoImage_o *)0x0)) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(transform,JKOJPEKLBCI,(MethodInfo *)0x0);
    ClanLogoImage__Refresh(__this_00,NEJHIEOHMCF,OHLDDIANEPE,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static ClanLogoImage LEIGOOFFFPE(Transform ODNJEHJPBGA, EEHFEPPDBHL GMDFNEFPFJH, int OHLDDIANEPE = 0, float JKOJPEKLBCI = 1)  [RVA 0x3083478]
// KFCFGKEHPNK$$LEIGOOFFFPE @ RVA 0x3083478

ClanLogoImage_o *
KFCFGKEHPNK__LEIGOOFFFPE
          (UnityEngine_Transform_o *ODNJEHJPBGA,EEHFEPPDBHL_o *GMDFNEFPFJH,int32_t OHLDDIANEPE,
          float JKOJPEKLBCI,MethodInfo *method)

{
  ClanLogoImage_o *pCVar1;
  System_String_o *NEJHIEOHMCF;
  
  if ((DAT_04566012 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566012 = 1;
  }
  if (GMDFNEFPFJH == (EEHFEPPDBHL_o *)0x0) {
    JKOJPEKLBCI = 1.0;
    OHLDDIANEPE = 0;
    NEJHIEOHMCF = StringLiteral_1/*""*/;
  }
  else {
    NEJHIEOHMCF = (GMDFNEFPFJH->fields).JAAACMPGMKJ;
  }
  pCVar1 = KFCFGKEHPNK__LEIGOOFFFPE(ODNJEHJPBGA,NEJHIEOHMCF,OHLDDIANEPE,JKOJPEKLBCI,method);
  return pCVar1;
}


// ===== public static CNLGMNIEGFG FHEIBJBHOKF(NLFLMJPNOLF NLOFDAJCIML)  [RVA 0x3083954]
// KFCFGKEHPNK$$FHEIBJBHOKF @ RVA 0x3083954

CNLGMNIEGFG_o * KFCFGKEHPNK__FHEIBJBHOKF(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  CNLGMNIEGFG_o *pCVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566013 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566013 = 1;
    method = extraout_x1;
  }
  if (NLOFDAJCIML != (NLFLMJPNOLF_o *)0x0) {
    OILECKFDMDB = (NLOFDAJCIML->fields).IILCHFKCEEH;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    pCVar1 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
    return pCVar1;
  }
  return (CNLGMNIEGFG_o *)0x0;
}


// ===== public static void CJFHNCGHAPF(ClanLogoImage GPPDAEOOLLN, OJEHKJHEBID PBNPKBJKFHE, bool KLJCGIAILPD = False, float JKOJPEKLBCI = 1)  [RVA 0x3083BDC]
// KFCFGKEHPNK$$CJFHNCGHAPF @ RVA 0x3083BDC

void KFCFGKEHPNK__CJFHNCGHAPF
               (ClanLogoImage_o *GPPDAEOOLLN,OJEHKJHEBID_o *PBNPKBJKFHE,bool KLJCGIAILPD,
               float JKOJPEKLBCI,MethodInfo *method)

{
  System_String_o *NEJHIEOHMCF;
  int32_t OHLDDIANEPE;
  EEHFEPPDBHL_o *pEVar1;
  
  if ((DAT_04566014 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566014 = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    JKOJPEKLBCI = 1.0;
    OHLDDIANEPE = 0;
    NEJHIEOHMCF = StringLiteral_1/*""*/;
  }
  else {
    pEVar1 = (PBNPKBJKFHE->fields).MMIHELOLFPP;
    if (pEVar1 == (EEHFEPPDBHL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NEJHIEOHMCF = (pEVar1->fields).JAAACMPGMKJ;
    if (KLJCGIAILPD) {
      OHLDDIANEPE = (PBNPKBJKFHE->fields).GPDALMOAKGG;
    }
    else {
      OHLDDIANEPE = 0;
    }
  }
  KFCFGKEHPNK__CJFHNCGHAPF(GPPDAEOOLLN,NEJHIEOHMCF,OHLDDIANEPE,JKOJPEKLBCI,method);
  return;
}


// ===== public static string GHLDEKNCIEG(NLFLMJPNOLF NLOFDAJCIML)  [RVA 0x3083C78]
// KFCFGKEHPNK$$GHLDEKNCIEG @ RVA 0x3083C78

System_String_o * KFCFGKEHPNK__GHLDEKNCIEG(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  CNLGMNIEGFG_o *FBFPLEFCDOK;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  FBFPLEFCDOK = KFCFGKEHPNK__FHEIBJBHOKF(NLOFDAJCIML,method);
  pSVar1 = KFCFGKEHPNK__GHLDEKNCIEG((AFFHKININGD_o *)FBFPLEFCDOK,method_00);
  return pSVar1;
}


// ===== public static uint FGFOHBLCFKD(int JLAFGLDIFOC)  [RVA 0x3083C88]
// KFCFGKEHPNK$$FGFOHBLCFKD @ RVA 0x3083C88

uint32_t KFCFGKEHPNK__FGFOHBLCFKD(int32_t JLAFGLDIFOC,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *__this;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar3;
  uint32_t uVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566015 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_LDOMJFAAGAB>_GetEnumerator__);
    DAT_04566015 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
    pJVar3 = (pJVar2->fields)._LGFNDLOCGPB_k__BackingField;
    if (pJVar3 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
LAB_03183d98:
      uVar4 = 0x14;
    }
    else {
      __this = (pJVar3->fields).GDIJHLHCEDA;
      if (__this == (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)0x0)
      goto LAB_03183db4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_LDOMJFAAGAB>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_Dispose__
                    );
          goto LAB_03183d98;
        }
        if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while ((ulong)*(uint *)&local_38.fields._current[1].klass != (long)JLAFGLDIFOC);
      uVar4 = *(uint32_t *)&local_38.fields._current[1].monitor;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_LDOMJFAAGAB>_Dispose__
                );
    }
    return uVar4;
  }
LAB_03183db4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

