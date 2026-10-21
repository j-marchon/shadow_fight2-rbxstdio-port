// TypeDefIndex 1098
// Namespace: 
// [CompilerGenerated]
// private sealed class MenuItemStory.HFCPAEEGFKG : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public MenuItemStory <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x30E2BE0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory.HFCPAEEGFKG$$.ctor @ RVA 0x30E2BE0

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x30E2ED4]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory.HFCPAEEGFKG$$System.IDisposable.Dispose @ RVA 0x30E2ED4

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG__System_IDisposable_Dispose
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x30E2ED8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory.HFCPAEEGFKG$$MoveNext @ RVA 0x30E2ED8

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *x;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *pNVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((DAT_045663c9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045663c9 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar3 = &(__this->fields).__2__current;
    *ppIVar3 = __this_00;
    thunk_FUN_01c20e04(ppIVar3,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  pNVar6 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (pNVar6 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) {
    x = (pNVar6->fields).super._label;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    pUVar4 = (pNVar6->fields).super._rightKunai;
    if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
      if (UVar7.fields.x <= 270.0) {
        bVar2 = true;
      }
      else {
        pUVar5 = (pNVar6->fields)._CheckBox;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_031e306c;
        bVar2 = UnityEngine_GameObject__get_activeInHierarchy(pUVar5,(MethodInfo *)0x0);
        bVar2 = !bVar2;
      }
      pUVar4 = (pNVar6->fields).super._rightKunai;
      if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,bVar2,(MethodInfo *)0x0);
        pUVar4 = (pNVar6->fields).super._leftKunai;
        if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UVar7 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
          pUVar4 = (pNVar6->fields).super._leftKunai;
          if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar5,-300.0 <= UVar7.fields.x,(MethodInfo *)0x0);
            return false;
          }
        }
      }
    }
  }
LAB_031e306c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x30E3070]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory.HFCPAEEGFKG$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x30E3070

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30E3078]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory.HFCPAEEGFKG$$System.Collections.IEnumerator.Reset @ RVA 0x30E3078

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x30E30B0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory.HFCPAEEGFKG$$System.Collections.IEnumerator.get_Current @ RVA 0x30E30B0

Il2CppObject *
Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

