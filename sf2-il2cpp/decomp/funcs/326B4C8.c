// Nekki.SF2.GUI.Shop.SidePanel$$OnScrollDragEnd @ RVA 0x326B4C8

void Nekki_SF2_GUI_Shop_SidePanel__OnScrollDragEnd
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OCMMDIHLKMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar2;
  
  if ((DAT_045671de & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671de = 1;
  }
  Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this,(__this->fields).NCCEHMGJEAA,-1.0,method);
  __this_00 = (__this->fields)._OnDragEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).LJBNCINMIIP;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).LJBNCINMIIP;
    if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0336b55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._7_OnEndDragging.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._7_OnEndDragging.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

