// Nekki.SF2.GUI.Common.MenuControls$$HJNEBABOEIH @ RVA 0x300F230

void Nekki_SF2_GUI_Common_MenuControls__HJNEBABOEIH
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  CEAGEFMDAAN_o *__this_00;
  
  if ((DAT_04565b99 & 1) == 0) {
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b99 = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
  __this_00 = (__this->fields).MODIIOJEMLE;
  if (__this_00 != (CEAGEFMDAAN_o *)0x0) {
    FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__HCBAKFNPGDN
              ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
               Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_HCBAKFNPGDN__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

