// Nekki.SF2.GUI.Map.MapPanel$$HPKGLFMFKPI @ RVA 0x349E7A8

void Nekki_SF2_GUI_Map_MapPanel__HPKGLFMFKPI
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_01;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  byte bVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568489 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ZoneScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_MNOIMJDFMMJ__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12044);
    DAT_04568489 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    if ((BHHBEIACGPB->fields).OHOEDCBKNGO != false) {
      return;
    }
    __this_00 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
    if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      bVar4 = 1;
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), bVar1) {
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = bVar4 & (*(byte *)&local_50.fields._current[0xb].klass ^ 0xff);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
      if (bVar4 != 0) {
        return;
      }
      pUVar3 = (__this->fields)._scrollItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar3 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar3,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar3,Method_UnityEngine_GameObject_GetComponent<ZoneScrollItem>__);
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if (__this_01 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_0359ea04;
          Nekki_SF2_GUI_Map_ZoneScrollItem__Init(__this_01,BHHBEIACGPB,(MethodInfo *)0x0);
          CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                        thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
          System_Action<object>___ctor();
          Nekki_SF2_GUI_Map_ZoneScrollItem__add_OnClickBattle
                    (__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this_01,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._IENOFGNDANH_k__BackingField;
          if (pNVar2 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) goto LAB_0359ea04;
          Nekki_SF2_GUI_Shop_Scroll__AddItem
                    (pNVar2,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_01,(MethodInfo *)0x0);
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_12044,(MethodInfo *)0x0);
        }
        pNVar2 = (__this->fields)._IENOFGNDANH_k__BackingField;
        if (pNVar2 != (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
          Nekki_SF2_GUI_Shop_Scroll__ScrollToBegin(pNVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0359ea04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

