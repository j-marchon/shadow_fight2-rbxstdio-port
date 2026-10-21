// TypeDefIndex 1680
// Namespace: 
// public class HCKCBFOGMMJ : JICOLGELJGE<LFELBGMCDHD>
// Fields:
//   private Dictionary<long, GKLPDMLELJF> CMJNDHHGCBI; // 0x20
//   public IKCANHIFLGJ HDPMNCIAOFO; // 0x28
//   private const int BMEIENPOGCJ = 149;

// ===== public override void BOADOENMDDN()  [RVA 0x31CD730]
// HCKCBFOGMMJ$$BOADOENMDDN @ RVA 0x31CD730

void HCKCBFOGMMJ__BOADOENMDDN(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_00;
  IKCANHIFLGJ_o *__this_01;
  
  if ((DAT_04566c80 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Clear__);
                    /* try { // try from 032cd758 to 033cd76f has its CatchHandler @ 032ce808 */
    DAT_04566c80 = 1;
  }
  __this_00 = (__this->fields).CMJNDHHGCBI;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Clear__);
                    /* try { // try from 032cd774 to 033cd78f has its CatchHandler @ 032ce804 */
    __this_01 = (__this->fields).HDPMNCIAOFO;
    if (__this_01 != (IKCANHIFLGJ_o *)0x0) {
      IKCANHIFLGJ__KHONLKFPFLF(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AHKEBCAMMDL(IBMLPPNMDCI BBEGIKHKBID)  [RVA 0x31CD790]
// HCKCBFOGMMJ$$AHKEBCAMMDL @ RVA 0x31CD790

void HCKCBFOGMMJ__AHKEBCAMMDL(HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *BBEGIKHKBID,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_long__o *__this_00;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  System_Int64_array *pSVar5;
  void *item;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
                    /* try { // try from 032cd790 to 033cd7a3 has its CatchHandler @ 032ce800 */
                    /* try { // try from 032cd7a8 to 033cd7c3 has its CatchHandler @ 032ce7fc */
                    /* try { // try from 032cd7c4 to 033cd7d3 has its CatchHandler @ 032ce7f8 */
  if ((DAT_04566c81 & 1) == 0) {
                    /* try { // try from 032cd7d8 to 033cd80f has its CatchHandler @ 032ce7f4 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                );
                    /* try { // try from 032cd810 to 033ce81f has its CatchHandler @ 032ccf88 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
    DAT_04566c81 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_long__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
  System_Collections_Generic_List<long>___ctor
            (__this_00,Method_System_Collections_Generic_List<long>__ctor__);
  pSVar4 = (__this->fields).CMJNDHHGCBI;
  if ((pSVar4 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) &&
     (__this_01 = System_Collections_Generic_Dictionary<long,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__
                            ),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<long,_object>__GetEnumerator
              (&local_b8,__this_01,
               Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
              );
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._dictionary = local_b8.fields._dictionary;
    local_80.fields._currentValue = local_b8.fields._currentValue;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                        );
      if (!bVar3) break;
      if (local_80.fields._currentValue == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (BBEGIKHKBID == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (BBEGIKHKBID->fields).EHBNKDHKJNI;
      if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = local_80.fields._currentValue[1].monitor;
      bVar3 = Google_Protobuf_Collections_RepeatedField<long>__Contains
                        (__this_02,(int64_t)item,
                         Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
      lVar2 = Method_System_Collections_Generic_List<long>_Add__;
      if (!bVar3) {
        if (__this_00 == (System_Collections_Generic_List_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar5 == (System_Int64_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = (int64_t)item;
        }
        else {
          System_Collections_Generic_List<long>__AddWithResize
                    (__this_00,(int64_t)item,
                     *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
              );
    if (__this_00 != (System_Collections_Generic_List_long__o *)0x0) {
      System_Collections_Generic_List<long>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,__this_00,
                 Method_System_Collections_Generic_List<long>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
      local_a0.fields._current = local_b8.fields._currentValue;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<long>__Dispose
                    (&local_a0,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
          return;
        }
        pSVar4 = (__this->fields).CMJNDHHGCBI;
        if (pSVar4 == (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) break;
        System_Collections_Generic_Dictionary<long,_object>__Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                   (int64_t)local_a0.fields._current,
                   Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Remove__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string OKJEEFHMCCD(long OGPGLGPMEPD, bool OJIMIGCACLG)  [RVA 0x31CDB44]
// HCKCBFOGMMJ$$OKJEEFHMCCD @ RVA 0x31CDB44

System_String_o *
HCKCBFOGMMJ__OKJEEFHMCCD
          (HCKCBFOGMMJ_o *__this,int64_t OGPGLGPMEPD,bool OJIMIGCACLG,MethodInfo *method)

{
  GKLPDMLELJF_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)OJIMIGCACLG;
  if ((DAT_04566c82 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14457/*"Unknown"*/);
    DAT_04566c82 = 1;
  }
  pGVar1 = HCKCBFOGMMJ__LLEJFHJIBHC(__this,OGPGLGPMEPD,method_00);
  if (pGVar1 == (GKLPDMLELJF_o *)0x0) {
    pSVar2 = StringLiteral_14457/*"Unknown"*/;
    if (!OJIMIGCACLG) {
      pSVar2 = (System_String_o *)0x0;
    }
  }
  else {
    pSVar2 = (pGVar1->fields).LLBEKLPKDHK;
  }
  return pSVar2;
}


// ===== public GKLPDMLELJF LLEJFHJIBHC(long OGPGLGPMEPD)  [RVA 0x31CDBB8]
// HCKCBFOGMMJ$$LLEJFHJIBHC @ RVA 0x31CDBB8

GKLPDMLELJF_o *
HCKCBFOGMMJ__LLEJFHJIBHC(HCKCBFOGMMJ_o *__this,int64_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *pSVar2;
  GKLPDMLELJF_o *pGVar3;
  
  if ((DAT_04566c83 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Item__);
    DAT_04566c83 = 1;
  }
  pSVar2 = (__this->fields).CMJNDHHGCBI;
  if (pSVar2 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,OGPGLGPMEPD,
                       Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__
                      );
    if (!bVar1) {
      return (GKLPDMLELJF_o *)0x0;
    }
    pSVar2 = (__this->fields).CMJNDHHGCBI;
    if (pSVar2 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
      pGVar3 = (GKLPDMLELJF_o *)
               System_Collections_Generic_Dictionary<long,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          OGPGLGPMEPD,
                          Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Item__
                         );
      return pGVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EFCMPBGIEGJ(IBMLPPNMDCI DBIAAJNKHLH, Action<LFELBGMCDHD> BLMFLPJJMPF)  [RVA 0x31CDC4C]
// HCKCBFOGMMJ$$EFCMPBGIEGJ @ RVA 0x31CDC4C

void HCKCBFOGMMJ__EFCMPBGIEGJ
               (HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *DBIAAJNKHLH,
               System_Action_LFELBGMCDHD__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  LFELBGMCDHD_o *pLVar2;
  IBMLPPNMDCI_o *__this_00;
  int64_t iVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  System_Action_LFELBGMCDHD__o *method_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar5;
  int index;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_02;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04566c84 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04566c84 = 1;
  }
  pLVar2 = HCKCBFOGMMJ__GCNKHODLPFF(__this,DBIAAJNKHLH,(MethodInfo *)method_00);
  if ((((pLVar2 != (LFELBGMCDHD_o *)0x0) &&
       (pGVar4 = (pLVar2->fields).EHBNKDHKJNI,
       pGVar4 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) &&
      (DBIAAJNKHLH != (IBMLPPNMDCI_o *)0x0)) &&
     (pGVar5 = (DBIAAJNKHLH->fields).EHBNKDHKJNI,
     pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    if ((pGVar4->fields).count < (pGVar5->fields).count) {
      __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
      IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
      pGVar5 = (DBIAAJNKHLH->fields).EHBNKDHKJNI;
      if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        index = 0;
        do {
          if ((pGVar5->fields).count <= index) {
            HCKCBFOGMMJ__KLNMLOOCAAO(__this,__this_00,BLMFLPJJMPF,method);
            return;
          }
          __this_02 = (__this->fields).CMJNDHHGCBI;
          iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                            (pGVar5,index,
                             Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
          if (__this_02 == (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) break;
          bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                             iVar3,
                             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__
                            );
          if (!bVar1) {
            if ((__this_00 == (IBMLPPNMDCI_o *)0x0) ||
               (pGVar5 = (__this_00->fields).EHBNKDHKJNI,
               pGVar5 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
            if ((pGVar5->fields).count < 0x95) {
              __this_01 = (DBIAAJNKHLH->fields).EHBNKDHKJNI;
              if (__this_01 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
              iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                (__this_01,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
              Google_Protobuf_Collections_RepeatedField<long>__Add
                        (pGVar5,iVar3,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
            }
          }
          pGVar5 = (DBIAAJNKHLH->fields).EHBNKDHKJNI;
          index = index + 1;
        } while (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0);
      }
    }
    else if (BLMFLPJJMPF != (System_Action_LFELBGMCDHD__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032cdde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                ((BLMFLPJJMPF->fields).super.super.method_code,pLVar2,
                 (BLMFLPJJMPF->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AKEKGJAFBOC()  [RVA 0x31CE04C]
// HCKCBFOGMMJ$$AKEKGJAFBOC @ RVA 0x31CE04C

void HCKCBFOGMMJ__AKEKGJAFBOC(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  IKCANHIFLGJ_o *__this_00;
  
  (*(__this->klass->vtable)._4_BOADOENMDDN.methodPtr)
            (__this,(__this->klass->vtable)._4_BOADOENMDDN.method);
  __this_00 = (__this->fields).HDPMNCIAOFO;
  if (__this_00 != (IKCANHIFLGJ_o *)0x0) {
    IKCANHIFLGJ__KHONLKFPFLF(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GKLPDMLELJF IGFFDAJMPIH()  [RVA 0x31CE078]
// HCKCBFOGMMJ$$IGFFDAJMPIH @ RVA 0x31CE078

GKLPDMLELJF_o * HCKCBFOGMMJ__IGFFDAJMPIH(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  int iVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_04566c85 & 1) == 0) {
    FUN_01bab630(&Method_CAOJHCDPDBH_OBECCOPBADO<long,_GKLPDMLELJF>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_get_Current__
                );
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
    DAT_04566c85 = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  bVar2 = CAOJHCDPDBH__OBECCOPBADO<long,_object>
                    ((System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).CMJNDHHGCBI,
                     Method_CAOJHCDPDBH_OBECCOPBADO<long,_GKLPDMLELJF>__);
  if (bVar2) {
    return (GKLPDMLELJF_o *)0x0;
  }
  pSVar4 = (__this->fields).CMJNDHHGCBI;
  if (pSVar4 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary<long,_object>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                       Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Count__);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    iVar3 = LIIFLGALGNK__HLMBDJOGONJ(iVar3,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).CMJNDHHGCBI;
    if ((pSVar4 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) &&
       (__this_00 = System_Collections_Generic_Dictionary<long,_object>__get_Values
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                               Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__
                              ),
       __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<long,_object>__GetEnumerator
                (&local_38,__this_00,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
      iVar5 = iVar3 + 1;
      do {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                          );
        pIVar1 = local_38.fields._currentValue;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                    );
          return (GKLPDMLELJF_o *)0x0;
        }
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
      return (GKLPDMLELJF_o *)pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private LFELBGMCDHD GCNKHODLPFF(IBMLPPNMDCI BBEGIKHKBID)  [RVA 0x31CDE10]
// HCKCBFOGMMJ$$GCNKHODLPFF @ RVA 0x31CDE10

LFELBGMCDHD_o *
HCKCBFOGMMJ__GCNKHODLPFF(HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *BBEGIKHKBID,MethodInfo *method)

{
  LFELBGMCDHD_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  int64_t OGPGLGPMEPD;
  GKLPDMLELJF_o *item;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_02;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04566c86 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04566c86 = 1;
  }
  __this_00 = (LFELBGMCDHD_o *)thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo);
  LFELBGMCDHD___ctor(__this_00,(MethodInfo *)0x0);
  if ((BBEGIKHKBID != (IBMLPPNMDCI_o *)0x0) &&
     (__this_01 = (BBEGIKHKBID->fields).EHBNKDHKJNI,
     __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    index = 0;
    do {
      if ((__this_01->fields).count <= index) {
        return __this_00;
      }
      method_00 = Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__;
      OGPGLGPMEPD = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                              (__this_01,index,
                               (MethodInfo_295D6A0 *)
                               Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
      item = HCKCBFOGMMJ__LLEJFHJIBHC(__this,OGPGLGPMEPD,method_00);
      if (item != (GKLPDMLELJF_o *)0x0) {
        if ((__this_00 == (LFELBGMCDHD_o *)0x0) ||
           (__this_02 = (__this_00->fields).EHBNKDHKJNI,
           __this_02 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) break;
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,(Il2CppObject *)item,
                   Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
      }
      __this_01 = (BBEGIKHKBID->fields).EHBNKDHKJNI;
      index = index + 1;
    } while (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HHAFBOFFEHA(LFELBGMCDHD KIFIMBGOPFG, int EGJLNEOGECM)  [RVA 0x31CE284]
// HCKCBFOGMMJ$$HHAFBOFFEHA @ RVA 0x31CE284

void HCKCBFOGMMJ__HHAFBOFFEHA
               (HCKCBFOGMMJ_o *__this,LFELBGMCDHD_o *KIFIMBGOPFG,int32_t EGJLNEOGECM,
               MethodInfo *method)

{
  System_Action_T__o *pSVar1;
  
  if ((DAT_04566c87 & 1) == 0) {
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_PIIKLDFBOMK__);
    DAT_04566c87 = 1;
  }
  pSVar1 = JICOLGELJGE<object>__PIIKLDFBOMK
                     ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,
                      Method_JICOLGELJGE<LFELBGMCDHD>_PIIKLDFBOMK__);
  if (pSVar1 != (System_Action_T__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,KIFIMBGOPFG,
               (pSVar1->fields).super.super.method);
  }
  JICOLGELJGE<object>__FAJIGDCHCKL
            ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,Method_JICOLGELJGE<LFELBGMCDHD>_FAJIGDCHCKL__);
  return;
}


// ===== public void DNCLOHOEGAK(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x31CE320]
// HCKCBFOGMMJ$$DNCLOHOEGAK @ RVA 0x31CE320

void HCKCBFOGMMJ__DNCLOHOEGAK(HCKCBFOGMMJ_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  GKLPDMLELJF_o *pGVar1;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_00;
  int64_t OGPGLGPMEPD;
  
  if ((DAT_04566c88 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_set_Item__);
    DAT_04566c88 = 1;
  }
  if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
    return;
  }
  OGPGLGPMEPD = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
  pGVar1 = HCKCBFOGMMJ__LLEJFHJIBHC(__this,OGPGLGPMEPD,method);
  __this_00 = (__this->fields).CMJNDHHGCBI;
  if (__this_00 == (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pGVar1 != (GKLPDMLELJF_o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,OGPGLGPMEPD,
               (Il2CppObject *)HEHMPFLAEGE,
               Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_set_Item__);
    return;
  }
  System_Collections_Generic_Dictionary<long,_object>__Add
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,OGPGLGPMEPD,
             (Il2CppObject *)HEHMPFLAEGE,
             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Add__);
  return;
}


// ===== public void CGADNHMLNNJ(IBMLPPNMDCI DBIAAJNKHLH, Action<LFELBGMCDHD> BLMFLPJJMPF)  [RVA 0x31CE3D4]
// HCKCBFOGMMJ$$CGADNHMLNNJ @ RVA 0x31CE3D4

void HCKCBFOGMMJ__CGADNHMLNNJ
               (HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *DBIAAJNKHLH,
               System_Action_LFELBGMCDHD__o *BLMFLPJJMPF,MethodInfo *method)

{
  int32_t iVar1;
  SFRequestSender_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  Il2CppObject *__this_01;
  
  if ((DAT_04566c8d & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_HCKCBFOGMMJ_NKLNDGMMAAH__);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
    FUN_01bab630(&HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo);
    FUN_01bab630(&StringLiteral_18646/*"get_short_players"*/);
    DAT_04566c8d = 1;
  }
  iVar1 = JICOLGELJGE<object>__OPCNBJOLDNG
                    ((JICOLGELJGE_T__o *)__this,(System_Action_T__o *)BLMFLPJJMPF,
                     Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF_00 =
       (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  __this_01 = (Il2CppObject *)thunk_FUN_01bda818(HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = (Il2CppClass *)DBIAAJNKHLH;
  thunk_FUN_01c20e04(__this_01 + 1,DBIAAJNKHLH);
  *(int32_t *)&__this_01[1].monitor = iVar1;
  if (__this_00 != (SFRequestSender_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_18646/*"get_short_players"*/,
               (Google_Protobuf_IMessage_o *)DBIAAJNKHLH,BLMFLPJJMPF_00,0.0,__this_01,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31CE3D8]
// HCKCBFOGMMJ$$.ctor @ RVA 0x31CE3D8

void HCKCBFOGMMJ___ctor(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_00;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o **ppSVar1;
  IKCANHIFLGJ_o *__this_01;
  IKCANHIFLGJ_o **ppIVar2;
  SFRequestSender_o *pKVar3;
  System_Action_o *CJNHFNHJHPE;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  MethodInfo *extraout_x1;
  DCHAJIMIFHP_o *__this_02;
  
  if ((DAT_04566c89 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&Method_HCKCBFOGMMJ_AKEKGJAFBOC__);
    FUN_01bab630(&Method_HCKCBFOGMMJ_JGLGAMMLMGF__);
    FUN_01bab630(&IKCANHIFLGJ_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>__ctor__);
    FUN_01bab630(&StringLiteral_20480/*"refresh_player_event"*/);
    DAT_04566c89 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>__ctor__);
  ppSVar1 = &(__this->fields).CMJNDHHGCBI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (IKCANHIFLGJ_o *)thunk_FUN_01bda818(IKCANHIFLGJ_TypeInfo);
  IKCANHIFLGJ___ctor(__this_01,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).HDPMNCIAOFO;
  *ppIVar2 = __this_01;
  thunk_FUN_01c20e04(ppIVar2,__this_01);
  JICOLGELJGE<object>___ctor((JICOLGELJGE_T__o *)__this,Method_JICOLGELJGE<LFELBGMCDHD>__ctor__);
  pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar3 != (SFRequestSender_o *)0x0) {
    SFRequestSender__HKAALOKPBPG(pKVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar3 != (SFRequestSender_o *)0x0) {
      __this_02 = (pKVar3->fields).super.FNHOHLGNHGN;
      EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__MPFFOIIBAKO(__this_02,StringLiteral_20480/*"refresh_player_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LFELBGMCDHD LEEJLJFBENE()  [RVA 0x31CE5A8]
// HCKCBFOGMMJ$$LEEJLJFBENE @ RVA 0x31CE5A8

LFELBGMCDHD_o * HCKCBFOGMMJ__LEEJLJFBENE(HCKCBFOGMMJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  LFELBGMCDHD_o *__this_00;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_03;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04566c8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_get_Current__
                );
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
                );
    DAT_04566c8a = 1;
    method = extraout_x1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (LFELBGMCDHD_o *)thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo,method);
  LFELBGMCDHD___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).CMJNDHHGCBI;
  if ((__this_01 != (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) &&
     (__this_02 = System_Collections_Generic_Dictionary<long,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_get_Values__
                            ),
     __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<long,_object>__GetEnumerator
              (&local_48,__this_02,
               Method_System_Collections_Generic_Dictionary_ValueCollection<long,_GKLPDMLELJF>_GetEnumerator__
              );
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<long,_GKLPDMLELJF>_Dispose__
                    );
          return __this_00;
        }
      } while (local_48.fields._currentValue == (Il2CppObject *)0x0);
      if (__this_00 == (LFELBGMCDHD_o *)0x0) break;
      __this_03 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_03 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                 local_48.fields._currentValue,
                 Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JGLGAMMLMGF(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31CE770]
// HCKCBFOGMMJ$$JGLGAMMLMGF @ RVA 0x31CE770

void HCKCBFOGMMJ__JGLGAMMLMGF(HCKCBFOGMMJ_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  GKLPDMLELJF_o *HEHMPFLAEGE;
  
  if ((DAT_04566c8b & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    DAT_04566c8b = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    HEHMPFLAEGE = (GKLPDMLELJF_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    HCKCBFOGMMJ__DNCLOHOEGAK(__this,HEHMPFLAEGE,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKLNDGMMAAH(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31CE7D0]
// HCKCBFOGMMJ$$NKLNDGMMAAH @ RVA 0x31CE7D0

void HCKCBFOGMMJ__NKLNDGMMAAH(HCKCBFOGMMJ_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  LFELBGMCDHD_o *pLVar3;
  int32_t EGJLNEOGECM;
  MethodInfo *in_x3;
  Il2CppObject *pIVar4;
  
  if ((DAT_04566c8c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd7d8 with catch @ 032ce7f4
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd7c4 with catch @ 032ce7f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd7a8 with catch @ 032ce7fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd790 with catch @ 032ce800
                        */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<LFELBGMCDHD>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd774 with catch @ 032ce804
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cd758 with catch @ 032ce808
                        */
    FUN_01bab630(&HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo);
    FUN_01bab630(&StringLiteral_5956/*"Error: PlayersCache::onGetPlayers"*/);
                    /* try { // try from 032ce820 to 033ce837 has its CatchHandler @ 032ce8dc */
    DAT_04566c8c = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
  if (pIVar4 == (Il2CppObject *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 032ce8cc to 033ce8db has its CatchHandler @ 032ce8dc */
                    /* catch() { ... } // from try @ 032ce820 with catch @ 032ce8dc
                       catch() { ... } // from try @ 032ce8cc with catch @ 032ce8dc */
                    /* try { // try from 032ce8e0 to 033ce8e3 has its CatchHandler @ 032ce8ec */
    UnityEngine_Debug__LogError(StringLiteral_5956/*"Error: PlayersCache::onGetPlayers"*/,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 032ce838 to 033ce8cb has its CatchHandler @ 032ccf88 */
  bVar1 = (HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (pIVar4->klass->_2).naturalAligment) &&
     ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo)) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
      pLVar3 = (LFELBGMCDHD_o *)
               KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<LFELBGMCDHD>__);
      HCKCBFOGMMJ__JCMMLIKICBK(__this,pLVar3,method);
      pLVar3 = HCKCBFOGMMJ__GCNKHODLPFF(__this,(IBMLPPNMDCI_o *)pIVar4[1].klass,method);
      EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
    }
    else {
                    /* try { // try from 032ce8e4 to 033ce8ef has its CatchHandler @ 032ccf88 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ce8e0 with catch @ 032ce8ec
                        */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5956/*"Error: PlayersCache::onGetPlayers"*/,(MethodInfo *)0x0);
      EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
      pLVar3 = (LFELBGMCDHD_o *)0x0;
    }
    HCKCBFOGMMJ__HHAFBOFFEHA(__this,pLVar3,EGJLNEOGECM,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pIVar4);
}


// ===== private void KLNMLOOCAAO(IBMLPPNMDCI DBIAAJNKHLH, Action<LFELBGMCDHD> BLMFLPJJMPF)  [RVA 0x31CDF10]
// HCKCBFOGMMJ$$KLNMLOOCAAO @ RVA 0x31CDF10

void HCKCBFOGMMJ__KLNMLOOCAAO
               (HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *DBIAAJNKHLH,
               System_Action_LFELBGMCDHD__o *BLMFLPJJMPF,MethodInfo *method)

{
  int32_t iVar1;
  SFRequestSender_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  Il2CppObject *__this_01;
  
  if ((DAT_04566c8d & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_HCKCBFOGMMJ_NKLNDGMMAAH__);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
    FUN_01bab630(&HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo);
    FUN_01bab630(&StringLiteral_18646/*"get_short_players"*/);
    DAT_04566c8d = 1;
  }
  iVar1 = JICOLGELJGE<object>__OPCNBJOLDNG
                    ((JICOLGELJGE_T__o *)__this,(System_Action_T__o *)BLMFLPJJMPF,
                     Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF_00 =
       (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  __this_01 = (Il2CppObject *)thunk_FUN_01bda818(HCKCBFOGMMJ_NCDAOAEGGBC_TypeInfo);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = (Il2CppClass *)DBIAAJNKHLH;
  thunk_FUN_01c20e04(__this_01 + 1,DBIAAJNKHLH);
  *(int32_t *)&__this_01[1].monitor = iVar1;
  if (__this_00 != (SFRequestSender_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_18646/*"get_short_players"*/,
               (Google_Protobuf_IMessage_o *)DBIAAJNKHLH,BLMFLPJJMPF_00,0.0,__this_01,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JCMMLIKICBK(LFELBGMCDHD KIFIMBGOPFG)  [RVA 0x31CE934]
// HCKCBFOGMMJ$$JCMMLIKICBK @ RVA 0x31CE934

/* WARNING: Removing unreachable block (ram,0x032ceb10) */

void HCKCBFOGMMJ__JCMMLIKICBK(HCKCBFOGMMJ_o *__this,LFELBGMCDHD_o *KIFIMBGOPFG,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04566c8e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_GetEnumerator__);
    DAT_04566c8e = 1;
  }
  if ((KIFIMBGOPFG == (LFELBGMCDHD_o *)0x0) ||
     (__this_00 = (KIFIMBGOPFG->fields).EHBNKDHKJNI,
     __this_00 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_032cea18;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_032cea18:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) break;
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<GKLPDMLELJF>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_032cea74;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_032cea74:
    HEHMPFLAEGE = (GKLPDMLELJF_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    HCKCBFOGMMJ__DNCLOHOEGAK(__this,HEHMPFLAEGE,method);
  } while( true );
  if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar6 = pSVar4->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar3;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_032ceae4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_032ceae4:
    (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  }
  return;
}


// ===== public void JOMFHMDCMNG(long BFCOKBECIDF, Action<LFELBGMCDHD> BLMFLPJJMPF)  [RVA 0x31CEBFC]
// HCKCBFOGMMJ$$JOMFHMDCMNG @ RVA 0x31CEBFC

void HCKCBFOGMMJ__JOMFHMDCMNG
               (HCKCBFOGMMJ_o *__this,int64_t BFCOKBECIDF,System_Action_LFELBGMCDHD__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04566c8f & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_04566c8f = 1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  if ((__this_00 != (IBMLPPNMDCI_o *)0x0) &&
     (__this_01 = (__this_00->fields).EHBNKDHKJNI,
     __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    Google_Protobuf_Collections_RepeatedField<long>__Add
              (__this_01,BFCOKBECIDF,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    HCKCBFOGMMJ__KLNMLOOCAAO(__this,__this_00,BLMFLPJJMPF,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

