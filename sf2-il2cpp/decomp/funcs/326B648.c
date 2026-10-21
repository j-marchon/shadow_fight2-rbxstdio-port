// Nekki.SF2.GUI.Shop.SidePanel$$GHDOLAIHDBK @ RVA 0x326B648

void Nekki_SF2_GUI_Shop_SidePanel__GHDOLAIHDBK
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  MethodInfo *pMVar2;
  MethodInfo *method_00;
  Il2CppMethodPointer pIVar3;
  
                    /* try { // try from 0336b658 to 0346b65f has its CatchHandler @ 0336b888 */
  if ((DAT_045671e0 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    DAT_045671e0 = 1;
  }
                    /* try { // try from 0336b674 to 0346b683 has its CatchHandler @ 0336b874 */
  __this_00 = (__this->fields)._CanvasGroup;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_0336b700;
                    /* try { // try from 0336b684 to 0346b68f has its CatchHandler @ 0336b884 */
  UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,true,(MethodInfo *)0x0);
  if ((__this->fields).DBNELADJPIJ == false) {
                    /* try { // try from 0336b6a8 to 0346b6af has its CatchHandler @ 0336b880 */
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0336b6b0 to 0346b733 has its CatchHandler @ 0336b574 */
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_0336b700;
    UnityEngine_Transform__SetSiblingIndex(__this_01,0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).LJBNCINMIIP;
    if (pNVar1 == (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) goto LAB_0336b700;
    pIVar3 = (pNVar1->klass->vtable)._10_OnPanelClosed.methodPtr;
    pMVar2 = (pNVar1->klass->vtable)._10_OnPanelClosed.method;
  }
  else {
    pNVar1 = (__this->fields).LJBNCINMIIP;
    if (pNVar1 == (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0) goto LAB_0336b700;
                    /* try { // try from 0336b698 to 0346b6a3 has its CatchHandler @ 0336b870 */
    pIVar3 = (pNVar1->klass->vtable)._6_OnPanelOpened.methodPtr;
    pMVar2 = (pNVar1->klass->vtable)._6_OnPanelOpened.method;
  }
  (*pIVar3)(pNVar1,pMVar2);
  __this_02 = (UnityEngine_Events_UnityEvent_bool__o *)(__this->fields)._OnStateChange;
  if (__this_02 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
    UnityEngine_Events_UnityEvent<bool>__Invoke
              (__this_02,(__this->fields).DBNELADJPIJ,
               Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA(__this,method_00);
    return;
  }
LAB_0336b700:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

