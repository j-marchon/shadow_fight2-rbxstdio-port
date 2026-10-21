// Nekki.SF2.GUI.Map.MapButton$$RefreshIndicator @ RVA 0x34A0C58

void Nekki_SF2_GUI_Map_MapButton__RefreshIndicator
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  FKNCNNOOOIO_o *pFVar1;
  System_Nullable_bool__o *pSVar2;
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  MethodInfo *in_x2;
  
  if ((DAT_04568499 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04568499 = 1;
  }
  pFVar1 = (__this->fields).AEPNEAIEKOL;
  if ((pFVar1 != (FKNCNNOOOIO_o *)0x0) &&
     (pSVar2 = &(pFVar1->fields).IGOGFMFHLNK, (pSVar2->fields).hasValue != false)) {
    CJNHFNHJHPE = System_Nullable<bool>__get_Value
                            ((System_Nullable_bool__o)SUB82(pSVar2,0),
                             Method_System_Nullable<bool>_get_Value__);
    Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this,CJNHFNHJHPE,in_x2);
    __this_00 = (__this->fields)._indicator;
    if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
      Nekki_SF2_GUI_Common_Indicator__SetLabelState(__this_00,false,in_x2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

