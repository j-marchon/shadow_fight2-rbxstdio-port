// JJPNLEPEAFM$$HCGCOEJDPKI @ RVA 0x35334C4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__HCGCOEJDPKI
          (PLCCJCFAFKA_o *HFGJCIPEMPO,System_Action_object__o *BLMFLPJJMPF,MethodInfo *method)

{
  HHKELHDGPDO_o *IMMNELPBGIF;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this;
  
  if ((DAT_04568a71 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04568a71 = 1;
  }
  IMMNELPBGIF = JJPNLEPEAFM__IIAPLAPOCGL(HFGJCIPEMPO,(HEFOANCOHDC_o *)0x0,method);
  if (IMMNELPBGIF != (HHKELHDGPDO_o *)0x0) {
    (IMMNELPBGIF->fields).EJGIHLJGJKC = false;
    __this = GCIFMNHADDF__ACDDKABEBAP(0x50,(Il2CppObject *)IMMNELPBGIF,(MethodInfo *)0x0);
    if (BLMFLPJJMPF != (System_Action_object__o *)0x0) {
      if (__this == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_03633550;
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                 (System_Action_T__o *)BLMFLPJJMPF,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
    return __this;
  }
LAB_03633550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

