// Nekki.SF2.GUI.Common.Hints.HintGroup$$RebuildHints @ RVA 0x34FBBE4

void Nekki_SF2_GUI_Common_Hints_HintGroup__RebuildHints
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  uint length;
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_HintUI__o *pSVar7;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568824 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568824 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields)._Description;
  if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    iVar3 = UnityEngine_Transform__GetSiblingIndex(pUVar6,(MethodInfo *)0x0);
    pNVar8 = (__this->fields)._ExtraImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar8 = (__this->fields)._ExtraImage;
                    /* try { // try from 035fbd04 to 036fbe67 has its CatchHandler @ 035fbd04
                       catch() { ... } // from try @ 035fbd04 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbe70 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbea4 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbec8 with catch @ 035fbd04
                       catch() { ... } // from try @ 035fbf08 with catch @ 035fbd04 */
      if ((pNVar8 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_035fbedc;
      iVar4 = UnityEngine_Transform__GetSiblingIndex(pUVar6,(MethodInfo *)0x0);
      bVar1 = iVar4 == 0;
    }
    else {
      bVar1 = false;
    }
    pSVar7 = (__this->fields).DEDJHBCOMCJ;
    if (pSVar7 != (System_Collections_Generic_List_HintUI__o *)0x0) {
      if (0 < (pSVar7->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar7,
                   Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
        local_60.fields._index = local_98.fields._index;
        local_60.fields._version = local_98.fields._version;
        local_60.fields._list = local_98.fields._list;
        local_60.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__
                                 ), bVar2) {
          if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)local_60.fields._current,
                                   (MethodInfo *)0x0);
          Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
        pSVar7 = (__this->fields).DEDJHBCOMCJ;
        if (pSVar7 == (System_Collections_Generic_List_HintUI__o *)0x0) goto LAB_035fbedc;
        length = (pSVar7->fields)._size;
        method_00 = (MethodInfo *)(ulong)length;
        (pSVar7->fields)._size = 0;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (0 < (int)length) {
          System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
        }
      }
      Nekki_SF2_GUI_Common_Hints_HintGroup__HPFLNMEJPEF(__this,true,method_00);
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
      if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
        System_Collections_Generic_List<Int32Enum>__GetEnumerator
                  (&local_98,__this_00,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                                 ), bVar2) {
          Nekki_SF2_GUI_Common_Hints_HintGroup__LDEODGHMPCG
                    (__this,(int32_t)local_80.fields._current,method_00);
        }
        System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
        pNVar5 = (__this->fields)._Description;
        if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          if (iVar3 == 0) {
            UnityEngine_Transform__SetAsFirstSibling(pUVar6,(MethodInfo *)0x0);
          }
          else {
            UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
                    /* try { // try from 035fbe68 to 036fbe6f has its CatchHandler @ 035fbeac */
          }
                    /* try { // try from 035fbe70 to 036fbe9f has its CatchHandler @ 035fbd04 */
          pNVar8 = (__this->fields)._ExtraImage;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pNVar8 = (__this->fields)._ExtraImage;
                    /* try { // try from 035fbea0 to 036fbea3 has its CatchHandler @ 035fbea8 */
                    /* try { // try from 035fbea4 to 036fbec3 has its CatchHandler @ 035fbd04 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fbea0 with catch @ 035fbea8
                        */
            if ((pNVar8 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
               pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_035fbedc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035fbe68 with catch @ 035fbeac
                        */
            if (bVar1) {
              UnityEngine_Transform__SetAsFirstSibling(pUVar6,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
            }
          }
                    /* try { // try from 035fbec4 to 036fbec7 has its CatchHandler @ 035fbef0 */
                    /* try { // try from 035fbec8 to 036fbeff has its CatchHandler @ 035fbd04 */
          return;
        }
      }
    }
  }
LAB_035fbedc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

