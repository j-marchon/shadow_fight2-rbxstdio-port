// Nekki.SF2.GUI.TableView$$DAAGPOAOHCK @ RVA 0x30D8D54

void Nekki_SF2_GUI_TableView__DAAGPOAOHCK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_LinkedList_TableViewCell__o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  IKGDKGBHEFN_o *pIVar5;
  KELJDKIIHMM_o *pKVar6;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar7;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_60;
  
  if ((DAT_04566342 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_GetEnumerator__);
    DAT_04566342 = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._36_4_ = 0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_60.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  local_60.fields._list = (System_Collections_Generic_LinkedList_T__o *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_60.fields._version = 0;
  local_60.fields._20_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  pIVar5 = (__this->fields).MKCAEDADDII;
  if (pIVar5 != (IKGDKGBHEFN_o *)0x0) {
    pSVar2 = (pIVar5->fields).LNKABGKKHGB;
    if (pSVar2 == (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0) goto LAB_031d8f9c;
    System_Collections_Generic_LinkedList<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_LinkedList_T__o *)pSVar2,
               Method_System_Collections_Generic_LinkedList<TableViewCell>_GetEnumerator__);
    local_60.fields._node = local_b8.fields._node;
    local_60.fields._list = local_b8.fields._list;
    local_60.fields._current = local_b8.fields._current;
    local_60.fields._version = local_b8.fields._version;
    local_60.fields._20_4_ = local_b8.fields._20_4_;
    local_60.fields._index = local_b8.fields._index;
    local_60.fields._36_4_ = local_b8.fields._36_4_;
    while (bVar1 = System_Collections_Generic_LinkedList_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_LinkedList_Enumerator<object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_Dispose__);
    pIVar5 = (__this->fields).MKCAEDADDII;
    if ((pIVar5 == (IKGDKGBHEFN_o *)0x0) ||
       (pSVar2 = (pIVar5->fields).LNKABGKKHGB,
       pSVar2 == (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0)) goto LAB_031d8f9c;
    System_Collections_Generic_LinkedList<object>__Clear
              ((System_Collections_Generic_LinkedList_T__o *)pSVar2,
               Method_System_Collections_Generic_LinkedList<TableViewCell>_Clear__);
  }
  pKVar6 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar6 == (KELJDKIIHMM_o *)0x0) {
    return;
  }
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
           (pKVar6->fields)._IKBFEDMFOMJ_k__BackingField;
  if (pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_90,pSVar4,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_90.fields._current.fields.value ==
          (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_90.fields._current.fields.value,
                          (MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
              );
    pKVar6 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
    local_b8.fields._list = (System_Collections_Generic_LinkedList_T__o *)0x0;
    UnityEngine_SocialPlatforms_Range___ctor
              ((UnityEngine_SocialPlatforms_Range_o)&local_b8,0,0,(MethodInfo *)0x0);
    if (pKVar6 != (KELJDKIIHMM_o *)0x0) {
      (pKVar6->fields).CIMDIANAHIM.fields =
           (UnityEngine_SocialPlatforms_Range_Fields)local_b8.fields._list;
      pKVar6 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      if ((pKVar6 != (KELJDKIIHMM_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (pKVar6->fields)._IKBFEDMFOMJ_k__BackingField,
         pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<int,_object>__Clear
                  (pSVar4,Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_Clear__);
        ppNVar7 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
        *ppNVar7 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
        thunk_FUN_01c20e04(ppNVar7,0);
        return;
      }
    }
  }
LAB_031d8f9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

