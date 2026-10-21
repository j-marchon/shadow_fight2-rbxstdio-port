// Nekki.SF2.GUI.Map.MapPanel$$OnDestroy @ RVA 0x349E4B0

void Nekki_SF2_GUI_Map_MapPanel__OnDestroy(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar2;
  Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o **ppNVar3;
  Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o **ppNVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar5;
  
  if ((DAT_0456847c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456847c = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._IENOFGNDANH_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._IENOFGNDANH_k__BackingField;
    if (pNVar5 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) goto LAB_0359e550;
    (*(pNVar5->klass->vtable)._4_DestroyItems.methodPtr)
              (pNVar5,(pNVar5->klass->vtable)._4_DestroyItems.method);
  }
  pNVar2 = (__this->fields).ECEJKFAFODM;
  if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
    ppNVar3 = &(pNVar2->fields).onClickItem;
    *ppNVar3 = (Nekki_SF2_GUI_BaseScrollContent_ClickItemEvent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    pNVar2 = (__this->fields).ECEJKFAFODM;
    if (pNVar2 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      ppNVar4 = &(pNVar2->fields).onSelectItem;
      *ppNVar4 = (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *)0x0;
      thunk_FUN_01c20e04(ppNVar4,0);
      return;
    }
  }
LAB_0359e550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

