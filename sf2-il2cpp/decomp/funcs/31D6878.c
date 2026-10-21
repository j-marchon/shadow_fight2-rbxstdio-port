// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$Render @ RVA 0x31D6878

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Render
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar4;
  System_Action_T__o *action;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566cea & 1) == 0) {
    FUN_01bab630(&System_Action<ActivePerkItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkItemContainer_OCFPDBGAFPE__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
    DAT_04566cea = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Fight_ActivePerkItemContainer__JJONOCGMEMK(__this,method);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
  pSVar4 = (__this->fields).DOKOOFIPJGJ;
  if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__
                        );
      item = local_70.fields._current;
      if (!bVar3) break;
      if ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_ActivePerkItem__Render
                ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_70.fields._current,(MethodInfo *)0x0)
      ;
      lVar2 = Method_System_Collections_Generic_List<ActivePerkItem>_Add__;
      if (((Nekki_SF2_GUI_Fight_ActivePerkItem_Fields *)((long)item + 0x10))->
          _PBMMCACCKNJ_k__BackingField != false) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__
              );
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<ActivePerkItem>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                (__this_00,action,Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
      pSVar4 = (__this->fields).DOKOOFIPJGJ;
      if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
        if ((pSVar4->fields)._size == 0) {
          (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
          LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

