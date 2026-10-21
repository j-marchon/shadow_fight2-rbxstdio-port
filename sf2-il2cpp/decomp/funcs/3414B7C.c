// IMJHLANAMIK$$DDMIOIAHJAP @ RVA 0x3414B7C

void IMJHLANAMIK__DDMIOIAHJAP(IMJHLANAMIK_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *pNVar1;
  System_Action_o *CJNHFNHJHPE;
  LabelButton_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  
  if ((DAT_0456809d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_IMJHLANAMIK_DDMIOIAHJAP__);
    DAT_0456809d = 1;
  }
  __this_00 = (__this->fields).GMLKPKIJKJE;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
     (pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                         (__this_00,(MethodInfo *)0x0),
     pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
    __this_02 = (pNVar1->fields)._scroll;
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__remove_OnScrollEnded(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_01 = (__this->fields).CCHECBLHFEH;
      if (__this_01 != (LabelButton_o *)0x0) {
        SFButton__set_IsFlashing((SFButton_o *)__this_01,true,(MethodInfo *)0x0);
        AKJJAPEHKCG__GOCEMJOCNEE
                  ((UnityEngine_UI_Selectable_o *)(__this->fields).CCHECBLHFEH,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

