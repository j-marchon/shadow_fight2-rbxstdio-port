// TypeDefIndex 3177
// Namespace: 
// public static class FIKENOMMMBH
// Fields:

// ===== public static void CMNODHIFJAH(List<HEFOANCOHDC> GJBLBEALOBO, List<string> NICHJKGBOHB)  [RVA 0x34E29E4]
// FIKENOMMMBH$$CMNODHIFJAH @ RVA 0x34E29E4

void FIKENOMMMBH__CMNODHIFJAH
               (System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               System_Collections_Generic_List_string__o *NICHJKGBOHB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  JMDPBFOCHHP_o *pJVar5;
  POLAJNLKPAK_o *__this;
  System_String_o *message;
  Il2CppClass *item;
  System_String_array *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568747 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_18332/*"found restricted perk: "*/);
    DAT_04568747 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)GJBLBEALOBO,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      do {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        pIVar3 = local_70.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
          return;
        }
      } while (local_70.fields._current == (Il2CppObject *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar5 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this = (pJVar5->fields).FMPOOGLPALN;
      if (__this == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = POLAJNLKPAK__IOELKHFHKGO(__this,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    } while (bVar4);
    if (NICHJKGBOHB == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = pIVar3[4].klass;
    pSVar6 = (NICHJKGBOHB->fields)._items;
    (NICHJKGBOHB->fields)._version = (NICHJKGBOHB->fields)._version + 1;
    if (pSVar6 == (System_String_array *)0x0) break;
    uVar1 = (NICHJKGBOHB->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (NICHJKGBOHB->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (System_String_o *)item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)NICHJKGBOHB,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    message = System_String__Concat
                        (StringLiteral_18332/*"found restricted perk: "*/,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool OLAIMOFPEIL(bool DKCOAMDMOKM)  [RVA 0x34E2C78]
// FIKENOMMMBH$$OLAIMOFPEIL @ RVA 0x34E2C78

/* WARNING: Type propagation algorithm not settling */

bool FIKENOMMMBH__OLAIMOFPEIL(bool DKCOAMDMOKM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  NJNCPNBIPCD_o *__this;
  
  method_00 = (MethodInfo *)(ulong)DKCOAMDMOKM;
  if ((DAT_04568748 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17825/*"dlgRaidItemsCheat_Title"*/);
    FUN_01bab630(&StringLiteral_17824/*"dlgRaidItemsCheat"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_11125/*"Redress player model manually in shop before running tests (forbidden equip is used)"*/);
    DAT_04568748 = 1;
  }
  bVar1 = FIKENOMMMBH__DBNJAEEPFFJ(method_00);
  if (bVar1) {
    if (!DKCOAMDMOKM) {
      return false;
    }
  }
  else {
    bVar1 = FIKENOMMMBH__PKMMPNIBFOI((MethodInfo *)(ulong)bVar1);
    if (!DKCOAMDMOKM) {
      return !bVar1;
    }
    if (!bVar1) {
      return true;
    }
  }
  JJPNLEPEAFM__JNDPLPKDPCP
            (StringLiteral_17825/*"dlgRaidItemsCheat_Title"*/,StringLiteral_17824/*"dlgRaidItemsCheat"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
             (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
             (MethodInfo *)0x0);
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this != (NJNCPNBIPCD_o *)0x0) {
      NJNCPNBIPCD__HJNOLAEOPJF(__this,StringLiteral_11125/*"Redress player model manually in shop before running tests (forbidden equip is used)"*/,(MethodInfo *)0x0);
      return false;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private static void CANFFBLJIDC(List<HEFOANCOHDC> GJBLBEALOBO, Dictionary<string, List<string>> KENFFDHLNDA)  [RVA 0x34E3470]
// FIKENOMMMBH$$CANFFBLJIDC @ RVA 0x34E3470

void FIKENOMMMBH__CANFFBLJIDC
               (System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               System_Collections_Generic_Dictionary_string__List_string___o *KENFFDHLNDA,
               MethodInfo *method)

{
  System_String_o *key;
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  JMDPBFOCHHP_o *pJVar5;
  POLAJNLKPAK_o *__this;
  System_String_o *value;
  System_Collections_Generic_List_object__o *pSVar6;
  Il2CppClass *pIVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 035e3490 to 036e3497 has its CatchHandler @ 035e35d4 */
  if ((DAT_04568749 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_Add__);
                    /* try { // try from 035e34ac to 036e34bb has its CatchHandler @ 035e35d0 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_ContainsKey__);
                    /* try { // try from 035e34bc to 036e34cb has its CatchHandler @ 035e35cc */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__);
                    /* try { // try from 035e34cc to 036e35ef has its CatchHandler @ 035e3384 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_19886/*"no_group"*/);
    DAT_04568749 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)GJBLBEALOBO,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    do {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
      pIVar3 = local_80.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
        return;
      }
    } while (local_80.fields._current == (Il2CppObject *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e34bc with catch @ 035e35cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e34ac with catch @ 035e35d0
                        */
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3490 with catch @ 035e35d4
                        */
    if (pJVar5 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (pJVar5->fields).FMPOOGLPALN;
    if (__this == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value = POLAJNLKPAK__LMFIOPLCOHM(__this,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0);
                    /* try { // try from 035e35f0 to 036e35f3 has its CatchHandler @ 035e3614 */
                    /* try { // try from 035e35f4 to 036e361b has its CatchHandler @ 035e3384 */
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (KENFFDHLNDA == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) break;
    key = StringLiteral_19886/*"no_group"*/;
    if (!bVar4) {
      key = value;
    }
                    /* catch() { ... } // from try @ 035e35f0 with catch @ 035e3614 */
    bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)KENFFDHLNDA,
                       (Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_List<string>>_ContainsKey__
                      );
    if (bVar4) {
                    /* try { // try from 035e361c to 036e3623 has its CatchHandler @ 035e3638 */
                    /* try { // try from 035e3624 to 036e362f has its CatchHandler @ 035e3384 */
                    /* try { // try from 035e3630 to 036e3637 has its CatchHandler @ 035e3638 */
      pSVar6 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)KENFFDHLNDA,
                          (Il2CppObject *)key,
                          Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__
                         );
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e361c with catch @ 035e3638
                       catch(type#2 @ 00000000) { ... } // from try @ 035e3630 with catch @ 035e3638
                        */
      pIVar7 = pIVar3[4].klass;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)pIVar7;
        thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1);
      }
      else {
                    /* try { // try from 035e36ec to 036e3817 has its CatchHandler @ 035e36ec
                       catch() { ... } // from try @ 035e36ec with catch @ 035e36ec
                       catch() { ... } // from try @ 035e3918 with catch @ 035e36ec
                       catch() { ... } // from try @ 035e394c with catch @ 035e36ec
                       catch() { ... } // from try @ 035e399c with catch @ 035e36ec
                       catch() { ... } // from try @ 035e39bc with catch @ 035e36ec
                       catch() { ... } // from try @ 035e39e8 with catch @ 035e36ec
                       catch() { ... } // from try @ 035e3a10 with catch @ 035e36ec */
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar6,(Il2CppObject *)pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      pSVar6 = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (pSVar6,Method_System_Collections_Generic_List<string>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar7 = pIVar3[4].klass;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar6,(Il2CppObject *)pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      System_Collections_Generic_Dictionary<object,_object>__Add
                ((System_Collections_Generic_Dictionary_object__object__o *)KENFFDHLNDA,
                 (Il2CppObject *)key,(Il2CppObject *)pSVar6,
                 Method_System_Collections_Generic_Dictionary<string,_List<string>>_Add__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void BFDIPEEOJMA()  [RVA 0x34E3828]
// FIKENOMMMBH$$BFDIPEEOJMA @ RVA 0x34E3828

void FIKENOMMMBH__BFDIPEEOJMA(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int32_t iVar9;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar10;
  JMDPBFOCHHP_o *pJVar11;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this_00;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar12;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar13;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Il2CppClass *pIVar14;
  ACHLOMELAJE_o *pAVar15;
  GGHCLMEFIGO_o *pGVar16;
  char *pcVar17;
  DOPEEDABNEK_o *pDVar18;
  System_Object_array *pSVar19;
  void *pvVar20;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  System_Xml_XmlNode_o *pSVar21;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 035e3840 to 036e3847 has its CatchHandler @ 035e3a48 */
                    /* try { // try from 035e385c to 036e3863 has its CatchHandler @ 035e3938 */
                    /* try { // try from 035e3870 to 036e387b has its CatchHandler @ 035e3934 */
  if ((DAT_0456874a & 1) == 0) {
    FUN_01bab630(&Method_FIKENOMMMBH_ABNEHHIKCOE_MIOIHMOAIAB__);
    FUN_01bab630(&FIKENOMMMBH_ABNEHHIKCOE_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<IGFGDDANEPE>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<HOOAAGABMBL>__);
                    /* try { // try from 035e38b4 to 036e38bf has its CatchHandler @ 035e3928 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
                    /* try { // try from 035e38c4 to 036e38cf has its CatchHandler @ 035e3924 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
                    /* try { // try from 035e38dc to 036e38e3 has its CatchHandler @ 035e391c */
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 035e38f0 to 036e38f7 has its CatchHandler @ 035e3a44 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
                    /* try { // try from 035e3900 to 036e3903 has its CatchHandler @ 035e3930 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
                    /* try { // try from 035e3908 to 036e390f has its CatchHandler @ 035e392c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
                    /* try { // try from 035e3914 to 036e3917 has its CatchHandler @ 035e3920 */
                    /* try { // try from 035e3918 to 036e3947 has its CatchHandler @ 035e36ec */
                    /* catch() { ... } // from try @ 035e38dc with catch @ 035e391c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
                    /* catch() { ... } // from try @ 035e3914 with catch @ 035e3920 */
                    /* catch() { ... } // from try @ 035e38c4 with catch @ 035e3924 */
                    /* catch() { ... } // from try @ 035e38b4 with catch @ 035e3928 */
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
                    /* catch() { ... } // from try @ 035e3908 with catch @ 035e392c */
                    /* catch() { ... } // from try @ 035e3900 with catch @ 035e3930 */
                    /* catch() { ... } // from try @ 035e3870 with catch @ 035e3934 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 035e385c with catch @ 035e3938 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 035e3948 to 036e394b has its CatchHandler @ 035e3a28 */
                    /* try { // try from 035e394c to 036e3993 has its CatchHandler @ 035e36ec */
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_5279/*"Delete restricted or unknown items\n"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
                    /* try { // try from 035e3994 to 036e399b has its CatchHandler @ 035e3a24 */
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
                    /* try { // try from 035e399c to 036e39b7 has its CatchHandler @ 035e36ec */
    DAT_0456874a = 1;
    in_x1 = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  bVar3 = FIKENOMMMBH__LFLNJMODHCP(StringLiteral_3076/*"Armor"*/,in_x1);
                    /* try { // try from 035e39b8 to 036e39bb has its CatchHandler @ 035e3a00 */
                    /* try { // try from 035e39bc to 036e39d3 has its CatchHandler @ 035e36ec */
  bVar4 = FIKENOMMMBH__LFLNJMODHCP(StringLiteral_7066/*"Helm"*/,method_00);
  bVar5 = FIKENOMMMBH__LFLNJMODHCP(StringLiteral_14870/*"Weapon"*/,method_01);
                    /* try { // try from 035e39d4 to 036e39d7 has its CatchHandler @ 035e3a40 */
                    /* try { // try from 035e39d8 to 036e39df has its CatchHandler @ 035e3a3c */
  bVar6 = FIKENOMMMBH__LFLNJMODHCP(StringLiteral_11017/*"Ranged"*/,method_02);
                    /* try { // try from 035e39e0 to 036e39e3 has its CatchHandler @ 035e3a38 */
                    /* try { // try from 035e39e4 to 036e39e7 has its CatchHandler @ 035e3a34 */
                    /* try { // try from 035e39e8 to 036e39f7 has its CatchHandler @ 035e36ec */
  bVar7 = FIKENOMMMBH__LFLNJMODHCP(StringLiteral_8772/*"Magic"*/,method_03);
                    /* try { // try from 035e39f8 to 036e3a0f has its CatchHandler @ 035e3a24 */
                    /* catch() { ... } // from try @ 035e39b8 with catch @ 035e3a00 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
                    /* try { // try from 035e3a10 to 036e3a1b has its CatchHandler @ 035e36ec */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 035e3a1c to 036e3a23 has its CatchHandler @ 035e3a24 */
                    /* catch() { ... } // from try @ 035e3994 with catch @ 035e3a24
                       catch() { ... } // from try @ 035e39f8 with catch @ 035e3a24
                       catch() { ... } // from try @ 035e3a1c with catch @ 035e3a24 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 035e3948 with catch @ 035e3a28 */
    DAT_04565b7d = '\x01';
  }
                    /* catch() { ... } // from try @ 035e39e4 with catch @ 035e3a34 */
                    /* catch() { ... } // from try @ 035e39e0 with catch @ 035e3a38 */
                    /* catch() { ... } // from try @ 035e39d8 with catch @ 035e3a3c */
                    /* catch() { ... } // from try @ 035e39d4 with catch @ 035e3a40 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035e38f0 with catch @ 035e3a44 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 035e3840 with catch @ 035e3a48 */
  }
                    /* catch() { ... } // from try @ 035e3818 with catch @ 035e3a4c */
                    /* try { // try from 035e3a50 to 036e3b03 has its CatchHandler @ 035e3a50
                       catch() { ... } // from try @ 035e3a50 with catch @ 035e3a50
                       catch() { ... } // from try @ 035e3b38 with catch @ 035e3a50
                       catch() { ... } // from try @ 035e3bb0 with catch @ 035e3a50
                       catch() { ... } // from try @ 035e3bdc with catch @ 035e3a50
                       catch() { ... } // from try @ 035e3c1c with catch @ 035e3a50 */
  pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar15 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar16 = (pAVar15->fields).OIDPLCLELEN, pGVar16 != (GGHCLMEFIGO_o *)0x0)) {
    __this_02 = (pGVar16->fields).DPOPJKJLDEE;
    __this = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this,Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    if (__this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                               ), bVar8) {
                    /* try { // try from 035e3b04 to 036e3b0b has its CatchHandler @ 035e3bc0 */
        pIVar10 = (Il2CppObject *)thunk_FUN_01bda818(FIKENOMMMBH_ABNEHHIKCOE_TypeInfo);
        System_Object___ctor(pIVar10,(MethodInfo *)0x0);
                    /* try { // try from 035e3b18 to 036e3b23 has its CatchHandler @ 035e3bbc */
        if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar10 = pIVar10 + 1;
        pIVar10->klass = (Il2CppClass *)local_80.fields._current;
                    /* try { // try from 035e3b2c to 036e3b37 has its CatchHandler @ 035e3bb4 */
        thunk_FUN_01c20e04(pIVar10);
        if (pIVar10->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035e3b38 to 036e3bab has its CatchHandler @ 035e3a50 */
        if ((pIVar10->klass->_1).namespaze == (char *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3b2c with catch @ 035e3bb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3bac with catch @ 035e3bb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3b18 with catch @ 035e3bbc
                        */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3b04 with catch @ 035e3bc0
                        */
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 035e3bd8 to 036e3bdb has its CatchHandler @ 035e3c04 */
            DAT_04563eaa = '\x01';
          }
                    /* try { // try from 035e3bdc to 036e3c13 has its CatchHandler @ 035e3a50 */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar18 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          if (pDVar18 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          source = (pDVar18->fields)._MOCBNLFMNAL_k__BackingField;
                    /* catch() { ... } // from try @ 035e3bd8 with catch @ 035e3c04 */
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
                    /* try { // try from 035e3c14 to 036e3c1b has its CatchHandler @ 035e3c30 */
                    /* try { // try from 035e3c1c to 036e3c27 has its CatchHandler @ 035e3a50 */
                    /* try { // try from 035e3c28 to 036e3c2f has its CatchHandler @ 035e3c30 */
          System_Func<object,_bool>___ctor();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e3c14 with catch @ 035e3c30
                       catch(type#2 @ 00000000) { ... } // from try @ 035e3c28 with catch @ 035e3c30
                        */
                    /* try { // try from 035e3c34 to 036e3cf3 has its CatchHandler @ 035e3c34
                       catch() { ... } // from try @ 035e3c34 with catch @ 035e3c34
                       catch() { ... } // from try @ 035e3d8c with catch @ 035e3c34
                       catch() { ... } // from try @ 035e3f0c with catch @ 035e3c34
                       catch() { ... } // from try @ 035e3f44 with catch @ 035e3c34
                       catch() { ... } // from try @ 035e3f78 with catch @ 035e3c34 */
          pIVar12 = System_Linq_Enumerable__FirstOrDefault<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate
                               ,Method_System_Linq_Enumerable_FirstOrDefault<HOOAAGABMBL>__);
          lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
          if (pIVar12 == (Il2CppObject *)0x0) {
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e3f70 with catch @ 035e3f8c
                       catch(type#2 @ 00000000) { ... } // from try @ 035e3f84 with catch @ 035e3f8c
                        */
              FUN_01bab8c8();
            }
            pIVar14 = pIVar10->klass;
            pSVar19 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar19->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar19->m_Items[(int)uVar1] = (Il2CppObject *)pIVar14;
              thunk_FUN_01c20e04();
            }
            else {
                    /* try { // try from 035e3cf4 to 036e3cfb has its CatchHandler @ 035e3f30 */
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)pIVar14,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
                    /* try { // try from 035e3d08 to 036e3d17 has its CatchHandler @ 035e3f20 */
            }
          }
        }
        else {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pJVar11 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (pJVar11 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pIVar10->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pcVar17 = (pIVar10->klass->_1).namespaze;
          if (pcVar17 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_00 = (pJVar11->fields)._LEIIIBPIJGJ_k__BackingField;
          if (__this_00 == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar8 = JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA
                            (__this_00,*(System_String_o **)(pcVar17 + 0x18),(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
          pIVar14 = pIVar10->klass;
          if (bVar8) {
            if (pIVar14 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar9 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)pIVar14,(MethodInfo *)0x0);
            if (iVar9 < 0) {
              if (pIVar10->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 035e3bac to 036e3baf has its CatchHandler @ 035e3bb8 */
              IGFGDDANEPE__DJJHOOKLHHL((IGFGDDANEPE_o *)pIVar10->klass,0,(MethodInfo *)0x0);
                    /* try { // try from 035e3bb0 to 036e3bd7 has its CatchHandler @ 035e3a50 */
            }
          }
          else {
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e3f78 to 036e3f83 has its CatchHandler @ 035e3c34 */
              FUN_01bab8c8();
            }
            pSVar19 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar19->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar19->m_Items[(int)uVar1] = (Il2CppObject *)pIVar14;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)pIVar14,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
                    /* try { // try from 035e3d18 to 036e3d27 has its CatchHandler @ 035e3f2c */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
      bVar8 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)__this,
                         Method_DJNBJHPDKDP_OBECCOPBADO<IGFGDDANEPE>__);
      if (bVar8) {
        if ((((!bVar3 && !bVar4) && !bVar5) && !bVar6) && !bVar7) {
          return;
        }
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035e3d54 to 036e3d6f has its CatchHandler @ 035e3f1c */
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
                    /* try { // try from 035e3d84 to 036e3d8b has its CatchHandler @ 035e3f28 */
        }
                    /* try { // try from 035e3d8c to 036e3efb has its CatchHandler @ 035e3c34 */
        pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar15 == (ACHLOMELAJE_o *)0x0) goto LAB_035e3f84;
        pSVar21 = (pAVar15->fields).LNPJFGHNPFN;
        __this_01 = (System_Text_StringBuilder_o *)
                    thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(__this_01,StringLiteral_5279/*"Delete restricted or unknown items\n"*/,(MethodInfo *)0x0);
        if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035e3f84;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,__this,
                   Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                                 ), pIVar10 = local_80.fields._current, bVar3) {
          if ((Il2CppClass *)local_80.fields._current == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar14 = ((Il2CppClass_1 *)&(local_80.fields._current)->klass)->klass;
          if (pIVar14 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e3f70 to 036e3f77 has its CatchHandler @ 035e3f8c */
            FUN_01bab8c8();
          }
          pvVar20 = (pIVar14->_1).image;
          pSVar13 = (System_String_o *)
                    (**(code **)((long)pvVar20 + 1000))
                              (pIVar14,*(undefined8 *)((long)pvVar20 + 0x3f0));
          pSVar13 = System_String__Concat(pSVar13,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Text_StringBuilder__Append(__this_01,pSVar13,(MethodInfo *)0x0);
          pcVar17 = ((Il2CppClass_1 *)&pIVar10->klass)->namespaze;
          if (pcVar17 != (char *)0x0) {
            pcVar17[0xd1] = '\0';
          }
          bVar3 = System_Collections_Generic_List<object>__Remove
                            ((System_Collections_Generic_List_object__o *)__this_02,pIVar10,
                             Method_System_Collections_Generic_List<IGFGDDANEPE>_Remove__);
          if (pSVar21 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035e3f40 with catch @ 035e3f68 */
            FUN_01bab8c8(bVar3);
          }
          (*(pSVar21->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar21,((Il2CppClass_1 *)&pIVar10->klass)->klass,
                     (pSVar21->klass->vtable)._25_RemoveChild.method);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_035e3f84;
        pIVar10 = (Il2CppObject *)
                  (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                            (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError(pIVar10,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 035e3efc to 036e3eff has its CatchHandler @ 035e3f24 */
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 035e3f00 to 036e3f03 has its CatchHandler @ 035e3f18 */
                    /* try { // try from 035e3f04 to 036e3f07 has its CatchHandler @ 035e3f14 */
                    /* try { // try from 035e3f08 to 036e3f0b has its CatchHandler @ 035e3f10 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035e3f0c to 036e3f3f has its CatchHandler @ 035e3c34 */
        thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3f08 with catch @ 035e3f10
                        */
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3f04 with catch @ 035e3f14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3f00 with catch @ 035e3f18
                        */
      pAVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3d54 with catch @ 035e3f1c
                        */
      if (pAVar15 != (ACHLOMELAJE_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3d08 with catch @ 035e3f20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3efc with catch @ 035e3f24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3d84 with catch @ 035e3f28
                        */
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar15,true,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3d18 with catch @ 035e3f2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e3cf4 with catch @ 035e3f30
                        */
                    /* try { // try from 035e3f40 to 036e3f43 has its CatchHandler @ 035e3f68 */
                    /* try { // try from 035e3f44 to 036e3f6f has its CatchHandler @ 035e3c34 */
        return;
      }
    }
  }
LAB_035e3f84:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e3f84 to 036e3f8b has its CatchHandler @ 035e3f8c */
  FUN_01bab8c8();
}


// ===== public static void EIGKJJOBINM(OLKKAIFGGAK BCKBBGCOMJD, string IHNKCJHDDKD)  [RVA 0x34E4284]
// FIKENOMMMBH$$EIGKJJOBINM @ RVA 0x34E4284

void FIKENOMMMBH__EIGKJJOBINM
               (OLKKAIFGGAK_o *BCKBBGCOMJD,System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  return;
}


// ===== public static bool DBNJAEEPFFJ()  [RVA 0x34E2E08]
// FIKENOMMMBH$$DBNJAEEPFFJ @ RVA 0x34E2E08

/* WARNING: Removing unreachable block (ram,0x035e316c) */
/* WARNING: Removing unreachable block (ram,0x035e3064) */

bool FIKENOMMMBH__DBNJAEEPFFJ(MethodInfo *method)

{
  Il2CppObject *IKKAMAMLIKA;
  bool bVar1;
  bool bVar2;
  PJKHAJKEHEL_o *pPVar3;
  System_Collections_Generic_List_object__o *__this;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  LMDGNPDFNKF_o *__this_02;
  ACHLOMELAJE_o *pAVar5;
  byte bVar6;
  int iVar7;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  int32_t local_84;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456874b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456874b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84 = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pPVar3 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
  if ((pPVar3 == (PJKHAJKEHEL_o *)0x0) ||
     (__this = (System_Collections_Generic_List_object__o *)
               (*(pPVar3->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                         (pPVar3,(pPVar3->klass->vtable)._5_ACBMLHJIFMD.method),
     __this == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,__this,Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
                    /* try { // try from 035e2f38 to 036e3047 has its CatchHandler @ 035e2f38
                       catch() { ... } // from try @ 035e2f38 with catch @ 035e2f38
                       catch() { ... } // from try @ 035e3050 with catch @ 035e2f38
                       catch() { ... } // from try @ 035e30dc with catch @ 035e2f38
                       catch() { ... } // from try @ 035e3100 with catch @ 035e2f38
                       catch() { ... } // from try @ 035e3140 with catch @ 035e2f38 */
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
LAB_035e2f48:
  do {
    do {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        IKKAMAMLIKA = local_80.fields._current;
        if (!bVar1) {
          bVar6 = 0;
          iVar7 = 0xd;
          goto LAB_035e3120;
        }
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pAVar5->fields).OIDPLCLELEN;
        if (__this_00 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar4 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(HOOAAGABMBL_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
      } while (pIVar4 == (IGFGDDANEPE_o *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE__GMJMEKENPAP((HOOAAGABMBL_o *)IKKAMAMLIKA,true,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar7 = (__this_01->fields)._size;
    } while (iVar7 < 2);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
      if (!bVar1) break;
      if ((HOOAAGABMBL_o *)local_a0.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e30d8 to 036e30db has its CatchHandler @ 035e30e0 */
        FUN_01bab8c8();
      }
    } while (((HOOAAGABMBL_Fields *)((long)local_a0.fields._current + 0x10))->
             _NDHGDCODPPJ_k__BackingField != 0);
                    /* try { // try from 035e3048 to 036e304f has its CatchHandler @ 035e30e4 */
                    /* try { // try from 035e3050 to 036e30d7 has its CatchHandler @ 035e2f38 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if ((HOOAAGABMBL_o *)IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->ODMIMKMDBPO;
    if (__this_02 == (LMDGNPDFNKF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = LMDGNPDFNKF__NIIAHHEEJAO
                      (__this_02,
                       ((HOOAAGABMBL_Fields *)((long)IKKAMAMLIKA + 0x10))->
                       _COIPKAKHDFP_k__BackingField,&local_84,(MethodInfo *)0x0);
    if (!bVar2) {
      if (iVar7 != 2 || !bVar1) goto LAB_035e3110;
      goto LAB_035e2f48;
    }
    if (iVar7 == local_84) {
      if (!bVar1) goto LAB_035e3110;
    }
    else if (local_84 + -1 < iVar7) {
LAB_035e3110:
      bVar6 = 1;
      iVar7 = 0xc;
LAB_035e3120:
                    /* catch() { ... } // from try @ 035e30fc with catch @ 035e3128 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
                    /* try { // try from 035e3138 to 036e313f has its CatchHandler @ 035e3154 */
                    /* try { // try from 035e3140 to 036e314b has its CatchHandler @ 035e2f38 */
                    /* try { // try from 035e314c to 036e3153 has its CatchHandler @ 035e3154 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e3138 with catch @ 035e3154
                       catch(type#2 @ 00000000) { ... } // from try @ 035e314c with catch @ 035e3154
                        */
      return (bool)(bVar6 & iVar7 == 0xc);
    }
  } while( true );
}


// ===== public static bool PKMMPNIBFOI()  [RVA 0x34E3274]
// FIKENOMMMBH$$PKMMPNIBFOI @ RVA 0x34E3274

bool FIKENOMMMBH__PKMMPNIBFOI(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  PJKHAJKEHEL_o *pPVar4;
  System_Collections_Generic_List_object__o *__this;
  JMDPBFOCHHP_o *pJVar5;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456874c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
                    /* try { // try from 035e32a4 to 036e32ab has its CatchHandler @ 035e3310 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
                    /* try { // try from 035e32b4 to 036e32bb has its CatchHandler @ 035e330c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
                    /* try { // try from 035e32bc to 036e3327 has its CatchHandler @ 035e320c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456874c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pPVar4 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
  if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e32b4 with catch @ 035e330c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e32a4 with catch @ 035e3310
                        */
    __this = (System_Collections_Generic_List_object__o *)
             (*(pPVar4->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                       (pPVar4,(pPVar4->klass->vtable)._5_ACBMLHJIFMD.method);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 035e3328 to 036e332b has its CatchHandler @ 035e3354 */
                    /* try { // try from 035e332c to 036e3363 has its CatchHandler @ 035e320c */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 035e3328 with catch @ 035e3354 */
      local_50.fields._current = local_68.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        pIVar1 = local_50.fields._current;
                    /* try { // try from 035e3364 to 036e336b has its CatchHandler @ 035e3380 */
        if (!bVar2) break;
                    /* try { // try from 035e336c to 036e3377 has its CatchHandler @ 035e320c */
                    /* try { // try from 035e3378 to 036e337f has its CatchHandler @ 035e3380 */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e3364 with catch @ 035e3380
                       catch(type#2 @ 00000000) { ... } // from try @ 035e3378 with catch @ 035e3380
                        */
                    /* try { // try from 035e3384 to 036e348f has its CatchHandler @ 035e3384
                       catch() { ... } // from try @ 035e3384 with catch @ 035e3384
                       catch() { ... } // from try @ 035e34cc with catch @ 035e3384
                       catch() { ... } // from try @ 035e35f4 with catch @ 035e3384
                       catch() { ... } // from try @ 035e3624 with catch @ 035e3384 */
        pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar5 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pJVar5->fields)._LEIIIBPIJGJ_k__BackingField;
        if (__this_00 == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA(__this_00,pIVar1[1].monitor,(MethodInfo *)0x0);
      } while (bVar3);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HGCLCDJJNGA(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x34E4288]
// FIKENOMMMBH$$HGCLCDJJNGA @ RVA 0x34E4288

void FIKENOMMMBH__HGCLCDJJNGA(OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint length;
  Il2CppObject *LNIGANCLDGE;
  Il2CppObject *collection;
  bool bVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_string__o *NICHJKGBOHB;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  JMDPBFOCHHP_o *pJVar3;
  POLAJNLKPAK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  PJKHAJKEHEL_o *pPVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_0456874d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_3287/*"BEFORE CLEANING"*/);
    FUN_01bab630(&StringLiteral_2630/*"AFTER CLEANING"*/);
    DAT_0456874d = 1;
    method = extraout_x1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  NICHJKGBOHB = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)NICHJKGBOHB,
             Method_System_Collections_Generic_List<string>__ctor__);
  pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
  if ((pPVar4 != (PJKHAJKEHEL_o *)0x0) &&
     (FIKENOMMMBH__CMNODHIFJAH((pPVar4->fields).INGEFFGPJPB,NICHJKGBOHB,in_x2),
     NICHJKGBOHB != (System_Collections_Generic_List_string__o *)0x0)) {
    if (0 < (NICHJKGBOHB->fields)._size) {
      pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
      if (pPVar4 == (PJKHAJKEHEL_o *)0x0) goto LAB_035e4560;
      PJKHAJKEHEL__PBNHNHLEPEJ(pPVar4,(pPVar4->fields).INGEFFGPJPB,NICHJKGBOHB,(MethodInfo *)0x0);
      length = (NICHJKGBOHB->fields)._size;
      in_x2 = (MethodInfo *)(ulong)length;
      (NICHJKGBOHB->fields)._size = 0;
      (NICHJKGBOHB->fields)._version = (NICHJKGBOHB->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(NICHJKGBOHB->fields)._items,0,length,
                            (MethodInfo *)0x0);
      }
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this,Method_System_Collections_Generic_Dictionary<string,_List<string>>__ctor__);
    pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
    if ((pPVar4 != (PJKHAJKEHEL_o *)0x0) &&
       (FIKENOMMMBH__CANFFBLJIDC
                  ((pPVar4->fields).INGEFFGPJPB,
                   (System_Collections_Generic_Dictionary_string__List_string___o *)__this,in_x2),
       __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_a8,__this,
                 Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__)
      ;
      local_80.fields._version = local_a8.fields._version;
      local_80.fields._index = local_a8.fields._index;
      local_80.fields._dictionary = local_a8.fields._dictionary;
      local_80.fields._current.fields.value = local_a8.fields._current.fields.value;
      local_80.fields._current.fields.key = local_a8.fields._current.fields.key;
      local_80.fields._getEnumeratorRetType = local_a8.fields._getEnumeratorRetType;
      local_80.fields._36_4_ = local_a8.fields._36_4_;
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_MoveNext__
                               ), collection = local_80.fields._current.fields.value,
            LNIGANCLDGE = local_80.fields._current.fields.key, bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar3 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pJVar3->fields).FMPOOGLPALN;
        if (__this_00 == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = POLAJNLKPAK__PECPNLGPMEO(__this_00,(System_String_o *)LNIGANCLDGE,(MethodInfo *)0x0)
        ;
        if (collection == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((uVar2 != 0) && ((long)(ulong)uVar2 < (long)*(int *)&collection[1].monitor)) {
          System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)NICHJKGBOHB,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     Method_System_Collections_Generic_List<string>_AddRange__);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                );
      if (0 < (NICHJKGBOHB->fields)._size) {
        pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
        if (pPVar4 == (PJKHAJKEHEL_o *)0x0) goto LAB_035e4560;
        PJKHAJKEHEL__PBNHNHLEPEJ(pPVar4,(pPVar4->fields).INGEFFGPJPB,NICHJKGBOHB,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_035e4560:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool LFLNJMODHCP(string ACCIHBHMFPN)  [RVA 0x34E4100]
// FIKENOMMMBH$$LFLNJMODHCP @ RVA 0x34E4100

bool FIKENOMMMBH__LFLNJMODHCP(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this;
  System_String_o *KGLJICLJHEL;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar5;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar6;
  
  if ((DAT_0456874e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456874e = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pPVar2 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
    lVar3 = (*(pPVar2->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                      (pPVar2,ACCIHBHMFPN,0,(pPVar2->klass->vtable)._4_CJPIJKJDHGI.method);
    if (lVar3 != 0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar4 == (JMDPBFOCHHP_o *)0x0) ||
         (__this = (pJVar4->fields)._LEIIIBPIJGJ_k__BackingField,
         __this == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0)) goto LAB_035e4278;
      bVar1 = JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA
                        (__this,*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KGLJICLJHEL = MGNPHCAAEIO__OKOJOGAHMFP(ACCIHBHMFPN,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
        (__this_00 = (pAVar6->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) &&
       (pIVar5 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,KGLJICLJHEL,(MethodInfo *)0x0),
       pIVar5 != (IGFGDDANEPE_o *)0x0)) {
      NLPJLHOEAOE__KENEIABLCEN((pIVar5->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      return true;
    }
  }
LAB_035e4278:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

