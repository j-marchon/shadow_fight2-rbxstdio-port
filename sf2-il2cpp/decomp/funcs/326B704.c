// Nekki.SF2.GUI.Shop.SidePanel$$OnScrollDragBegin @ RVA 0x326B704

void Nekki_SF2_GUI_Shop_SidePanel__OnScrollDragBegin
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OCMMDIHLKMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar2;
  
  if ((DAT_045671e1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671e1 = 1;
    OCMMDIHLKMH = extraout_x1;
  }
                    /* try { // try from 0336b734 to 0346b743 has its CatchHandler @ 0336b86c */
  Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA(__this,(MethodInfo *)OCMMDIHLKMH);
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0336b74c to 0346b757 has its CatchHandler @ 0336b860 */
    UnityEngine_Transform__SetSiblingIndex(__this_00,1,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._OnDragBegin;
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0336b760 to 0346b767 has its CatchHandler @ 0336b868 */
                    /* try { // try from 0336b768 to 0346b777 has its CatchHandler @ 0336b864 */
      UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).LJBNCINMIIP;
                    /* try { // try from 0336b778 to 0346b853 has its CatchHandler @ 0336b574 */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields).LJBNCINMIIP;
      if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
        (*(pNVar2->klass->vtable)._4_OnStartOpening.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._4_OnStartOpening.method);
        pNVar2 = (__this->fields).LJBNCINMIIP;
        if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0336b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._8_OnStartDragging.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._8_OnStartDragging.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

