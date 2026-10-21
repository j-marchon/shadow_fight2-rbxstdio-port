// Nekki.SF2.GUI.Common.Hints.HintCache$$GLLDGFLHFPP @ RVA 0x32B8310

void Nekki_SF2_GUI_Common_Hints_HintCache__GLLDGFLHFPP
               (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,
               UnityEngine_Transform_o *JJHEGPBBMLG,
               System_Collections_Generic_List_HintUI__o *LKFALEIFDIO,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *x;
  Nekki_SF2_GUI_Common_Hints_HintUI_array *pNVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456746a & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    __this = (Nekki_SF2_GUI_Common_Hints_HintCache_o *)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456746a = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (LKFALEIFDIO != (System_Collections_Generic_List_HintUI__o *)0x0) {
    length = (LKFALEIFDIO->fields)._size;
    (LKFALEIFDIO->fields)._size = 0;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(LKFALEIFDIO->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Common_Hints_HintCache_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
            return;
          }
          x = Nekki_SF2_GUI_Common_Hints_HintCache__KABFGOPBGOI
                        ((Nekki_SF2_GUI_Common_Hints_HintCache_o *)(ulong)bVar3,
                         (int32_t)local_70.fields._current,HDAEJLFDNJC,JJHEGPBBMLG,method);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          lVar2 = Method_System_Collections_Generic_List<HintUI>_Add__;
        } while (!bVar3);
        pNVar4 = (LKFALEIFDIO->fields)._items;
        (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
        if (pNVar4 == (Nekki_SF2_GUI_Common_Hints_HintUI_array *)0x0) break;
        uVar1 = (LKFALEIFDIO->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (LKFALEIFDIO->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = x;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,x);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,(Il2CppObject *)x,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

