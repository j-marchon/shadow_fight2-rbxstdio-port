// Nekki.SF2.GUI.Map.BattlePrizeElement$$OnDestroy @ RVA 0x339C8FC

void Nekki_SF2_GUI_Map_BattlePrizeElement__OnDestroy
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  if ((DAT_04567c89 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_MAPALKNGENO__);
    DAT_04567c89 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._value;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_TextPic__remove_OnRendered
              ((Nekki_SF2_GUI_TextPic_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

