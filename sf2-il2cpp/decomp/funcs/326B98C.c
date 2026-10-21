// Nekki.SF2.GUI.Shop.SidePanel$$Init @ RVA 0x326B98C

void Nekki_SF2_GUI_Shop_SidePanel__Init
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,
               Nekki_SF2_GUI_Shop_SidePanelContent_o *AOJIIDGCBEC,bool OBIFDGKDIBD,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_SidePanelContent_o **ppNVar3;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *x;
  
  if ((DAT_045671e4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671e4 = 1;
  }
  ppNVar3 = &(__this->fields).LJBNCINMIIP;
  *ppNVar3 = AOJIIDGCBEC;
  thunk_FUN_01c20e04(ppNVar3,AOJIIDGCBEC);
  x = *ppNVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((*ppNVar3 == (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__SetParent
              (__this_00,(__this->fields)._ContentParent,false,(MethodInfo *)0x0);
  }
  pUVar1 = &(__this->fields)._OpenedPosition.fields;
  if (!OBIFDGKDIBD) {
    pUVar1 = &(__this->fields)._ClosedPosition.fields;
  }
  Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this,OBIFDGKDIBD,0.0,method_00);
  (__this->fields).OCBEJPAILDH.fields = *pUVar1;
  return;
}

