// TypeDefIndex 395
// Namespace: 
// public class CNLGMNIEGFG : AFFHKININGD
// Fields:
//   public Dictionary<int, JKDFEBLBMOF> MOGNLMJONAL; // 0x190
//   public CNLGMNIEGFG.FKKOIBADKGP BOOKHNOMHGM; // 0x198

// ===== public void HFNDKACEADO(float CJNHFNHJHPE)  [RVA 0x3480690]
// CNLGMNIEGFG$$HFNDKACEADO @ RVA 0x3480690

void CNLGMNIEGFG__HFNDKACEADO(CNLGMNIEGFG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_48;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  pCVar1 = (__this->fields).BOOKHNOMHGM;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_48,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_30.hiddenValueOldByte4.fields = local_48.hiddenValueOldByte4.fields;
  local_30.fakeValue = local_48.fakeValue;
  local_30.currentCryptoKey = local_48.currentCryptoKey;
  local_30.hiddenValue = local_48.hiddenValue;
  local_30.fakeValueActive = local_48.fakeValueActive;
  local_30.inited = local_48.inited;
  local_30._18_2_ = local_48._18_2_;
  if (pCVar1 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
    (pCVar1->fields).ILNHMPEGKDD.fields.fakeValueActive = local_48.fakeValueActive;
    (pCVar1->fields).ILNHMPEGKDD.fields.inited = local_48.inited;
    *(undefined2 *)&(pCVar1->fields).ILNHMPEGKDD.fields.field_0x12 = local_48._18_2_;
    (pCVar1->fields).ILNHMPEGKDD.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_48.hiddenValueOldByte4.fields;
    (pCVar1->fields).ILNHMPEGKDD.fields.fakeValue = local_48.fakeValue;
    (pCVar1->fields).ILNHMPEGKDD.fields.currentCryptoKey = local_48.currentCryptoKey;
    (pCVar1->fields).ILNHMPEGKDD.fields.hiddenValue = local_48.hiddenValue;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override List<NIAFDKHDBMA> NIKCNPMKAFK()  [RVA 0x34806DC]
// CNLGMNIEGFG$$NIKCNPMKAFK @ RVA 0x34806DC

System_Collections_Generic_List_NIAFDKHDBMA__o *
CNLGMNIEGFG__NIKCNPMKAFK(CNLGMNIEGFG_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_NIAFDKHDBMA__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  MethodInfo *extraout_x1;
  NIAFDKHDBMA_o *item;
  NIAFDKHDBMA_array *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456837b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NIAFDKHDBMA>_TypeInfo);
    FUN_01bab630(&NIAFDKHDBMA_TypeInfo);
    DAT_0456837b = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_NIAFDKHDBMA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NIAFDKHDBMA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NIAFDKHDBMA>__ctor__);
  __this_01 = AFFHKININGD__HKNMJCKPHHC((AFFHKININGD_o *)__this,(MethodInfo *)0x0);
  if (__this_01 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    item = (NIAFDKHDBMA_o *)local_60.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      return __this_00;
    }
    if ((NIAFDKHDBMA_o *)local_60.fields._current == (NIAFDKHDBMA_o *)0x0) break;
    iVar5 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)local_60.fields._current,(MethodInfo *)0x0);
    lVar3 = Method_System_Collections_Generic_List<NIAFDKHDBMA>_Add__;
    if (iVar5 == 0x25) {
      bVar1 = (NIAFDKHDBMA_TypeInfo->_2).naturalAligment;
      if ((((NIAFDKHDBMA_c *)((Il2CppObject *)item)->klass)->_2).naturalAligment < bVar1) {
        item = (NIAFDKHDBMA_o *)0x0;
      }
      else if ((((NIAFDKHDBMA_c *)((Il2CppObject *)item)->klass)->_2).typeHierarchy
               [(ulong)bVar1 - 1] != (Il2CppClass *)NIAFDKHDBMA_TypeInfo) {
        item = (NIAFDKHDBMA_o *)0x0;
      }
      if (__this_00 == (System_Collections_Generic_List_NIAFDKHDBMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar6 == (NIAFDKHDBMA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pNVar6->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float NBPOPEJDCKO()  [RVA 0x348094C]
// CNLGMNIEGFG$$NBPOPEJDCKO @ RVA 0x348094C

float CNLGMNIEGFG__NBPOPEJDCKO(CNLGMNIEGFG_o *__this,MethodInfo *method)

{
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar1;
  float fVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  pCVar1 = (__this->fields).BOOKHNOMHGM;
  if (pCVar1 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
    local_30.fakeValueActive = (pCVar1->fields).ILNHMPEGKDD.fields.fakeValueActive;
    local_30.inited = (pCVar1->fields).ILNHMPEGKDD.fields.inited;
    local_30._18_2_ = *(undefined2 *)&(pCVar1->fields).ILNHMPEGKDD.fields.field_0x12;
    local_30.hiddenValueOldByte4.fields =
         (pCVar1->fields).ILNHMPEGKDD.fields.hiddenValueOldByte4.fields;
    local_30.fakeValue = (pCVar1->fields).ILNHMPEGKDD.fields.fakeValue;
    local_30.currentCryptoKey = (pCVar1->fields).ILNHMPEGKDD.fields.currentCryptoKey;
    local_30.hiddenValue = (pCVar1->fields).ILNHMPEGKDD.fields.hiddenValue;
    fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                       (MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3480988]
// CNLGMNIEGFG$$.ctor @ RVA 0x3480988

void CNLGMNIEGFG___ctor(CNLGMNIEGFG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  CNLGMNIEGFG_FKKOIBADKGP_o *__this_01;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
                    /* try { // try from 03580994 to 03680bff has its CatchHandler @ 03580994
                       catch() { ... } // from try @ 03580994 with catch @ 03580994
                       catch() { ... } // from try @ 03581128 with catch @ 03580994
                       catch() { ... } // from try @ 035811e4 with catch @ 03580994
                       catch() { ... } // from try @ 035811ec with catch @ 03580994
                       catch() { ... } // from try @ 035813a8 with catch @ 03580994 */
  if ((DAT_0456837c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_TypeInfo);
    FUN_01bab630(&CNLGMNIEGFG_FKKOIBADKGP_TypeInfo);
    DAT_0456837c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>__ctor__);
  (__this->fields).MOGNLMJONAL =
       (System_Collections_Generic_Dictionary_int__JKDFEBLBMOF__o *)__this_00;
  thunk_FUN_01c20e04(&(__this->fields).MOGNLMJONAL,__this_00);
  AFFHKININGD___ctor((AFFHKININGD_o *)__this,(MethodInfo *)0x0);
  __this_01 = (CNLGMNIEGFG_FKKOIBADKGP_o *)thunk_FUN_01bda818(CNLGMNIEGFG_FKKOIBADKGP_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
    (__this_01->fields).LPHHIMJHGEF = false;
    (__this_01->fields).LMBCNLBOPAF = 0.0;
    (__this_01->fields).IJCKKCPBLGP = 0.0;
    (__this_01->fields).LPJKDDIMOEK = 0.0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,-1.0,(MethodInfo *)0x0
              );
    local_50.fakeValueActive = local_68.fakeValueActive;
    local_50.inited = local_68.inited;
    local_50._18_2_ = local_68._18_2_;
    local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
    local_50.fakeValue = local_68.fakeValue;
    local_50.currentCryptoKey = local_68.currentCryptoKey;
    local_50.hiddenValue = local_68.hiddenValue;
    (__this_01->fields).ILNHMPEGKDD.fields.fakeValueActive = local_68.fakeValueActive;
    (__this_01->fields).ILNHMPEGKDD.fields.inited = local_68.inited;
    *(undefined2 *)&(__this_01->fields).ILNHMPEGKDD.fields.field_0x12 = local_68._18_2_;
    (__this_01->fields).ILNHMPEGKDD.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (__this_01->fields).ILNHMPEGKDD.fields.fakeValue = local_68.fakeValue;
    (__this_01->fields).ILNHMPEGKDD.fields.currentCryptoKey = local_68.currentCryptoKey;
    (__this_01->fields).ILNHMPEGKDD.fields.hiddenValue = local_68.hiddenValue;
    (__this->fields).BOOKHNOMHGM = __this_01;
    thunk_FUN_01c20e04(&(__this->fields).BOOKHNOMHGM,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

