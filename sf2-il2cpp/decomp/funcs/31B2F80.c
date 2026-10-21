// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$IMLLPEFHOJD @ RVA 0x31B2F80

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__IMLLPEFHOJD
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  FAIJGJCCKJC_o *__this_01;
  FFHKCJAOPLI_o *__this_02;
  JMDPBFOCHHP_ENBCJNLAHAC_o *IOOJAJAPMBM;
  
  if ((DAT_04566b8e & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    DAT_04566b8e = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  IOOJAJAPMBM = (__this->fields).MHDJAEILAJL;
  __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
  FAIJGJCCKJC___ctor(__this_01,IOOJAJAPMBM,(MethodInfo *)0x0);
  __this_02 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
  FFHKCJAOPLI___ctor(__this_02,8,(HOOAAGABMBL_o *)__this_01,(System_String_o *)0x0,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,4,(Il2CppObject *)__this_02,(System_Action_object__o *)0x0,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

