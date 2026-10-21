// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ILPJLGPGNMC @ RVA 0x33DB804

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILPJLGPGNMC
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o **ppNVar3;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *pNVar4;
  
  if ((DAT_04567e70 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
    DAT_04567e70 = 1;
  }
  ppNVar3 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
  pNVar4 = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar4 = *ppNVar3;
    if (pNVar4 == (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) goto LAB_034db968;
    (*(pNVar4->klass->vtable)._12_set_Opacity.methodPtr)
              ((__this->fields)._InactiveTableViewCellOpacity,pNVar4,
               (pNVar4->klass->vtable)._12_set_Opacity.method);
  }
  if (AHICPBEJIKJ == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
LAB_034db8c0:
    AHICPBEJIKJ = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo->_2).naturalAligment;
    if ((AHICPBEJIKJ->klass->_2).naturalAligment < bVar1) goto LAB_034db8c0;
    if ((AHICPBEJIKJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_Forge_RecipeUI_TypeInfo) {
      AHICPBEJIKJ = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
    }
  }
  *ppNVar3 = (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)AHICPBEJIKJ;
  thunk_FUN_01c20e04(ppNVar3);
  pNVar4 = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pNVar4 = *ppNVar3;
  if (pNVar4 != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) {
    (*(pNVar4->klass->vtable)._12_set_Opacity.methodPtr)
              ((__this->fields)._ActiveTableViewCellOpacity,pNVar4,
               (pNVar4->klass->vtable)._12_set_Opacity.method);
    pNVar4 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((pNVar4 != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) &&
       (__this_00 = (__this->fields)._OnRecipeSelected,
       __this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *)0x0)) {
      UnityEngine_Events_UnityEvent<object>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                 (Il2CppObject *)(pNVar4->fields).PHAGOJCOMPN,
                 Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_Invoke__);
      return;
    }
  }
LAB_034db968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

