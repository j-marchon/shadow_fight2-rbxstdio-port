// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget.OJANMCJCPGM$$MoveNext @ RVA 0x32B60D4

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM__MoveNext
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  Il2CppObject **ppIVar3;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *__this_01;
  System_String_o *__this_02;
  System_String_o *value;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *pNVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  int iVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_04567457 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_04567457 = 1;
    method = extraout_x1;
  }
  iVar8 = (__this->fields).__1__state;
  if (iVar8 != 1) {
    if (iVar8 == 0) {
      (__this->fields).__1__state = -1;
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo,method);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.01,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      bVar1 = true;
      (__this->fields).__1__state = 1;
    }
    else {
LAB_033b6278:
      bVar1 = false;
    }
    return bVar1;
  }
  pNVar6 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *)0x0) &&
     (pNVar4 = (pNVar6->fields)._editBoxForClanName,
     pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0)) {
    iVar8 = 0;
    while (pUVar5 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
          pUVar5 != (UnityEngine_Transform_o *)0x0) {
      iVar2 = UnityEngine_Transform__get_childCount(pUVar5,(MethodInfo *)0x0);
      if (iVar2 <= iVar8) {
        ppSVar7 = &(pNVar6->fields).DEJIFBFIMNN;
        *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
        thunk_FUN_01c20e04(ppSVar7,0);
        goto LAB_033b6278;
      }
      pNVar4 = (pNVar6->fields)._editBoxForClanName;
      if ((((pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
          (pUVar5 = UnityEngine_Transform__GetChild(pUVar5,iVar8,(MethodInfo *)0x0),
          pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) break;
      __this_02 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      pNVar4 = (pNVar6->fields)._editBoxForClanName;
      if ((pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) ||
         (value = UnityEngine_Object__get_name((UnityEngine_Object_o *)pNVar4,(MethodInfo *)0x0),
         __this_02 == (System_String_o *)0x0)) break;
      bVar1 = System_String__StartsWith(__this_02,value,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar5 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) break;
        UVar9 = UnityEngine_Transform__get_localScale(pUVar5,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) break;
        UVar9.fields.y = UVar9.fields.y * 0.7;
        UnityEngine_Transform__set_localScale(pUVar5,UVar9,(MethodInfo *)0x0);
      }
      pNVar4 = (pNVar6->fields)._editBoxForClanName;
      iVar8 = iVar8 + 1;
      if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

