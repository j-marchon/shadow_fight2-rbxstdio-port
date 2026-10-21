// TypeDefIndex 2071
// Namespace: Nekki.SF2.GUI.GeneralMenu
// [DefaultMember("Item")]
// public class GeneralMenuList : MonoBehaviour
// Fields:
//   private List<MenuItemButton> _buttons; // 0x20
//   private ScrollRect _scroll; // 0x28
//   public int selection; // 0x30
//   private bool IMECMAJEGFB; // 0x34

// ===== private void LACIIBLENDJ(int ELACKBJPMNB)  [RVA 0x32B9B00]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$LACIIBLENDJ @ RVA 0x32B9B00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__LACIIBLENDJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t ELACKBJPMNB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  
  if ((DAT_0456747c & 1) == 0) {
                    /* try { // try from 033b9b38 to 034b9ce7 has its CatchHandler @ 033b9b38
                       catch() { ... } // from try @ 033b9b38 with catch @ 033b9b38
                       catch() { ... } // from try @ 033b9f64 with catch @ 033b9b38
                       catch() { ... } // from try @ 033ba07c with catch @ 033b9b38
                       catch() { ... } // from try @ 033ba084 with catch @ 033b9b38
                       catch() { ... } // from try @ 033ba1a8 with catch @ 033b9b38 */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_ENOLJOGNFFL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_IHGOEKHFNPO__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456747c = 1;
  }
  pUVar3 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._buttons;
    if (((__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) &&
        (__this_01 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,0,
                                Method_System_Collections_Generic_List<MenuItemButton>_get_Item__),
        __this_01 != (UnityEngine_Component_o *)0x0)) &&
       (pUVar2 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           (__this_01,Method_UnityEngine_Component_GetComponent<RectTransform>__),
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._scroll;
      if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar2 = (pUVar3->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._scroll;
        if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar2 = (pUVar3->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          fVar7 = ((float)ELACKBJPMNB + -0.5) * UVar8.fields.m_Height;
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar5 = UVar9.fields.m_Height - UVar8.fields.m_Height;
          fVar4 = fVar5;
          if (fVar7 <= fVar5) {
            fVar4 = fVar7;
          }
          fVar6 = fVar4;
          if (fVar7 < 0.0) {
            fVar6 = 0.0;
          }
          getter = (DG_Tweening_Core_DOGetter_float__o *)
                   thunk_FUN_01bda818(fVar4,0,UVar8.fields.m_Width,
                                      DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          setter = (DG_Tweening_Core_DOSetter_float__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 033b9ce8 to 034b9d0f has its CatchHandler @ 033ba0ec */
          DG_Tweening_DOTween__To(getter,setter,1.0 - fVar6 / fVar5,0.1,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void ENOLJOGNFFL(float KEFILECBPMF)  [RVA 0x32B9D20]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$ENOLJOGNFFL @ RVA 0x32B9D20

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__ENOLJOGNFFL
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,float KEFILECBPMF,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
              (__this_00,KEFILECBPMF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x32B9D3C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$Awake @ RVA 0x32B9D3C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Awake
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  System_Object_array *collection;
  System_Collections_Generic_List_MenuItemButton__o *pSVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *ACBNKLODJEG;
  MethodInfo *in_x3;
  int index;
  System_Collections_Generic_List_MenuItemButton__o **ppSVar3;
  
                    /* try { // try from 033b9d44 to 034b9d6f has its CatchHandler @ 033ba0e8 */
  if ((DAT_0456747d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<ScrollRect>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<MenuItemButton>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
                    /* try { // try from 033b9db0 to 034b9db7 has its CatchHandler @ 033ba0e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
                    /* try { // try from 033b9dc0 to 034b9dc7 has its CatchHandler @ 033ba0d4 */
    FUN_01bab630(&System_Collections_Generic_List<MenuItemButton>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_0456747d = 1;
  }
                    /* try { // try from 033b9dd8 to 034b9ddb has its CatchHandler @ 033ba090 */
  collection = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponentsInChildren<MenuItemButton>__);
                    /* try { // try from 033b9de4 to 034b9e03 has its CatchHandler @ 033ba09c */
  pSVar1 = (System_Collections_Generic_List_MenuItemButton__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MenuItemButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             Method_System_Collections_Generic_List<MenuItemButton>__ctor__);
  ppSVar3 = &(__this->fields)._buttons;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
                    /* try { // try from 033b9e1c to 034b9e23 has its CatchHandler @ 033ba0c0 */
  pUVar2 = (UnityEngine_UI_ScrollRect_o *)
           UnityEngine_Component__GetComponentInChildren<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponentInChildren<ScrollRect>__);
                    /* try { // try from 033b9e2c to 034b9e33 has its CatchHandler @ 033ba0c4 */
  (__this->fields)._scroll = pUVar2;
  thunk_FUN_01c20e04();
  pSVar1 = *ppSVar3;
  if (pSVar1 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
                    /* try { // try from 033b9e40 to 034b9e4b has its CatchHandler @ 033ba0cc */
    index = 0;
    do {
                    /* try { // try from 033b9e50 to 034b9e5b has its CatchHandler @ 033ba0c8 */
      if ((pSVar1->fields)._size <= index) {
        if (Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType != 0) {
                    /* try { // try from 033b9eb0 to 034b9ebb has its CatchHandler @ 033ba098 */
          Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
                    (__this,(__this->fields).selection,false,in_x3);
          return;
        }
                    /* try { // try from 033b9ebc to 034b9ecb has its CatchHandler @ 033ba0bc */
        return;
      }
      ACBNKLODJEG = (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,index,
                               Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
                    /* try { // try from 033b9e68 to 034b9e6b has its CatchHandler @ 033ba0a0 */
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__DHBIDNFGACI(__this,ACBNKLODJEG,index,in_x3);
      pSVar1 = (__this->fields)._buttons;
      index = index + 1;
                    /* try { // try from 033b9e80 to 034b9e87 has its CatchHandler @ 033ba0b8 */
    } while (pSVar1 != (System_Collections_Generic_List_MenuItemButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CallIndex(int DPJIDNBJIBG, FBBNEILNOKK GJKJICHICFN)  [RVA 0x32BA454]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$CallIndex @ RVA 0x32BA454

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__CallIndex
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t DPJIDNBJIBG,
               int32_t GJKJICHICFN,MethodInfo *method)

{
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_0456747e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_0456747e = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if ((__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<MenuItemButton>_get_Item__),
     pIVar1 != (Il2CppObject *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x033ba4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1->klass->vtable[10].methodPtr)
              (pIVar1,(ulong)(uint)GJKJICHICFN,pIVar1->klass->vtable[10].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SelecUpItem()  [RVA 0x32BA4CC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$SelecUpItem @ RVA 0x32BA4CC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecUpItem
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *in_x3;
  int32_t index;
  int iVar5;
  
  if ((DAT_0456747f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_0456747f = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    iVar5 = (__this_00->fields)._size;
    if (iVar5 < 1) {
      return;
    }
    index = (__this->fields).selection;
    iVar5 = iVar5 + 1;
    do {
      iVar1 = (__this_00->fields)._size;
      iVar3 = index + iVar1 + -1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      index = iVar3 - iVar2 * iVar1;
      __this_01 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
      if ((__this_01 == (UnityEngine_Component_o *)0x0) ||
         (__this_02 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
         __this_02 == (UnityEngine_GameObject_o *)0x0)) break;
      bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (bVar4) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt(__this,index,true,in_x3);
        return;
      }
      iVar5 = iVar5 + -1;
      if (iVar5 < 2) {
        return;
      }
      __this_00 = (__this->fields)._buttons;
    } while (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSelectionLock(bool CJNHFNHJHPE)  [RVA 0x32BA5AC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$SetSelectionLock @ RVA 0x32BA5AC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SetSelectionLock
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).IMECMAJEGFB = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x32BA5B8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$.ctor @ RVA 0x32BA5B8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SelectItemAt(int GCMHMONNHII, bool OFKBEIFPFMN = True)  [RVA 0x32BA1B8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$SelectItemAt @ RVA 0x32BA1B8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t GCMHMONNHII,
               bool OFKBEIFPFMN,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  System_Action_MenuItemButton__o **ppSVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_Hints_HintList_o *__this_01;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_MenuItemButton__o *pSVar5;
  System_Action_MenuItemButton__o *action;
  
                    /* catch() { ... } // from try @ 033ba138 with catch @ 033ba1bc
                       catch() { ... } // from try @ 033ba1b4 with catch @ 033ba1bc */
  if ((DAT_04567480 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuItemButton>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_EKCOCBIDDON__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo);
    DAT_04567480 = 1;
  }
  if ((__this->fields).IMECMAJEGFB == false) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar5 = (__this->fields)._buttons;
      if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->__9__16_0;
      if (action == (System_Action_MenuItemButton__o *)0x0) {
        if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_MenuItemButton__o *)
                 thunk_FUN_01bda818(System_Action<MenuItemButton>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->__9__16_0;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if (pSVar5 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar5,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<MenuItemButton>_ForEach__);
        pSVar5 = (__this->fields)._buttons;
        (__this->fields).selection = GCMHMONNHII;
        if ((pSVar5 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) &&
           (__this_00 = (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar5,GCMHMONNHII,
                                   Method_System_Collections_Generic_List<MenuItemButton>_get_Item__
                                  ), __this_00 != (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0)
           ) {
          Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection(__this_00,true,(MethodInfo *)0x0);
          if (OFKBEIFPFMN) {
            EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
          }
          lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if ((**(long **)(lVar2 + 0xb8) != 0) &&
             (pSVar5 = (__this->fields)._buttons,
             pSVar5 != (System_Collections_Generic_List_MenuItemButton__o *)0x0)) {
            __this_01 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)
                         (**(long **)(lVar2 + 0xb8) + 0xf0);
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,
                                (__this->fields).selection,
                                Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (__this_01 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
                        (__this_01,pIVar4[4].monitor,(MethodInfo *)0x0);
              if (Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType == 0) {
                return;
              }
              Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__LACIIBLENDJ
                        (__this,(__this->fields).selection,method_00);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void SelecDownItem()  [RVA 0x32BA5C0]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$SelecDownItem @ RVA 0x32BA5C0

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecDownItem
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *in_x3;
  int32_t index;
  int iVar4;
  
  if ((DAT_04567481 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_04567481 = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    iVar4 = (__this_00->fields)._size;
    if (iVar4 < 1) {
      return;
    }
    index = (__this->fields).selection;
    iVar4 = iVar4 + 1;
    do {
      iVar1 = (__this_00->fields)._size;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (index + 1) / iVar1;
      }
      index = (index + 1) - iVar2 * iVar1;
      __this_01 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
      if ((__this_01 == (UnityEngine_Component_o *)0x0) ||
         (__this_02 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
         __this_02 == (UnityEngine_GameObject_o *)0x0)) break;
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (bVar3) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt(__this,index,true,in_x3);
        return;
      }
      iVar4 = iVar4 + -1;
      if (iVar4 < 2) {
        return;
      }
      __this_00 = (__this->fields)._buttons;
    } while (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_count()  [RVA 0x32BA69C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$get_count @ RVA 0x32BA69C

int32_t Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__get_count
                  (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MenuItemButton__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567482 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
    DAT_04567482 = 1;
  }
  pSVar1 = (__this->fields)._buttons;
  if (pSVar1 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private float IHGOEKHFNPO()  [RVA 0x32BA6E4]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$IHGOEKHFNPO @ RVA 0x32BA6E4

float Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__IHGOEKHFNPO
                (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar1 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Deselect()  [RVA 0x32BA700]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$Deselect @ RVA 0x32BA700

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Deselect
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567483 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_GetEnumerator__);
    DAT_04567483 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).IMECMAJEGFB == false) {
    __this_00 = (__this->fields)._buttons;
    if (__this_00 == (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuItemButton>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_MoveNext__
                             ), bVar1) {
      if ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection
                ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)local_38.fields._current,false,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MenuItemButton>_Dispose__
              );
  }
  return;
}


// ===== private void OnEnable()  [RVA 0x32BA858]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$OnEnable @ RVA 0x32BA858

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
            (__this,(__this->fields).selection,false,in_x3);
  return;
}


// ===== public void Init()  [RVA 0x32BA864]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$Init @ RVA 0x32BA864

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Init
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MenuItemButton get_Item(int DPJIDNBJIBG)  [RVA 0x32BA888]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$get_Item @ RVA 0x32BA888

Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *
Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__get_Item
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t DPJIDNBJIBG,
          MethodInfo *method)

{
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *pNVar1;
  
  if ((DAT_04567484 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_04567484 = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    pNVar1 = (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                        Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DHBIDNFGACI(MenuItemButton ACBNKLODJEG, int JJMCKHDALCF)  [RVA 0x32B9ECC]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$DHBIDNFGACI @ RVA 0x32B9ECC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__DHBIDNFGACI
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,
               Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *ACBNKLODJEG,int32_t JJMCKHDALCF,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  UnityEngine_Events_UnityAction_o **ppUVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  
                    /* try { // try from 033b9ee0 to 034b9f07 has its CatchHandler @ 033ba0e4 */
  if ((DAT_04567485 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_BEJFGEIAICM__);
                    /* try { // try from 033b9f0c to 034b9f1b has its CatchHandler @ 033ba094 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_FABOKBNLFJH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_PFGBCIPPPMF__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_TypeInfo);
                    /* try { // try from 033b9f34 to 034b9f63 has its CatchHandler @ 033ba0d0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_HKJAPNOMHFP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_IIMGOGFHFJN__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567485 = 1;
  }
                    /* try { // try from 033b9f64 to 034ba043 has its CatchHandler @ 033b9b38 */
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_DEHHAOALHDN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar3 = __this_00 + 1;
    pIVar3->klass = (Il2CppClass *)ACBNKLODJEG;
    thunk_FUN_01c20e04(pIVar3,ACBNKLODJEG);
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    *(int32_t *)&__this_00[2].klass = JJMCKHDALCF;
    if (pIVar3->klass != (Il2CppClass *)0x0) {
      pIVar4 = (pIVar3->klass->_1).declaringType;
      pUVar1 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pIVar4 != (Il2CppClass *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener
                  ((UnityEngine_Events_UnityEvent_o *)pIVar4,pUVar1,(MethodInfo *)0x0);
        if (pIVar3->klass != (Il2CppClass *)0x0) {
          pIVar4 = (pIVar3->klass->_1).parent;
          if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar1 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->__9__10_1;
          if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
            if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 033ba044 to 034ba04b has its CatchHandler @ 033ba0f4 */
            pUVar1 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 033ba04c to 034ba04f has its CatchHandler @ 033ba0dc */
                    /* try { // try from 033ba050 to 034ba053 has its CatchHandler @ 033ba0d8 */
                    /* try { // try from 033ba054 to 034ba057 has its CatchHandler @ 033ba0b4 */
                    /* try { // try from 033ba058 to 034ba05b has its CatchHandler @ 033ba0b0 */
                    /* try { // try from 033ba05c to 034ba063 has its CatchHandler @ 033ba0f0 */
            UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 033ba064 to 034ba067 has its CatchHandler @ 033ba0ac */
                    /* try { // try from 033ba068 to 034ba073 has its CatchHandler @ 033ba0f0 */
            ppUVar2 = &Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->
                       __9__10_1;
            *ppUVar2 = pUVar1;
                    /* try { // try from 033ba074 to 034ba077 has its CatchHandler @ 033ba0a8 */
            thunk_FUN_01c20e04(ppUVar2,pUVar1);
          }
                    /* try { // try from 033ba078 to 034ba07b has its CatchHandler @ 033ba0a4 */
          if (pIVar4 != (Il2CppClass *)0x0) {
                    /* try { // try from 033ba07c to 034ba07f has its CatchHandler @ 033b9b38 */
                    /* try { // try from 033ba080 to 034ba083 has its CatchHandler @ 033ba08c */
                    /* try { // try from 033ba084 to 034ba113 has its CatchHandler @ 033b9b38 */
            UnityEngine_Events_UnityEvent__AddListener
                      ((UnityEngine_Events_UnityEvent_o *)pIVar4,pUVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033ba080 with catch @ 033ba08c */
                    /* catch() { ... } // from try @ 033b9dd8 with catch @ 033ba090 */
            if (pIVar3->klass != (Il2CppClass *)0x0) {
                    /* catch() { ... } // from try @ 033b9f0c with catch @ 033ba094 */
                    /* catch() { ... } // from try @ 033b9eb0 with catch @ 033ba098 */
              pUVar5 = (pIVar3->klass->_1).generic_class;
                    /* catch() { ... } // from try @ 033b9de4 with catch @ 033ba09c */
                    /* catch() { ... } // from try @ 033b9e68 with catch @ 033ba0a0 */
              if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0)
              {
                    /* catch() { ... } // from try @ 033ba078 with catch @ 033ba0a4 */
                thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 033ba074 with catch @ 033ba0a8 */
              }
                    /* catch() { ... } // from try @ 033ba064 with catch @ 033ba0ac */
                    /* catch() { ... } // from try @ 033ba058 with catch @ 033ba0b0 */
              pUVar1 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->
                       __9__10_2;
                    /* catch() { ... } // from try @ 033ba054 with catch @ 033ba0b4 */
              if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
                    /* catch() { ... } // from try @ 033b9e80 with catch @ 033ba0b8 */
                    /* catch() { ... } // from try @ 033b9ebc with catch @ 033ba0bc */
                if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0
                   ) {
                    /* catch() { ... } // from try @ 033b9e1c with catch @ 033ba0c0 */
                  thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 033b9e2c with catch @ 033ba0c4 */
                }
                    /* catch() { ... } // from try @ 033b9e50 with catch @ 033ba0c8 */
                    /* catch() { ... } // from try @ 033b9e40 with catch @ 033ba0cc */
                    /* catch() { ... } // from try @ 033b9f34 with catch @ 033ba0d0 */
                    /* catch() { ... } // from try @ 033b9dc0 with catch @ 033ba0d4 */
                pUVar1 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* catch() { ... } // from try @ 033ba050 with catch @ 033ba0d8 */
                    /* catch() { ... } // from try @ 033ba04c with catch @ 033ba0dc */
                    /* catch() { ... } // from try @ 033b9db0 with catch @ 033ba0e0 */
                    /* catch() { ... } // from try @ 033b9ee0 with catch @ 033ba0e4 */
                    /* catch() { ... } // from try @ 033b9d44 with catch @ 033ba0e8 */
                    /* catch() { ... } // from try @ 033b9ce8 with catch @ 033ba0ec */
                    /* catch() { ... } // from try @ 033ba05c with catch @ 033ba0f0
                       catch() { ... } // from try @ 033ba068 with catch @ 033ba0f0 */
                UnityEngine_Events_UnityAction___ctor();
                    /* catch() { ... } // from try @ 033ba044 with catch @ 033ba0f4 */
                ppUVar2 = &Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->
                           __9__10_2;
                *ppUVar2 = pUVar1;
                thunk_FUN_01c20e04(ppUVar2,pUVar1);
              }
              if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 033ba114 to 034ba117 has its CatchHandler @ 033ba128 */
                UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar1,(MethodInfo *)0x0);
                if (pIVar3->klass != (Il2CppClass *)0x0) {
                    /* catch() { ... } // from try @ 033ba114 with catch @ 033ba128 */
                  pUVar5 = (pIVar3->klass->_1).typeMetadataHandle;
                  pUVar1 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 033ba138 to 034ba1a7 has its CatchHandler @ 033ba1bc */
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar1,(MethodInfo *)0x0);
                    if (pIVar3->klass != (Il2CppClass *)0x0) {
                      pUVar5 = (pIVar3->klass->_1).interopData;
                      pUVar1 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 033ba1a8 to 034ba1b3 has its CatchHandler @ 033b9b38 */
                        UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar1,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033ba1b4 to 034ba1bb has its CatchHandler @ 033ba1bc */
  FUN_01bab8c8();
}

