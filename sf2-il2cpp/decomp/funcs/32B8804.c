// Nekki.SF2.GUI.Common.Hints.HintCache$$GetHints @ RVA 0x32B8804

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,bool NADBGFOJLMH,
          System_Collections_Generic_List_MIBHAJBEMIK__o *GLIELCCFAGL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *__this_01;
  System_Predicate_T__o *match;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_HintUI__o **ppSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_HintUI__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033b8808 to 034b880b has its CatchHandler @ 033b8810 */
                    /* try { // try from 033b880c to 034b882f has its CatchHandler @ 033b8704 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b8808 with catch @ 033b8810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b87cc with catch @ 033b8814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b87b8 with catch @ 033b8818
                        */
                    /* try { // try from 033b8830 to 034b8833 has its CatchHandler @ 033b885c */
                    /* try { // try from 033b8834 to 034b886b has its CatchHandler @ 033b8704 */
  if ((DAT_0456746d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__,
                 HDAEJLFDNJC,NADBGFOJLMH);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
                    /* catch() { ... } // from try @ 033b8830 with catch @ 033b885c */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_Add__);
                    /* try { // try from 033b886c to 034b8873 has its CatchHandler @ 033b8888 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Find__);
                    /* try { // try from 033b8874 to 034b887f has its CatchHandler @ 033b8704 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
                    /* try { // try from 033b8880 to 034b8887 has its CatchHandler @ 033b8888 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b886c with catch @ 033b8888
                       catch(type#2 @ 00000000) { ... } // from try @ 033b8880 with catch @ 033b8888
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_FLBHNBIBNBD__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_TypeInfo);
    FUN_01bab630(&System_Predicate<HintUI>_TypeInfo);
    DAT_0456746d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (HDAEJLFDNJC == 0) {
    ppSVar5 = &(__this->fields).HJBLBMEDIMJ;
  }
  else {
    if (HDAEJLFDNJC != 1) {
      return (UnityEngine_GameObject_array *)0x0;
    }
    ppSVar5 = &(__this->fields).AINKHCILFAC;
  }
  __this_02 = *ppSVar5;
  if (__this_02 == (System_Collections_Generic_List_HintUI__o *)0x0) {
    return (UnityEngine_GameObject_array *)0x0;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<GameObject>__ctor__);
  if (GLIELCCFAGL != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_T__o *)GLIELCCFAGL,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                             ), bVar3) {
      __this_01 = (Il2CppObject *)
                  thunk_FUN_01bda818(Nekki_SF2_GUI_Common_Hints_HintCache_PIBLNLLNDLC_TypeInfo);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)&__this_01[1].klass = local_80.fields._current._0_4_;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HintUI>_TypeInfo);
      System_Predicate<object>___ctor();
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__Find
                    ((System_Collections_Generic_List_object__o *)__this_02,match,
                     Method_System_Collections_Generic_List<HintUI>_Find__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0)
        ;
        lVar2 = Method_System_Collections_Generic_List<GameObject>_Add__;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pUVar4 = (UnityEngine_GameObject_array *)
               System_Collections_Generic_List<object>__ToArray
                         (__this_00,Method_System_Collections_Generic_List<GameObject>_ToArray__);
      return pUVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

