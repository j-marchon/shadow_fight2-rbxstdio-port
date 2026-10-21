// TypeDefIndex 2053
// Namespace: 
// [CompilerGenerated]
// private sealed class FindClanWidget.OJANMCJCPGM : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public FindClanWidget <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x32B5F50]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget.OJANMCJCPGM$$.ctor @ RVA 0x32B5F50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32B60D0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget.OJANMCJCPGM$$System.IDisposable.Dispose @ RVA 0x32B60D0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_o *__this,
               MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32B60D4]
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


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x32B6294]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget.OJANMCJCPGM$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x32B6294

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_o *__this,MethodInfo *method
          )

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32B629C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget.OJANMCJCPGM$$System.Collections.IEnumerator.Reset @ RVA 0x32B629C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_o *__this,
               MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32B62D4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget.OJANMCJCPGM$$System.Collections.IEnumerator.get_Current @ RVA 0x32B62D4

Il2CppObject *
Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_OJANMCJCPGM_o *__this,MethodInfo *method
          )

{
  return (__this->fields).__2__current;
}

