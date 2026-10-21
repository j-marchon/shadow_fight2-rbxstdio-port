// Nekki.SF2.GUI.SidePanelScroll$$.ctor @ RVA 0x329499C

void Nekki_SF2_GUI_SidePanelScroll___ctor
               (Nekki_SF2_GUI_SidePanelScroll_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *__this_00;
  Nekki_SF2_GUI_SidePanelScroll_c *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04567355 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SidePanelScroll_<>c_BIEBHEAAMKL__);
    FUN_01bab630(&Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo);
    DAT_04567355 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->static_fields->__9__15_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_SidePanelScroll_<>c_TypeInfo->static_fields->__9__15_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0) {
    *(System_Action_o **)&(__this->fields).IgnoreDragging = pSVar2;
    thunk_FUN_01c20e04(&(__this->fields).IgnoreDragging,pSVar2);
    auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_TypeInfo);
    __this_00 = auVar3._0_8_;
    Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent___ctor(__this_00,auVar3._8_8_);
    (__this->fields).onScrollDragBegin = __this_00;
    thunk_FUN_01c20e04(&(__this->fields).onScrollDragBegin,__this_00);
    auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_TypeInfo);
    __this_01 = auVar3._0_8_;
    Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent___ctor
              ((Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *)__this_01,auVar3._8_8_);
    __this[1].klass = __this_01;
    thunk_FUN_01c20e04(__this + 1,__this_01);
    UnityEngine_UI_ScrollRect___ctor((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

