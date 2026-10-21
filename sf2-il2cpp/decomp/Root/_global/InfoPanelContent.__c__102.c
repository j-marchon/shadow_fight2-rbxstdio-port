// TypeDefIndex 102
// Namespace: 
// [Serializable]
// private sealed class InfoPanelContent.<>c
// Fields:
//   public static readonly InfoPanelContent.<>c <>9; // 0x0
//   public static Func<IconLabelButton, bool> <>9__64_0; // 0x8
//   public static Comparison<IconLabelButton> <>9__64_1; // 0x10

// ===== public void .ctor()  [RVA 0x300C934]
// Nekki.SF2.GUI.Shop.InfoPanelContent.<>c$$.ctor @ RVA 0x300C934

void Nekki_SF2_GUI_Shop_InfoPanelContent_<>c___ctor
               (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x300C93C]
// Nekki.SF2.GUI.Shop.InfoPanelContent.<>c$$.cctor @ RVA 0x300C93C

void Nekki_SF2_GUI_Shop_InfoPanelContent_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565b88 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
    DAT_04565b88 = 1;
  }
                    /* try { // try from 0310c970 to 0320c973 has its CatchHandler @ 0310d4ec */
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
                    /* try { // try from 0310c974 to 0320d077 has its CatchHandler @ 0310c418 */
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal int AIBGCCPEGJG(IconLabelButton b1, IconLabelButton b2)  [RVA 0x300C9A4]
// Nekki.SF2.GUI.Shop.InfoPanelContent.<>c$$AIBGCCPEGJG @ RVA 0x300C9A4

int32_t Nekki_SF2_GUI_Shop_InfoPanelContent_<>c__AIBGCCPEGJG
                  (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *__this,IconLabelButton_o *b1,
                  IconLabelButton_o *b2,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if ((b1 != (IconLabelButton_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)b1,(MethodInfo *)0x0)
     , __this = (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)0x0,
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    uVar1 = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)(ulong)uVar1;
    if ((b2 != (IconLabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)b2,(MethodInfo *)0x0),
       __this = (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *)0x0,
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      iVar2 = UnityEngine_Transform__GetSiblingIndex(pUVar3,(MethodInfo *)0x0);
      return uVar1 - iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool OFLICMNNNPA(IconLabelButton button)  [RVA 0x300CA00]
// Nekki.SF2.GUI.Shop.InfoPanelContent.<>c$$OFLICMNNNPA @ RVA 0x300CA00

bool Nekki_SF2_GUI_Shop_InfoPanelContent_<>c__OFLICMNNNPA
               (Nekki_SF2_GUI_Shop_InfoPanelContent___c_o *__this,IconLabelButton_o *button,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04565b89 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b89 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)button,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((button != (IconLabelButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)button,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

