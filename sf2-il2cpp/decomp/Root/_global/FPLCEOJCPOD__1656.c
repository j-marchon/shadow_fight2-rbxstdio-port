// TypeDefIndex 1656
// Namespace: 
// public class FPLCEOJCPOD
// Fields:
//   private Dictionary<string, ObscuredInt> BJJAPALEEBD; // 0x10

// ===== public void OLGILMECDLP(FPLCEOJCPOD IBKIPBJJCPG)  [RVA 0x31C60C0]
// FPLCEOJCPOD$$OLGILMECDLP @ RVA 0x31C60C0

void FPLCEOJCPOD__OLGILMECDLP(FPLCEOJCPOD_o *__this,FPLCEOJCPOD_o *IBKIPBJJCPG,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *pSVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  undefined8 uStack_38;
  
  if ((DAT_04566c2f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Value__);
    DAT_04566c2f = 1;
  }
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_38 = 0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if ((IBKIPBJJCPG != (FPLCEOJCPOD_o *)0x0) &&
     (pSVar2 = (IBKIPBJJCPG->fields).BJJAPALEEBD,
     pSVar2 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__GetEnumerator
              (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                  );
        return;
      }
      pSVar2 = (__this->fields).BJJAPALEEBD;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) break;
      value.fields.fakeValue = local_60.fields._getEnumeratorRetType;
      value.fields.fakeValueActive = (bool_conflict)local_60.fields._36_1_;
      value.fields.inited = (bool_conflict)local_60.fields._37_1_;
      value.fields._14_2_ = local_60.fields._38_2_;
      value.fields._0_8_ = local_60.fields._current.fields.value;
      System_Collections_Generic_Dictionary<object,_ObscuredInt>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 local_60.fields._current.fields.key,value,
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LDJLMEFOMLG()  [RVA 0x31C6254]
// FPLCEOJCPOD$$LDJLMEFOMLG @ RVA 0x31C6254

int32_t FPLCEOJCPOD__LDJLMEFOMLG(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Count__);
    DAT_04566c30 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BJJAPALEEBD;
                    /* try { // try from 032c6284 to 033c62ab has its CatchHandler @ 032c67f4 */
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Count__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public bool KNMENIBLFGF(string PMACBPAMPJA, ref int KENFFDHLNDA, bool FGAKEDKLCBH = True, bool MJINKNBHFAC = False)  [RVA 0x31C62A4]
// FPLCEOJCPOD$$KNMENIBLFGF @ RVA 0x31C62A4

bool FPLCEOJCPOD__KNMENIBLFGF
               (FPLCEOJCPOD_o *__this,System_String_o *PMACBPAMPJA,int32_t *KENFFDHLNDA,
               bool FGAKEDKLCBH,bool MJINKNBHFAC,MethodInfo *method)

{
  int32_t HGDNFDIMIOP;
  bool bVar1;
  int32_t iVar2;
  int32_t JLAFGLDIFOC;
  MNKGBNEMPCI_o *pMVar3;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *pSVar4;
  ACHLOMELAJE_o *__this_00;
  PFMHIGFMAJJ_o *pPVar5;
  System_String_o *KGLJICLJHEL;
  System_String_o *KGLJICLJHEL_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar6;
  
                    /* try { // try from 032c62bc to 033c62bf has its CatchHandler @ 032c67e4 */
                    /* try { // try from 032c62c0 to 033c62d3 has its CatchHandler @ 032c67e8 */
                    /* try { // try from 032c62e0 to 033c62e7 has its CatchHandler @ 032c67bc */
                    /* try { // try from 032c62f8 to 033c62ff has its CatchHandler @ 032c67cc */
  KGLJICLJHEL = PMACBPAMPJA;
  while( true ) {
                    /* try { // try from 032c6304 to 033c630b has its CatchHandler @ 032c67d4 */
    if ((DAT_04566c31 & 1) == 0) {
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_ContainsKey__)
      ;
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Item__);
                    /* try { // try from 032c631c to 033c6323 has its CatchHandler @ 032c67b8 */
      FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 032c6324 to 033c6333 has its CatchHandler @ 032c67dc */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04566c31 = 1;
    }
    KGLJICLJHEL_00 = PMACBPAMPJA;
    if (!MJINKNBHFAC) break;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032c633c to 033c6343 has its CatchHandler @ 032c67c4 */
      thunk_FUN_01ba7564();
    }
    pMVar3 = MGNPHCAAEIO__CNMOHIPAEPD(KGLJICLJHEL,(MethodInfo *)0x0);
    KGLJICLJHEL_00 = KGLJICLJHEL;
    if (pMVar3 == (MNKGBNEMPCI_o *)0x0) break;
    KGLJICLJHEL = (pMVar3->fields).NEFMLODIKPE;
                    /* try { // try from 032c6354 to 033c635b has its CatchHandler @ 032c67c0 */
  }
  if (KGLJICLJHEL_00 == (System_String_o *)0x0) {
    return false;
  }
                    /* try { // try from 032c6360 to 033c6367 has its CatchHandler @ 032c67d0 */
  pSVar4 = (__this->fields).BJJAPALEEBD;
  if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                       (Il2CppObject *)KGLJICLJHEL_00,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_ContainsKey__
                      );
    if (!bVar1) {
      return false;
    }
                    /* try { // try from 032c6378 to 033c637f has its CatchHandler @ 032c67c8 */
    pSVar4 = (__this->fields).BJJAPALEEBD;
    if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
                    /* try { // try from 032c6380 to 033c638f has its CatchHandler @ 032c67d8 */
      CVar6 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                         (Il2CppObject *)KGLJICLJHEL_00,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Item__
                        );
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CVar6,(MethodInfo *)0x0);
                    /* try { // try from 032c6394 to 033c63b3 has its CatchHandler @ 032c67e0 */
      if (FGAKEDKLCBH) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032c63b4 to 033c67a3 has its CatchHandler @ 032c5f4c */
        pMVar3 = MGNPHCAAEIO__CNMOHIPAEPD(KGLJICLJHEL_00,(MethodInfo *)0x0);
        if (pMVar3 != (MNKGBNEMPCI_o *)0x0) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 != (ACHLOMELAJE_o *)0x0) {
            JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
            }
            if (DAT_04566c73 == '\0') {
              FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
              DAT_04566c73 = '\x01';
            }
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pPVar5 = MGNPHCAAEIO_TypeInfo->static_fields->KLJKIHCIGGI;
            if (pPVar5 != (PFMHIGFMAJJ_o *)0x0) {
              HGDNFDIMIOP = (pPVar5->fields).MCGBOKPNBLD;
              if (DAT_04566c73 == '\0') {
                FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                DAT_04566c73 = '\x01';
              }
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pPVar5 = MGNPHCAAEIO_TypeInfo->static_fields->KLJKIHCIGGI;
              if (pPVar5 != (PFMHIGFMAJJ_o *)0x0) {
                iVar2 = MNKGBNEMPCI__PPOKEOHAHFG
                                  (pMVar3,(double)iVar2,JLAFGLDIFOC,HGDNFDIMIOP,
                                   (double)(pPVar5->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
                *KENFFDHLNDA = iVar2;
                pSVar4 = (__this->fields).BJJAPALEEBD;
                if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
                  bVar1 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__ContainsKey
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4
                                     ,(Il2CppObject *)(pMVar3->fields).NEFMLODIKPE,
                                     Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_ContainsKey__
                                    );
                  if (!bVar1) {
                    return true;
                  }
                  pSVar4 = (__this->fields).BJJAPALEEBD;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0)
                  {
                    CVar6 = System_Collections_Generic_Dictionary<object,_ObscuredInt>__get_Item
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                       pSVar4,(Il2CppObject *)(pMVar3->fields).NEFMLODIKPE,
                                       Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_get_Item__
                                      );
                    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                      (CVar6,(MethodInfo *)0x0);
                    *KENFFDHLNDA = *KENFFDHLNDA + iVar2;
                    return true;
                  }
                }
              }
            }
          }
          goto LAB_032c654c;
        }
      }
      *KENFFDHLNDA = iVar2;
      return true;
    }
  }
LAB_032c654c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(FPLCEOJCPOD IBKIPBJJCPG)  [RVA 0x31C6550]
// FPLCEOJCPOD$$.ctor @ RVA 0x31C6550

void FPLCEOJCPOD___ctor(FPLCEOJCPOD_o *__this,FPLCEOJCPOD_o *IBKIPBJJCPG,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *pSVar2;
  FPLCEOJCPOD_Fields *pFVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  undefined8 uStack_38;
  
  if ((DAT_04566c32 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Value__);
    DAT_04566c32 = 1;
  }
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_38 = 0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_ObscuredInt>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
  pFVar3 = &__this->fields;
  pFVar3->BJJAPALEEBD = pSVar2;
  thunk_FUN_01c20e04(pFVar3,pSVar2);
  if ((IBKIPBJJCPG != (FPLCEOJCPOD_o *)0x0) &&
     (pSVar2 = (IBKIPBJJCPG->fields).BJJAPALEEBD,
     pSVar2 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__GetEnumerator
              (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                  );
        return;
      }
      if (pFVar3->BJJAPALEEBD == (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0
         ) break;
      value.fields.fakeValue = local_60.fields._getEnumeratorRetType;
      value.fields.fakeValueActive = (bool_conflict)local_60.fields._36_1_;
      value.fields.inited = (bool_conflict)local_60.fields._37_1_;
      value.fields._14_2_ = local_60.fields._38_2_;
      value.fields._0_8_ = local_60.fields._current.fields.value;
      System_Collections_Generic_Dictionary<object,_ObscuredInt>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pFVar3->BJJAPALEEBD,
                 local_60.fields._current.fields.key,value,
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Add__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x31C672C]
// FPLCEOJCPOD$$RandomizeObscuredVars @ RVA 0x31C672C

void FPLCEOJCPOD__RandomizeObscuredVars(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  Il2CppObject *local_60;
  undefined8 uStack_58;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  undefined8 uStack_28;
  
  if ((DAT_04566c33 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Value__);
    DAT_04566c33 = 1;
    method = extraout_x1;
  }
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_28 = 0;
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  uStack_58._0_4_ = 0;
  uStack_58._4_4_ = 0;
  __this_00 = (__this->fields).BJJAPALEEBD;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
                    /* try { // try from 032c67a4 to 033c67a7 has its CatchHandler @ 032c67ec */
                    /* try { // try from 032c67a8 to 033c680f has its CatchHandler @ 032c5f4c */
                    /* catch() { ... } // from try @ 032c631c with catch @ 032c67b8 */
                    /* catch() { ... } // from try @ 032c62e0 with catch @ 032c67bc */
                    /* catch() { ... } // from try @ 032c6354 with catch @ 032c67c0 */
                    /* catch() { ... } // from try @ 032c633c with catch @ 032c67c4 */
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__);
                    /* catch() { ... } // from try @ 032c6378 with catch @ 032c67c8 */
                    /* catch() { ... } // from try @ 032c62f8 with catch @ 032c67cc */
                    /* catch() { ... } // from try @ 032c6360 with catch @ 032c67d0 */
                    /* catch() { ... } // from try @ 032c6304 with catch @ 032c67d4 */
    while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                             ), bVar1) {
      uStack_58._0_4_ = local_50.fields._getEnumeratorRetType;
      uStack_58._4_4_ = local_50.fields._36_4_;
                    /* catch() { ... } // from try @ 032c6380 with catch @ 032c67d8 */
                    /* catch() { ... } // from try @ 032c6324 with catch @ 032c67dc */
      local_60 = local_50.fields._current.fields.value;
      __this_01.fields.fakeValue = 0;
      __this_01.fields.fakeValueActive = false;
      __this_01.fields.inited = false;
      __this_01.fields._14_2_ = 0;
      __this_01.fields._0_8_ = &local_60;
                    /* catch() { ... } // from try @ 032c6394 with catch @ 032c67e0 */
                    /* catch() { ... } // from try @ 032c62bc with catch @ 032c67e4 */
                    /* catch() { ... } // from try @ 032c62c0 with catch @ 032c67e8 */
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
                    /* catch() { ... } // from try @ 032c67a4 with catch @ 032c67ec */
    }
                    /* catch() { ... } // from try @ 032c6284 with catch @ 032c67f4 */
                    /* catch() { ... } // from try @ 032c6228 with catch @ 032c67f8 */
    System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void FOOHBJNHOKK(string PMACBPAMPJA, int CJNHFNHJHPE, bool MJINKNBHFAC = False)  [RVA 0x31C6888]
// FPLCEOJCPOD$$FOOHBJNHOKK @ RVA 0x31C6888

void FPLCEOJCPOD__FOOHBJNHOKK
               (FPLCEOJCPOD_o *__this,System_String_o *PMACBPAMPJA,int32_t CJNHFNHJHPE,
               bool MJINKNBHFAC,MethodInfo *method)

{
  MNKGBNEMPCI_o *pMVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value;
  
                    /* try { // try from 032c688c to 033c6897 has its CatchHandler @ 032c5f4c */
                    /* try { // try from 032c6898 to 033c689f has its CatchHandler @ 032c68a0 */
                    /* catch() { ... } // from try @ 032c6864 with catch @ 032c68a0
                       catch() { ... } // from try @ 032c6898 with catch @ 032c68a0 */
                    /* try { // try from 032c68a4 to 033c6bdb has its CatchHandler @ 032c68a4
                       catch() { ... } // from try @ 032c68a4 with catch @ 032c68a4
                       catch() { ... } // from try @ 032c70e0 with catch @ 032c68a4
                       catch() { ... } // from try @ 032c71b4 with catch @ 032c68a4
                       catch() { ... } // from try @ 032c71bc with catch @ 032c68a4
                       catch() { ... } // from try @ 032c72ec with catch @ 032c68a4
                       catch() { ... } // from try @ 032c732c with catch @ 032c68a4 */
  if ((DAT_04566c34 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566c34 = 1;
  }
  if (MJINKNBHFAC) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = MGNPHCAAEIO__CNMOHIPAEPD(PMACBPAMPJA,(MethodInfo *)0x0);
    if (pMVar1 != (MNKGBNEMPCI_o *)0x0) {
      PMACBPAMPJA = (pMVar1->fields).NEFMLODIKPE;
    }
  }
  __this_00 = (__this->fields).BJJAPALEEBD;
  value = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)PMACBPAMPJA,value,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NDNPGAKJLHM()  [RVA 0x31C6944]
// FPLCEOJCPOD$$NDNPGAKJLHM @ RVA 0x31C6944

void FPLCEOJCPOD__NDNPGAKJLHM(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c35 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Clear__);
    DAT_04566c35 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BJJAPALEEBD;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor()  [RVA 0x31C6994]
// FPLCEOJCPOD$$.ctor @ RVA 0x31C6994

void FPLCEOJCPOD___ctor(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  
  if ((DAT_04566c36 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo);
    DAT_04566c36 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_ObscuredInt>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
  (__this->fields).BJJAPALEEBD = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

