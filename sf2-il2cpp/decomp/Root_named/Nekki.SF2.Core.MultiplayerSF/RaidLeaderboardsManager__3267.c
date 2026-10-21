// Original name: Nekki.SF2.Core.MultiplayerSF.RaidLeaderboardsManager  (obfuscated PLIIGOCLJDL)
// TypeDefIndex 3267
// Namespace: 
// public class RaidLeaderboardsManager
// Fields:
//   private Action<JCFJFJCKLKG> OLMPIIIPHKF; // 0x10
//   private Action<JCFJFJCKLKG> DAHKCOIPIBD; // 0x18
//   private Action<JCFJFJCKLKG> MNAFCHADIDC; // 0x20
//   private Action<JCFJFJCKLKG> FDHOMPFPAJF; // 0x28
//   private Action<JCFJFJCKLKG> HOGHPJFEPOM; // 0x30
//   private Action<JCFJFJCKLKG> BNBPDOCEPBE; // 0x38
//   private Action<JCFJFJCKLKG> OONPMGENPMD; // 0x40
//   private Action<JCFJFJCKLKG> JIHFBPIOMLM; // 0x48
//   private const int HNDCOFJDGCE = 7000;
//   private const int NKMMLNOFFJK = 5000;
//   public const string ALNDELPCKKG = "RaidMisc.dan";
//   public const string JFNEIOLFOOH = "RaidMisc.dan_pressed";
//   private Dictionary<IFOIPICDFHN, JCFJFJCKLKG> NKPMKDCHLOF; // 0x50
//   private Dictionary<IFOIPICDFHN, JCFJFJCKLKG> FONCNGHPHDG; // 0x58
//   private bool <KDMKAMFOEAI>k__BackingField; // 0x60
//   private IEnumerator JGOFLJJKCPA; // 0x68

// ===== private void GABBJPGLCLK()  [RVA 0x3516FB0]
// RaidLeaderboardsManager$$GABBJPGLCLK @ RVA 0x3516FB0

void RaidLeaderboardsManager__GABBJPGLCLK(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  PlayerData_o *pEVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  
  if ((DAT_04568938 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_MCNOLIHJCHD__);
                    /* try { // try from 03616ff8 to 03716ffb has its CatchHandler @ 0361701c */
    DAT_04568938 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03616ffc to 03716fff has its CatchHandler @ 03617018 */
                    /* try { // try from 03617000 to 03717007 has its CatchHandler @ 036170d0 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03617008 to 0371700b has its CatchHandler @ 03617010 */
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 03616f6c with catch @ 0361700c
                       try { // try from 0361700c to 0371703b has its CatchHandler @ 03616e2c */
                    /* catch() { ... } // from try @ 03617008 with catch @ 03617010 */
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03616ed4 with catch @ 03617014 */
  if (pEVar1 != (PlayerData_o *)0x0) {
                    /* catch() { ... } // from try @ 03616ef4 with catch @ 03617018
                       catch() { ... } // from try @ 03616ffc with catch @ 03617018 */
    IOENJHOKBOE = (pEVar1->fields)._DHPJJLCDAJD_k__BackingField;
                    /* catch() { ... } // from try @ 03616ec4 with catch @ 0361701c
                       catch() { ... } // from try @ 03616ff8 with catch @ 0361701c */
    if (0 < IOENJHOKBOE) {
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 0361703c to 0371703f has its CatchHandler @ 036170bc */
      System_Action<object>___ctor();
      RaidLeaderboardsManager__GPCPNCGBFOM(__this_00,IOENJHOKBOE,2,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar2 = (__this->fields).JIHFBPIOMLM;
    if (pSVar2 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* try { // try from 03617084 to 037170bb has its CatchHandler @ 03617178 */
                    /* WARNING: Could not recover jumptable at 0x03617088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MFBGCDMHHCG(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3517178]
// RaidLeaderboardsManager$$MFBGCDMHHCG @ RVA 0x3517178

void RaidLeaderboardsManager__MFBGCDMHHCG
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *a;
  
                    /* catch() { ... } // from try @ 03617084 with catch @ 03617178
                       catch() { ... } // from try @ 0361713c with catch @ 03617178
                       catch() { ... } // from try @ 03617170 with catch @ 03617178 */
  if ((DAT_04568939 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568939 = 1;
  }
  ppSVar6 = &(__this->fields).JIHFBPIOMLM;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void OJAHHKBMJOH(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3517228]
// RaidLeaderboardsManager$$OJAHHKBMJOH @ RVA 0x3517228

void RaidLeaderboardsManager__OJAHHKBMJOH
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_0456893a & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_0456893a = 1;
  }
  ppSVar6 = &(__this->fields).JIHFBPIOMLM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private string FDJPLCKPMPN(RaidConfig.AEJBILHMFDB.DFCNIHGANOH OJDBABKBAFA)  [RVA 0x35172D8]
// RaidLeaderboardsManager$$FDJPLCKPMPN @ RVA 0x35172D8

System_String_o *
RaidLeaderboardsManager__FDJPLCKPMPN
          (RaidLeaderboardsManager_o *__this,RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *OJDBABKBAFA,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456893b & 1) == 0) {
    FUN_01bab630(&StringLiteral_10925/*"RaidMisc.dan"*/);
    DAT_0456893b = 1;
  }
  if (OJDBABKBAFA != (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
    pSVar1 = OFFIONDOEPM__CNLBHLNMCCI((OJDBABKBAFA->fields).KJAIPLMIAGP,(MethodInfo *)0x0);
    return pSVar1;
  }
  return StringLiteral_10925/*"RaidMisc.dan"*/;
}


// ===== public List<string> INONDJFCPHI(long BIIMFIDNPJP)  [RVA 0x3517334]
// RaidLeaderboardsManager$$INONDJFCPHI @ RVA 0x3517334

System_Collections_Generic_List_string__o *
RaidLeaderboardsManager__INONDJFCPHI(RaidLeaderboardsManager_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  
  if ((DAT_0456893c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10925/*"RaidMisc.dan"*/);
    FUN_01bab630(&StringLiteral_10926/*"RaidMisc.dan_pressed"*/);
    DAT_0456893c = 1;
  }
  pJVar3 = RaidLeaderboardsManager__PDEBCPPCEJP(__this,BIIMFIDNPJP,method);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  pSVar4 = StringLiteral_10925/*"RaidMisc.dan"*/;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (pJVar3 == (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03617548;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_03617548;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = pSVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pSVar4 = StringLiteral_10926/*"RaidMisc.dan_pressed"*/;
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
  }
  else {
    pSVar4 = OFFIONDOEPM__CNLBHLNMCCI((pJVar3->fields).KJAIPLMIAGP,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03617548;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_03617548;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = pSVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pSVar4 = OFFIONDOEPM__CNLBHLNMCCI((pJVar3->fields).HBGDJPCCLAO,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
  }
  if (pSVar5 != (System_String_array *)0x0) {
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = pSVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    return __this_00;
  }
LAB_03617548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string NAJKLJIKOIN(long BIIMFIDNPJP)  [RVA 0x3517688]
// RaidLeaderboardsManager$$NAJKLJIKOIN @ RVA 0x3517688

System_String_o *
RaidLeaderboardsManager__NAJKLJIKOIN(RaidLeaderboardsManager_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456893d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456893d = 1;
  }
  pJVar1 = RaidLeaderboardsManager__PDEBCPPCEJP(__this,BIIMFIDNPJP,method);
  if (pJVar1 != (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
    pSVar2 = OFFIONDOEPM__CNLBHLNMCCI((pJVar1->fields).DCHJFFCOGFB,(MethodInfo *)0x0);
    return pSVar2;
  }
  return StringLiteral_1/*""*/;
}


// ===== private void MCNOLIHJCHD(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x35176F4]
// RaidLeaderboardsManager$$MCNOLIHJCHD @ RVA 0x35176F4

void RaidLeaderboardsManager__MCNOLIHJCHD(RaidLeaderboardsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  JCFJFJCKLKG_o *DKMMBMBMJBO;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *in_x3;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  
  if ((DAT_0456893e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    FUN_01bab630(&StringLiteral_10898/*"RaidLeaderboardsManager::onGetPrevSeasonClansLeaderboard failed"*/);
    FUN_01bab630(&StringLiteral_10894/*"RaidLeaderboardsManager::OnGetPrevSeasonClansLeaderboard, Prev-Clan"*/);
    DAT_0456893e = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    DKMMBMBMJBO = (JCFJFJCKLKG_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    if (DKMMBMBMJBO == (JCFJFJCKLKG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10898/*"RaidLeaderboardsManager::onGetPrevSeasonClansLeaderboard failed"*/,(MethodInfo *)0x0);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (__this_00 == (RaidLeaderboardsManager_o *)0x0) goto LAB_036177f8;
      RaidLeaderboardsManager__LHBOEIOKNJI(__this_00,DKMMBMBMJBO,2,in_x3);
    }
    pSVar1 = (__this->fields).OONPMGENPMD;
    if (pSVar1 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036177f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,DKMMBMBMJBO,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
LAB_036177f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool OMJFPNPGMBJ()  [RVA 0x3517860]
// RaidLeaderboardsManager$$OMJFPNPGMBJ @ RVA 0x3517860

bool RaidLeaderboardsManager__OMJFPNPGMBJ(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._KDMKAMFOEAI_k__BackingField;
}


// ===== public RaidConfig.AEJBILHMFDB.DFCNIHGANOH LPCLGCOCEEA(int BKNFBGIKLNC)  [RVA 0x3517868]
// RaidLeaderboardsManager$$LPCLGCOCEEA @ RVA 0x3517868

RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *
RaidLeaderboardsManager__LPCLGCOCEEA(RaidLeaderboardsManager_o *__this,int32_t BKNFBGIKLNC,MethodInfo *method)

{
  bool bVar1;
  RaidConfig_o *pJVar2;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_00;
  RaidConfig_AEJBILHMFDB_o *pJVar3;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_0456893f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Value__
                );
    DAT_0456893f = 1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar2 == (RaidConfig_o *)0x0) {
LAB_036179b0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar4 = (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
  if ((0 < BKNFBGIKLNC) &&
     (pJVar3 = (pJVar2->fields)._JMEOCLFDHMM_k__BackingField,
     pJVar3 != (RaidConfig_AEJBILHMFDB_o *)0x0)) {
    __this_00 = (pJVar3->fields).BFODFJIGBHE;
    if (__this_00 ==
        (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *)0x0)
    goto LAB_036179b0;
    System_Collections_Generic_Dictionary<uint,_object>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_GetEnumerator__
              );
    do {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<uint,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_MoveNext__
                        );
      pJVar4 = (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)local_50.fields._current.fields.value;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<uint,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_Dispose__
                  );
        return (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
      }
    } while ((uint)local_50.fields._current.fields.key < (uint)BKNFBGIKLNC);
    System_Collections_Generic_Dictionary_Enumerator<uint,_object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_Enumerator<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_Dispose__
              );
  }
  return pJVar4;
}


// ===== private void GKJBIDCCAGA(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3517A28]
// RaidLeaderboardsManager$$GKJBIDCCAGA @ RVA 0x3517A28

void RaidLeaderboardsManager__GKJBIDCCAGA(RaidLeaderboardsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  JCFJFJCKLKG_o *DKMMBMBMJBO;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_04568940 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&StringLiteral_10897/*"RaidLeaderboardsManager::onGetCurSeasonPlayersLeaderboard failed, retrying"*/);
    FUN_01bab630(&StringLiteral_10893/*"RaidLeaderboardsManager::OnGetCurSeasonPlayersLeaderboard Cur-Player"*/);
    DAT_04568940 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    DKMMBMBMJBO = (JCFJFJCKLKG_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    if (DKMMBMBMJBO == (JCFJFJCKLKG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10897/*"RaidLeaderboardsManager::onGetCurSeasonPlayersLeaderboard failed, retrying"*/,(MethodInfo *)0x0);
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0;
      method_00 = Method_System_Nullable<int>__ctor__;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_28,7000,
                 (MethodInfo_27F7F6C *)Method_System_Nullable<int>__ctor__);
      RaidLeaderboardsManager__GBPMMOFJJLJ(__this,(System_Nullable_int__o)local_28,method_00);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (__this_00 == (RaidLeaderboardsManager_o *)0x0) goto LAB_03617b6c;
      RaidLeaderboardsManager__FCKCCJBGGEH(__this_00,DKMMBMBMJBO,1,in_x3);
    }
    pSVar1 = (__this->fields).OLMPIIIPHKF;
    if (pSVar1 != (System_Action_JCFJFJCKLKG__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,DKMMBMBMJBO,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
LAB_03617b6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JCFJFJCKLKG MACEOHOPNGP(IFOIPICDFHN ACCIHBHMFPN)  [RVA 0x3517D58]
// RaidLeaderboardsManager$$MACEOHOPNGP @ RVA 0x3517D58

JCFJFJCKLKG_o *
RaidLeaderboardsManager__MACEOHOPNGP(RaidLeaderboardsManager_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar2;
  JCFJFJCKLKG_o *pJVar3;
  MethodInfo *method_00;
  
  if ((DAT_04568941 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    DAT_04568941 = 1;
  }
  pSVar2 = (__this->fields).FONCNGHPHDG;
  if (pSVar2 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                      );
    if (!bVar1) {
      if (ACCIHBHMFPN == 2) {
        RaidLeaderboardsManager__GABBJPGLCLK(__this,method_00);
      }
      else if (ACCIHBHMFPN == 1) {
        RaidLeaderboardsManager__KIHAOHALAPH(__this,method_00);
      }
      return (JCFJFJCKLKG_o *)0x0;
    }
    pSVar2 = (__this->fields).FONCNGHPHDG;
    if (pSVar2 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      pJVar3 = (JCFJFJCKLKG_o *)
               System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          ACCIHBHMFPN,
                          Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BOLHMBIICAD(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3517EF0]
// RaidLeaderboardsManager$$BOLHMBIICAD @ RVA 0x3517EF0

void RaidLeaderboardsManager__BOLHMBIICAD
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *a;
  
  if ((DAT_04568942 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568942 = 1;
  }
  ppSVar6 = &(__this->fields).DAHKCOIPIBD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void NACEHKJPOMK(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3517FA0]
// RaidLeaderboardsManager$$NACEHKJPOMK @ RVA 0x3517FA0

void RaidLeaderboardsManager__NACEHKJPOMK
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_04568943 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568943 = 1;
  }
  ppSVar6 = &(__this->fields).DAHKCOIPIBD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void AJDFKNGFMMF(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3518050]
// RaidLeaderboardsManager$$AJDFKNGFMMF @ RVA 0x3518050

void RaidLeaderboardsManager__AJDFKNGFMMF
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *a;
  
  if ((DAT_04568944 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568944 = 1;
  }
  ppSVar6 = &(__this->fields).FDHOMPFPAJF;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void MJFIDBMOKCM()  [RVA 0x3518100]
// RaidLeaderboardsManager$$MJFIDBMOKCM @ RVA 0x3518100

void RaidLeaderboardsManager__MJFIDBMOKCM(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  PlayerData_o *pEVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  
  if ((DAT_04568962 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_FLCFHCNPFLF__);
    DAT_04568962 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (PlayerData_o *)0x0) {
    IOENJHOKBOE = (pEVar1->fields)._DHPJJLCDAJD_k__BackingField;
    if (0 < IOENJHOKBOE) {
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      RaidLeaderboardsManager__GPCPNCGBFOM(__this_00,IOENJHOKBOE,1,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar2 = (__this->fields).FDHOMPFPAJF;
    if (pSVar2 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03617ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string POKFLHLAHNM(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x3518104]
// RaidLeaderboardsManager$$POKFLHLAHNM @ RVA 0x3518104

System_String_o *
RaidLeaderboardsManager__POKFLHLAHNM(RaidLeaderboardsManager_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  RaidLeaderboardsManager_o *__this_00;
  System_String_o *pSVar1;
  GKLPDMLELJF_o *pGVar2;
  
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
    __this_00 = (RaidLeaderboardsManager_o *)
                RaidLeaderboardsManager__PDEBCPPCEJP(__this,(pGVar2->fields).ANAJGHJEEOC,method);
    pSVar1 = RaidLeaderboardsManager__FDJPLCKPMPN
                       (__this_00,(RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)__this_00,method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HBBDJMCMNDE()  [RVA 0x351812C]
// RaidLeaderboardsManager$$HBBDJMCMNDE @ RVA 0x351812C

void RaidLeaderboardsManager__HBBDJMCMNDE(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar1;
  
  if ((DAT_04568945 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_set_Item__)
    ;
    DAT_04568945 = 1;
  }
  pSVar1 = (__this->fields).FONCNGHPHDG;
  if (pSVar1 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,1,(Il2CppObject *)0x0
               ,Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_set_Item__);
    pSVar1 = (__this->fields).FONCNGHPHDG;
    if (pSVar1 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_object>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,2,
                 (Il2CppObject *)0x0,
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_set_Item__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IONLLAFFHFO(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x351819C]
// RaidLeaderboardsManager$$IONLLAFFHFO @ RVA 0x351819C

void RaidLeaderboardsManager__IONLLAFFHFO
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *a;
  
  if ((DAT_04568946 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568946 = 1;
  }
  ppSVar6 = &(__this->fields).OONPMGENPMD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void .ctor()  [RVA 0x351824C]
// RaidLeaderboardsManager$$.ctor @ RVA 0x351824C

void RaidLeaderboardsManager___ctor(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__o **ppSVar1;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar2;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_JCFJFJCKLKG__o *pSVar4;
  
  if ((DAT_04568947 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_AACKEMPJLGA__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_AOMIBPMMJMA__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_BEPDJIOJPLN__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_EPCFMPGEDGE__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_GKLLCCCOMNI__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_GPILAHPCECJ__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_LAMOEJGKDFO__);
    FUN_01bab630(&Method_PLIIGOCLJDL_<>c_NPIMHBIIBAG__);
    FUN_01bab630(&RaidLeaderboardsManager_<>c_TypeInfo);
    DAT_04568947 = 1;
    method = extraout_x1;
  }
  if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RaidLeaderboardsManager_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_0;
  if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RaidLeaderboardsManager_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (RaidLeaderboardsManager_o *)0x0) {
    (__this->fields).OLMPIIIPHKF = pSVar4;
    thunk_FUN_01c20e04(&__this->fields,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_1;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_1;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).DAHKCOIPIBD;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_2;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_2;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).MNAFCHADIDC;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_3;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_3;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).FDHOMPFPAJF;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_4;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_4;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).HOGHPJFEPOM;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_5;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_5;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).BNBPDOCEPBE;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_6;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_6;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).OONPMGENPMD;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_7;
    if (pSVar4 == (System_Action_JCFJFJCKLKG__o *)0x0) {
      if ((RaidLeaderboardsManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_JCFJFJCKLKG__o *)
               thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &RaidLeaderboardsManager_<>c_TypeInfo->static_fields->__9__35_7;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).JIHFBPIOMLM;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    pSVar2 = (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>__ctor__);
    ppSVar3 = &(__this->fields).NKPMKDCHLOF;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pSVar2 = (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>__ctor__);
    ppSVar3 = &(__this->fields).FONCNGHPHDG;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._KDMKAMFOEAI_k__BackingField = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<string> FKNGMLAKOOC(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x35187D0]
// RaidLeaderboardsManager$$FKNGMLAKOOC @ RVA 0x35187D0

System_Collections_Generic_List_string__o *
RaidLeaderboardsManager__FKNGMLAKOOC(RaidLeaderboardsManager_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  GKLPDMLELJF_o *pGVar5;
  System_String_array *pSVar6;
  
  if ((DAT_04568948 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_15914/*"_1"*/);
    DAT_04568948 = 1;
  }
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar5 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar5 != (GKLPDMLELJF_o *)0x0)) {
    pJVar3 = RaidLeaderboardsManager__PDEBCPPCEJP(__this,(pGVar5->fields).ANAJGHJEEOC,method);
    __this_00 = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,2,
               Method_System_Collections_Generic_List<string>__ctor__);
    if (pJVar3 == (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
      return __this_00;
    }
    pSVar4 = OFFIONDOEPM__CNLBHLNMCCI((pJVar3->fields).DCHJFFCOGFB,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = pSVar4;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,pSVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = System_String__Concat(pSVar4,StringLiteral_15914/*"_1"*/,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar6 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar6 != (System_String_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = pSVar4;
            thunk_FUN_01c20e04();
            return __this_00;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RaidConfig.AEJBILHMFDB.DFCNIHGANOH PDEBCPPCEJP(long BIIMFIDNPJP)  [RVA 0x351754C]
// RaidLeaderboardsManager$$PDEBCPPCEJP @ RVA 0x351754C

RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *
RaidLeaderboardsManager__PDEBCPPCEJP(RaidLeaderboardsManager_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *__this_00;
  RaidLeaderboardsManager_o *__this_01;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar5;
  MethodInfo *method_00;
  int32_t BKNFBGIKLNC;
  int index;
  int iVar6;
  
  if ((DAT_04568949 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_04568949 = 1;
  }
  pSVar3 = (__this->fields).FONCNGHPHDG;
  if (pSVar3 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,1,
                       Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                      );
    if (!bVar2) {
      return (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
    }
    pSVar3 = (__this->fields).FONCNGHPHDG;
    if (pSVar3 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      pIVar4 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,1,
                          Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                         );
      if (pIVar4 == (Il2CppObject *)0x0) {
        return (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
      }
      __this_00 = pIVar4[2].klass;
      if (__this_00 != (Il2CppClass *)0x0) {
        BKNFBGIKLNC = 0;
        index = 0;
        iVar6 = -1;
        do {
          if (*(int *)&(__this_00->_1).namespaze <= index) {
            return (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
          }
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__;
          __this_01 = (RaidLeaderboardsManager_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                                 (MethodInfo_295F6AC *)
                                 Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__
                                );
          if (__this_01 == (RaidLeaderboardsManager_o *)0x0) break;
          iVar1 = *(int *)&(__this_01->fields).MNAFCHADIDC;
          if (iVar1 != iVar6) {
            BKNFBGIKLNC = index + 1;
          }
          if ((__this_01->fields).DAHKCOIPIBD == (System_Action_JCFJFJCKLKG__o *)BIIMFIDNPJP) {
            if (iVar1 < 1) {
              return (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
            }
            pJVar5 = RaidLeaderboardsManager__LPCLGCOCEEA(__this_01,BKNFBGIKLNC,method_00);
            return pJVar5;
          }
          __this_00 = pIVar4[2].klass;
          index = index + 1;
          iVar6 = iVar1;
        } while (__this_00 != (Il2CppClass *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJAILEHJLKB()  [RVA 0x3518974]
// RaidLeaderboardsManager$$CJAILEHJLKB @ RVA 0x3518974

void RaidLeaderboardsManager__CJAILEHJLKB(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((DAT_0456894a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456894a = 1;
    method = extraout_x1;
  }
  RaidLeaderboardsManager__HENKNGNOKPE(__this,method);
  bVar1 = DialogsOpener__PIAIOODGOCG((MethodInfo *)0x0);
  if (!bVar1) {
    RaidLeaderboardsManager__GBPMMOFJJLJ(__this,(System_Nullable_int__o)0x0,in_x2);
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (__this_00 != (RaidLeaderboardsManager_o *)0x0) {
    RaidLeaderboardsManager__LEKFDCNMHOJ(__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string OHCFPBBGECP(long HIMHBEENEIF)  [RVA 0x3518AC4]
// RaidLeaderboardsManager$$OHCFPBBGECP @ RVA 0x3518AC4

System_String_o *
RaidLeaderboardsManager__OHCFPBBGECP(RaidLeaderboardsManager_o *__this,int64_t HIMHBEENEIF,MethodInfo *method)

{
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456894b & 1) == 0) {
    __this = (RaidLeaderboardsManager_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456894b = 1;
  }
  pJVar1 = RaidLeaderboardsManager__LPCLGCOCEEA(__this,(int32_t)HIMHBEENEIF,method);
  if (pJVar1 != (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
    pSVar2 = OFFIONDOEPM__CNLBHLNMCCI((pJVar1->fields).HHCNBANOKPB,(MethodInfo *)0x0);
    return pSVar2;
  }
  return StringLiteral_1/*""*/;
}


// ===== private void GPCPNCGBFOM(int IOENJHOKBOE, IFOIPICDFHN ADBILNBMDLO, Action<KEFHDOHHHML> IELDNEAAPBE)  [RVA 0x3517090]
// RaidLeaderboardsManager$$GPCPNCGBFOM @ RVA 0x3517090

void RaidLeaderboardsManager__GPCPNCGBFOM
               (RaidLeaderboardsManager_o *__this,int32_t IOENJHOKBOE,int32_t ADBILNBMDLO,
               System_Action_KEFHDOHHHML__o *IELDNEAAPBE,MethodInfo *method)

{
  SFRequestSender_o *__this_00;
  GGDHPLABCGI_o *__this_01;
  Il2CppObject *IMMNELPBGIF;
  undefined4 local_34;
  
                    /* catch() { ... } // from try @ 0361703c with catch @ 036170bc
                       try { // try from 036170bc to 037170eb has its CatchHandler @ 03616e2c */
  if ((DAT_0456894c & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
                    /* catch() { ... } // from try @ 03616eac with catch @ 036170cc */
                    /* catch() { ... } // from try @ 03616f34 with catch @ 036170d0
                       catch() { ... } // from try @ 03617000 with catch @ 036170d0 */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_18645/*"get_season_leaderboard"*/);
    DAT_0456894c = 1;
  }
                    /* try { // try from 036170ec to 037170ef has its CatchHandler @ 03617104 */
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  __this_01 = (GGDHPLABCGI_o *)thunk_FUN_01bda818(GGDHPLABCGI_TypeInfo);
                    /* catch() { ... } // from try @ 036170ec with catch @ 03617104 */
  GGDHPLABCGI___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (GGDHPLABCGI_o *)0x0) {
    (__this_01->fields).PDOMCPONBNB = IOENJHOKBOE;
    (__this_01->fields).EMDNDLOODLG = ADBILNBMDLO;
    local_34 = 5000;
    IMMNELPBGIF = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    if (__this_00 != (SFRequestSender_o *)0x0) {
                    /* try { // try from 0361713c to 03717163 has its CatchHandler @ 03617178 */
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_00,StringLiteral_18645/*"get_season_leaderboard"*/,
                 (Google_Protobuf_IMessage_o *)__this_01,IELDNEAAPBE,0.0,IMMNELPBGIF,
                 (MethodInfo *)0x0);
                    /* try { // try from 03617164 to 0371716f has its CatchHandler @ 03616e2c */
                    /* try { // try from 03617170 to 03717177 has its CatchHandler @ 03617178 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string PAHKCILGFIK(long BIIMFIDNPJP)  [RVA 0x3518B28]
// RaidLeaderboardsManager$$PAHKCILGFIK @ RVA 0x3518B28

System_String_o *
RaidLeaderboardsManager__PAHKCILGFIK(RaidLeaderboardsManager_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  RaidLeaderboardsManager_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (RaidLeaderboardsManager_o *)RaidLeaderboardsManager__PDEBCPPCEJP(__this,BIIMFIDNPJP,method);
  pSVar1 = RaidLeaderboardsManager__FDJPLCKPMPN
                     (__this_00,(RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)__this_00,method);
  return pSVar1;
}


// ===== private void GBPMMOFJJLJ(Nullable<int> PIGHOGKKKDN)  [RVA 0x3517BDC]
// RaidLeaderboardsManager$$GBPMMOFJJLJ @ RVA 0x3517BDC

void RaidLeaderboardsManager__GBPMMOFJJLJ
               (RaidLeaderboardsManager_o *__this,System_Nullable_int__o PIGHOGKKKDN,MethodInfo *method)

{
  ushort uVar1;
  int32_t PIGHOGKKKDN_00;
  RaidConfig_o *pJVar2;
  System_Collections_IEnumerator_o *pSVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  System_Nullable_int__Fields extraout_x1;
  System_Nullable_int__Fields method_00;
  RaidConfig_AEJBILHMFDB_o *pJVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  System_Nullable_int__Fields local_28;
  
  method_00 = PIGHOGKKKDN.fields;
  local_28 = PIGHOGKKKDN.fields;
  if ((DAT_0456894d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456894d = 1;
    method_00 = extraout_x1;
  }
  RaidLeaderboardsManager__HENKNGNOKPE(__this,(MethodInfo *)method_00);
  if (((ulong)PIGHOGKKKDN.fields & 0xff) == 0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar2 == (RaidConfig_o *)0x0) ||
       (pJVar6 = (pJVar2->fields)._JMEOCLFDHMM_k__BackingField,
       pJVar6 == (RaidConfig_AEJBILHMFDB_o *)0x0)) goto LAB_03617d54;
    method = Method_System_Nullable<int>__ctor__;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_28,(pJVar6->fields).EKAPEBDBNPO,
               (MethodInfo_27F7F6C *)Method_System_Nullable<int>__ctor__);
  }
  PIGHOGKKKDN_00 =
       System_Nullable<int>__get_Value
                 ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
  pSVar3 = RaidLeaderboardsManager__AJGLGPOGNBM(__this,PIGHOGKKKDN_00,method);
  ppSVar10 = &(__this->fields).JGOFLJJKCPA;
  *ppSVar10 = pSVar3;
  thunk_FUN_01c20e04(ppSVar10,pSVar3);
  pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
    pPVar7 = pPVar4->klass;
    pSVar3 = *ppSVar10;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar7->vtable + *piVar9;
          goto LAB_03617d30;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_03617d30:
    (*pVVar5->methodPtr)(pPVar4,pSVar3,1,pVVar5->method);
    return;
  }
LAB_03617d54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JODJMGAGEFG(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3518BB8]
// RaidLeaderboardsManager$$JODJMGAGEFG @ RVA 0x3518BB8

void RaidLeaderboardsManager__JODJMGAGEFG
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *a;
  
  if ((DAT_0456894e & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_0456894e = 1;
  }
  ppSVar6 = &(__this->fields).MNAFCHADIDC;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void EPGEEGCDBLK(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3518C68]
// RaidLeaderboardsManager$$EPGEEGCDBLK @ RVA 0x3518C68

void RaidLeaderboardsManager__EPGEEGCDBLK
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_0456894f & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_0456894f = 1;
  }
  ppSVar6 = &(__this->fields).HOGHPJFEPOM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public JCFJFJCKLKG INGFDAFDMFG(IFOIPICDFHN ACCIHBHMFPN)  [RVA 0x3518D18]
// RaidLeaderboardsManager$$INGFDAFDMFG @ RVA 0x3518D18

JCFJFJCKLKG_o *
RaidLeaderboardsManager__INGFDAFDMFG(RaidLeaderboardsManager_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar2;
  JCFJFJCKLKG_o *pJVar3;
  MethodInfo *method_00;
  
  if ((DAT_04568950 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    DAT_04568950 = 1;
  }
  pSVar2 = (__this->fields).NKPMKDCHLOF;
  if (pSVar2 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                      );
    if (!bVar1) {
      if (ACCIHBHMFPN == 2) {
        RaidLeaderboardsManager__LBKJIKHMJAC(__this,method_00);
      }
      else if (ACCIHBHMFPN == 1) {
        RaidLeaderboardsManager__LEKFDCNMHOJ(__this,method_00);
      }
      return (JCFJFJCKLKG_o *)0x0;
    }
    pSVar2 = (__this->fields).NKPMKDCHLOF;
    if (pSVar2 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      pJVar3 = (JCFJFJCKLKG_o *)
               System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          ACCIHBHMFPN,
                          Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                         );
      return pJVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KBNOCIAPLBM(bool CJNHFNHJHPE)  [RVA 0x3518FA0]
// RaidLeaderboardsManager$$KBNOCIAPLBM @ RVA 0x3518FA0

void RaidLeaderboardsManager__KBNOCIAPLBM(RaidLeaderboardsManager_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KDMKAMFOEAI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static void MAAFGOJFCHD(bool KNFBECDHBKI, string IHJHOFMNAOA, JCFJFJCKLKG NLKBNMDMJEB)  [RVA 0x351785C]
// RaidLeaderboardsManager$$MAAFGOJFCHD @ RVA 0x351785C

void RaidLeaderboardsManager__MAAFGOJFCHD
               (bool KNFBECDHBKI,System_String_o *IHJHOFMNAOA,JCFJFJCKLKG_o *NLKBNMDMJEB,
               MethodInfo *method)

{
  return;
}


// ===== private IEnumerator AJGLGPOGNBM(int PIGHOGKKKDN)  [RVA 0x3518B3C]
// RaidLeaderboardsManager$$AJGLGPOGNBM @ RVA 0x3518B3C

System_Collections_IEnumerator_o *
RaidLeaderboardsManager__AJGLGPOGNBM(RaidLeaderboardsManager_o *__this,int32_t PIGHOGKKKDN,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04568951 & 1) == 0) {
    FUN_01bab630(&RaidLeaderboardsManager_EFJILBBPJLM_TypeInfo);
    DAT_04568951 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(RaidLeaderboardsManager_EFJILBBPJLM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
  *(int32_t *)&__this_00[2].klass = PIGHOGKKKDN;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void ADAJMKLIBGL(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3518FD4]
// RaidLeaderboardsManager$$ADAJMKLIBGL @ RVA 0x3518FD4

void RaidLeaderboardsManager__ADAJMKLIBGL
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = CJNHFNHJHPE;
  auVar1._0_8_ = __this;
  if ((DAT_04568952 & 1) == 0) {
    auVar1 = FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568952 = 1;
  }
  FUN_03f936a8(auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== public void LHBOEIOKNJI(JCFJFJCKLKG DKMMBMBMJBO, IFOIPICDFHN ACCIHBHMFPN)  [RVA 0x35177FC]
// RaidLeaderboardsManager$$LHBOEIOKNJI @ RVA 0x35177FC

void RaidLeaderboardsManager__LHBOEIOKNJI
               (RaidLeaderboardsManager_o *__this,JCFJFJCKLKG_o *DKMMBMBMJBO,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  if ((DAT_04568953 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<IFOIPICDFHN,_JCFJFJCKLKG>__);
    DAT_04568953 = 1;
  }
  CAOJHCDPDBH__GKONJMIPMEH<Int32Enum,_object>
            ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).FONCNGHPHDG,
             ACCIHBHMFPN,(Il2CppObject *)DKMMBMBMJBO,
             Method_CAOJHCDPDBH_GKONJMIPMEH<IFOIPICDFHN,_JCFJFJCKLKG>__);
  return;
}


// ===== private void LEKFDCNMHOJ()  [RVA 0x3518DD0]
// RaidLeaderboardsManager$$LEKFDCNMHOJ @ RVA 0x3518DD0

void RaidLeaderboardsManager__LEKFDCNMHOJ(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  NFFDIPBFJHP_o *pNVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  System_Action_JCFJFJCKLKG__o *pSVar4;
  
  if ((DAT_04568954 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_GKJBIDCCAGA__);
    DAT_04568954 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar2 = (pNVar1->fields).NEACDFLBNFO;
    if ((pGVar2 != (GLPEFEEGCPM_o *)0x0) &&
       (pFVar3 = (pGVar2->fields).PBBGNHKFEPG, pFVar3 != (FADHMEJJCPO_o *)0x0)) {
      IOENJHOKBOE = (pFVar3->fields).PDOMCPONBNB;
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      RaidLeaderboardsManager__GPCPNCGBFOM(__this_00,IOENJHOKBOE,1,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar4 = (__this->fields).DAHKCOIPIBD;
    if (pSVar4 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03618eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,0,(pSVar4->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CFGNIDNCLIL(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x3519084]
// RaidLeaderboardsManager$$CFGNIDNCLIL @ RVA 0x3519084

bool RaidLeaderboardsManager__CFGNIDNCLIL(RaidLeaderboardsManager_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar1;
  GKLPDMLELJF_o *pGVar2;
  
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
    pJVar1 = RaidLeaderboardsManager__PDEBCPPCEJP(__this,(pGVar2->fields).ANAJGHJEEOC,method);
    return pJVar1 != (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HENKNGNOKPE()  [RVA 0x35189FC]
// RaidLeaderboardsManager$$HENKNGNOKPE @ RVA 0x35189FC

void RaidLeaderboardsManager__HENKNGNOKPE(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04568955 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568955 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).JGOFLJJKCPA;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_03618a94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03618a94:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void BNNGOJGLDOC(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x35190B0]
// RaidLeaderboardsManager$$BNNGOJGLDOC @ RVA 0x35190B0

void RaidLeaderboardsManager__BNNGOJGLDOC
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_04568956 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568956 = 1;
  }
  ppSVar6 = &(__this->fields).FDHOMPFPAJF;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void AJNHAFLFEGG(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3519160]
// RaidLeaderboardsManager$$AJNHAFLFEGG @ RVA 0x3519160

void RaidLeaderboardsManager__AJNHAFLFEGG
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *a;
  
  if ((DAT_04568957 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568957 = 1;
  }
  ppSVar6 = &(__this->fields).BNBPDOCEPBE;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void CPIPBJINPBE(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3519210]
// RaidLeaderboardsManager$$CPIPBJINPBE @ RVA 0x3519210

void RaidLeaderboardsManager__CPIPBJINPBE
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_04568958 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568958 = 1;
  }
  source = (__this->fields).OLMPIIIPHKF;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public string IBMIJOCFPGA(long BIIMFIDNPJP)  [RVA 0x35192C0]
// RaidLeaderboardsManager$$IBMIJOCFPGA @ RVA 0x35192C0

System_String_o *
RaidLeaderboardsManager__IBMIJOCFPGA(RaidLeaderboardsManager_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568959 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568959 = 1;
  }
  pJVar1 = RaidLeaderboardsManager__PDEBCPPCEJP(__this,BIIMFIDNPJP,method);
  if (pJVar1 != (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
    pSVar2 = OFFIONDOEPM__CNLBHLNMCCI((pJVar1->fields).HHCNBANOKPB,(MethodInfo *)0x0);
    return pSVar2;
  }
  return StringLiteral_1/*""*/;
}


// ===== private void LBKJIKHMJAC()  [RVA 0x3518EB8]
// RaidLeaderboardsManager$$LBKJIKHMJAC @ RVA 0x3518EB8

void RaidLeaderboardsManager__LBKJIKHMJAC(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  NFFDIPBFJHP_o *pNVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  System_Action_JCFJFJCKLKG__o *pSVar4;
  
  if ((DAT_0456895a & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_OBMGPDJIAHN__);
    DAT_0456895a = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar2 = (pNVar1->fields).NEACDFLBNFO;
    if ((pGVar2 != (GLPEFEEGCPM_o *)0x0) &&
       (pFVar3 = (pGVar2->fields).PBBGNHKFEPG, pFVar3 != (FADHMEJJCPO_o *)0x0)) {
      IOENJHOKBOE = (pFVar3->fields).PDOMCPONBNB;
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      RaidLeaderboardsManager__GPCPNCGBFOM(__this_00,IOENJHOKBOE,2,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar4 = (__this->fields).BNBPDOCEPBE;
    if (pSVar4 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03618f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,0,(pSVar4->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLCFHCNPFLF(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x351932C]
// RaidLeaderboardsManager$$FLCFHCNPFLF @ RVA 0x351932C

void RaidLeaderboardsManager__FLCFHCNPFLF(RaidLeaderboardsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  JCFJFJCKLKG_o *DKMMBMBMJBO;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *in_x3;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  
  if ((DAT_0456895b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    FUN_01bab630(&StringLiteral_10899/*"RaidLeaderboardsManager::onGetPrevSeasonPlayersLeaderboard failed"*/);
    FUN_01bab630(&StringLiteral_10895/*"RaidLeaderboardsManager::OnGetPrevSeasonPlayersLeaderboard, Prev-Player"*/);
    DAT_0456895b = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    DKMMBMBMJBO = (JCFJFJCKLKG_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    if (DKMMBMBMJBO == (JCFJFJCKLKG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10899/*"RaidLeaderboardsManager::onGetPrevSeasonPlayersLeaderboard failed"*/,(MethodInfo *)0x0);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (__this_00 == (RaidLeaderboardsManager_o *)0x0) goto LAB_03619430;
      RaidLeaderboardsManager__LHBOEIOKNJI(__this_00,DKMMBMBMJBO,1,in_x3);
    }
    pSVar1 = (__this->fields).MNAFCHADIDC;
    if (pSVar1 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0361942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,DKMMBMBMJBO,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
LAB_03619430:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CMIAHPINBOM()  [RVA 0x3519434]
// RaidLeaderboardsManager$$CMIAHPINBOM @ RVA 0x3519434

void RaidLeaderboardsManager__CMIAHPINBOM(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_0456895c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_Remove__);
    DAT_0456895c = 1;
  }
  pSVar1 = (__this->fields).NKPMKDCHLOF;
  if (pSVar1 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,1,
               Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_Remove__);
    pSVar1 = (__this->fields).NKPMKDCHLOF;
    if (pSVar1 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,2,
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_Remove__);
      RaidLeaderboardsManager__HENKNGNOKPE(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CMPOBKHCLJA(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x35194A4]
// RaidLeaderboardsManager$$CMPOBKHCLJA @ RVA 0x35194A4

void RaidLeaderboardsManager__CMPOBKHCLJA
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_0456895d & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_0456895d = 1;
  }
  ppSVar6 = &(__this->fields).OONPMGENPMD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void OBMGPDJIAHN(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3519554]
// RaidLeaderboardsManager$$OBMGPDJIAHN @ RVA 0x3519554

void RaidLeaderboardsManager__OBMGPDJIAHN(RaidLeaderboardsManager_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  JCFJFJCKLKG_o *DKMMBMBMJBO;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_0456895e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&StringLiteral_10892/*"RaidLeaderboardsManager::OnGetCurSeasonClansLeaderboard, Cur-Clan"*/);
    FUN_01bab630(&StringLiteral_10896/*"RaidLeaderboardsManager::onGetCurSeasonClansLeaderboard failed, retrying"*/);
    DAT_0456895e = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    DKMMBMBMJBO = (JCFJFJCKLKG_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    if (DKMMBMBMJBO == (JCFJFJCKLKG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10896/*"RaidLeaderboardsManager::onGetCurSeasonClansLeaderboard failed, retrying"*/,(MethodInfo *)0x0);
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0;
      method_00 = Method_System_Nullable<int>__ctor__;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_28,7000,
                 (MethodInfo_27F7F6C *)Method_System_Nullable<int>__ctor__);
      RaidLeaderboardsManager__GBPMMOFJJLJ(__this,(System_Nullable_int__o)local_28,method_00);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (__this_00 == (RaidLeaderboardsManager_o *)0x0) goto LAB_03619698;
      RaidLeaderboardsManager__FCKCCJBGGEH(__this_00,DKMMBMBMJBO,2,in_x3);
    }
    pSVar1 = (__this->fields).HOGHPJFEPOM;
    if (pSVar1 != (System_Action_JCFJFJCKLKG__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,DKMMBMBMJBO,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
LAB_03619698:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BHOKMPEGAEG(long BIIMFIDNPJP)  [RVA 0x351969C]
// RaidLeaderboardsManager$$BHOKMPEGAEG @ RVA 0x351969C

int32_t RaidLeaderboardsManager__BHOKMPEGAEG(RaidLeaderboardsManager_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppClass *__this_01;
  Il2CppObject *pIVar2;
  int iVar3;
  int index;
  int iVar4;
  
  if ((DAT_0456895f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_0456895f = 1;
  }
  __this_00 = (__this->fields).FONCNGHPHDG;
  if (__this_00 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                        Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                       );
    if (pIVar1 == (Il2CppObject *)0x0) {
      return 0;
    }
    __this_01 = pIVar1[2].klass;
    if (__this_01 != (Il2CppClass *)0x0) {
      iVar3 = 0;
      index = 0;
      iVar4 = -1;
      do {
        if (*(int *)&(__this_01->_1).namespaze <= index) {
          return 0;
        }
        pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,index,
                            Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar2[2].klass != iVar4) {
          iVar3 = index + 1;
        }
        if (pIVar2[1].monitor == (void *)BIIMFIDNPJP) {
          return iVar3;
        }
        __this_01 = pIVar1[2].klass;
        index = index + 1;
        iVar4 = *(int *)&pIVar2[2].klass;
      } while (__this_01 != (Il2CppClass *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LGBAHAOEMMB(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3519790]
// RaidLeaderboardsManager$$LGBAHAOEMMB @ RVA 0x3519790

void RaidLeaderboardsManager__LGBAHAOEMMB
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_04568960 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568960 = 1;
  }
  ppSVar6 = &(__this->fields).BNBPDOCEPBE;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void DALCEJFJKLA(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3519840]
// RaidLeaderboardsManager$$DALCEJFJKLA @ RVA 0x3519840

void RaidLeaderboardsManager__DALCEJFJKLA
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o *a;
  
  if ((DAT_04568961 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568961 = 1;
  }
  a = (__this->fields).OLMPIIIPHKF;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public List<string> IMDPDFJLNCB(EOLFEKNCPLM HEHMPFLAEGE)  [RVA 0x35198F0]
// RaidLeaderboardsManager$$IMDPDFJLNCB @ RVA 0x35198F0

System_Collections_Generic_List_string__o *
RaidLeaderboardsManager__IMDPDFJLNCB(RaidLeaderboardsManager_o *__this,EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  GKLPDMLELJF_o *pGVar2;
  
  if ((HEHMPFLAEGE != (EOLFEKNCPLM_o *)0x0) &&
     (pGVar2 = (HEHMPFLAEGE->fields).MCOPPCNPAHF, pGVar2 != (GKLPDMLELJF_o *)0x0)) {
    pSVar1 = RaidLeaderboardsManager__INONDJFCPHI(__this,(pGVar2->fields).ANAJGHJEEOC,method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LFMNOABBINL()  [RVA 0x3518AC0]
// RaidLeaderboardsManager$$LFMNOABBINL @ RVA 0x3518AC0

void RaidLeaderboardsManager__LFMNOABBINL(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  NFFDIPBFJHP_o *pNVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  GLPEFEEGCPM_o *pGVar2;
  FADHMEJJCPO_o *pFVar3;
  System_Action_JCFJFJCKLKG__o *pSVar4;
  
  if ((DAT_04568954 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_GKJBIDCCAGA__);
    DAT_04568954 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar2 = (pNVar1->fields).NEACDFLBNFO;
    if ((pGVar2 != (GLPEFEEGCPM_o *)0x0) &&
       (pFVar3 = (pGVar2->fields).PBBGNHKFEPG, pFVar3 != (FADHMEJJCPO_o *)0x0)) {
      IOENJHOKBOE = (pFVar3->fields).PDOMCPONBNB;
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      RaidLeaderboardsManager__GPCPNCGBFOM(__this_00,IOENJHOKBOE,1,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar4 = (__this->fields).DAHKCOIPIBD;
    if (pSVar4 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03618eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,0,(pSVar4->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIHAOHALAPH()  [RVA 0x3517E10]
// RaidLeaderboardsManager$$KIHAOHALAPH @ RVA 0x3517E10

void RaidLeaderboardsManager__KIHAOHALAPH(RaidLeaderboardsManager_o *__this,MethodInfo *method)

{
  int32_t IOENJHOKBOE;
  PlayerData_o *pEVar1;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  RaidLeaderboardsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  
  if ((DAT_04568962 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_PLIIGOCLJDL_FLCFHCNPFLF__);
    DAT_04568962 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (PlayerData_o *)0x0) {
    IOENJHOKBOE = (pEVar1->fields)._DHPJJLCDAJD_k__BackingField;
    if (0 < IOENJHOKBOE) {
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      RaidLeaderboardsManager__GPCPNCGBFOM(__this_00,IOENJHOKBOE,1,IELDNEAAPBE,in_x4);
      return;
    }
    pSVar2 = (__this->fields).FDHOMPFPAJF;
    if (pSVar2 != (System_Action_JCFJFJCKLKG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03617ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FCKCCJBGGEH(JCFJFJCKLKG DKMMBMBMJBO, IFOIPICDFHN ACCIHBHMFPN)  [RVA 0x3517B70]
// RaidLeaderboardsManager$$FCKCCJBGGEH @ RVA 0x3517B70

void RaidLeaderboardsManager__FCKCCJBGGEH
               (RaidLeaderboardsManager_o *__this,JCFJFJCKLKG_o *DKMMBMBMJBO,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  if ((DAT_04568963 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<IFOIPICDFHN,_JCFJFJCKLKG>__);
    DAT_04568963 = 1;
  }
  CAOJHCDPDBH__GKONJMIPMEH<Int32Enum,_object>
            ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).NKPMKDCHLOF,
             ACCIHBHMFPN,(Il2CppObject *)DKMMBMBMJBO,
             Method_CAOJHCDPDBH_GKONJMIPMEH<IFOIPICDFHN,_JCFJFJCKLKG>__);
  RaidLeaderboardsManager__GBPMMOFJJLJ(__this,(System_Nullable_int__o)0x0,(MethodInfo *)DKMMBMBMJBO);
  return;
}


// ===== public void IJMELLFDCDD(Action<JCFJFJCKLKG> CJNHFNHJHPE)  [RVA 0x3519910]
// RaidLeaderboardsManager$$IJMELLFDCDD @ RVA 0x3519910

void RaidLeaderboardsManager__IJMELLFDCDD
               (RaidLeaderboardsManager_o *__this,System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_JCFJFJCKLKG__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_JCFJFJCKLKG__o *pSVar5;
  System_Action_JCFJFJCKLKG__o **ppSVar6;
  System_Action_JCFJFJCKLKG__o *source;
  
  if ((DAT_04568964 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    DAT_04568964 = 1;
  }
  ppSVar6 = &(__this->fields).MNAFCHADIDC;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<JCFJFJCKLKG>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<JCFJFJCKLKG>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_JCFJFJCKLKG__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

