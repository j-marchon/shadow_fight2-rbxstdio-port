// FIKENOMMMBH.OKMPNICILPN$$.ctor @ RVA 0x34E4628

void FIKENOMMMBH_OKMPNICILPN___ctor
               (FIKENOMMMBH_OKMPNICILPN_o *__this,System_String_o *DEKCPPOJFEH,
               System_Collections_Generic_List_HEFOANCOHDC__o *JPGEBIDNGPB,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__bool__o item;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_KeyValuePair_string__bool___o *pSVar5;
  JMDPBFOCHHP_o *pJVar6;
  POLAJNLKPAK_o *__this_00;
  MethodInfo_2639930 *in_x4;
  System_Collections_Generic_KeyValuePair_string__bool__array *pSVar7;
  System_Collections_Generic_List_KeyValuePair_string__bool___o **ppSVar8;
  Il2CppClass *pIVar9;
  System_Collections_Generic_KeyValuePair_object__bool__o __this_01;
  undefined1 local_88 [8];
  void *pvStack_80;
  Il2CppObject *local_78;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  Il2CppObject *local_60;
  
  if ((DAT_04568750 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_bool>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_bool>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_bool>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_bool>>_TypeInfo);
    DAT_04568750 = 1;
  }
  local_70 = (undefined1  [8])0x0;
  uStack_68._0_4_ = 0;
  uStack_68._4_4_ = 0;
  local_60 = (Il2CppObject *)0x0;
  pSVar5 = (System_Collections_Generic_List_KeyValuePair_string__bool___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_bool>>_TypeInfo);
  System_Collections_Generic_List<KeyValuePair<object,_bool>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar5,
             Method_System_Collections_Generic_List<KeyValuePair<string,_bool>>__ctor__);
  ppSVar8 = &(__this->fields).INGEFFGPJPB;
  *ppSVar8 = pSVar5;
  thunk_FUN_01c20e04(ppSVar8,pSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JIJLBFGKNJK = DEKCPPOJFEH;
  thunk_FUN_01c20e04(&__this->fields,DEKCPPOJFEH);
  if (JPGEBIDNGPB == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
             (System_Collections_Generic_List_object__o *)JPGEBIDNGPB,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  uStack_68 = pvStack_80;
  local_70 = local_88;
  local_60 = local_78;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    pIVar3 = local_60;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
      return;
    }
    if (local_60 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = *ppSVar8;
    pIVar9 = local_60[4].klass;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar6 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pJVar6->fields).FMPOOGLPALN;
    if (__this_00 == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = POLAJNLKPAK__IOELKHFHKGO(__this_00,(System_String_o *)pIVar3[4].klass,(MethodInfo *)0x0)
    ;
    local_88 = (undefined1  [8])0x0;
    pvStack_80 = (void *)0x0;
    __this_01.fields._8_8_ = pIVar9;
    __this_01.fields.key = (Il2CppObject *)local_88;
    System_Collections_Generic_KeyValuePair<object,_bool>___ctor
              (__this_01,(Il2CppObject *)(ulong)bVar4,
               SUB81(Method_System_Collections_Generic_KeyValuePair<string,_bool>__ctor__,0),in_x4);
    lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_bool>>_Add__;
    if (pSVar5 == (System_Collections_Generic_List_KeyValuePair_string__bool___o *)0x0) break;
    item.fields._8_8_ = pvStack_80;
    item.fields.key = (Il2CppObject *)local_88;
    pSVar7 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pSVar7 == (System_Collections_Generic_KeyValuePair_string__bool__array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (pSVar5->fields)._size;
    if (uVar1 < (uint)pSVar7->max_length) {
      (pSVar5->fields)._size = uVar1 + 1;
      pSVar7->m_Items[(int)uVar1].fields.key = (System_String_o *)local_88;
      *(void **)&pSVar7->m_Items[(int)uVar1].fields.value = pvStack_80;
      thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,0);
    }
    else {
      System_Collections_Generic_List<KeyValuePair<object,_bool>>__AddWithResize
                ((System_Collections_Generic_List_T__o *)pSVar5,item,
                 *(MethodInfo_2668090 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

