// TypeDefIndex 3244
// Namespace: 
// [CompilerGenerated]
// private sealed class NewsDialog.OEMPAFGAOKB
// Fields:
//   public NewsDialog <>4__this; // 0x10
//   public RaidConfig.ENBCJNLAHAC raidItemPack; // 0x18

// ===== public void .ctor()  [RVA 0x350D8FC]
// Nekki.SF2.GUI.Dialogs.NewsDialog.OEMPAFGAOKB$$.ctor @ RVA 0x350D8FC

void Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB___ctor
               (Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void CEDJCLMHADC(object confirmData)  [RVA 0x350DF98]
// Nekki.SF2.GUI.Dialogs.NewsDialog.OEMPAFGAOKB$$CEDJCLMHADC @ RVA 0x350DF98

void Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB__CEDJCLMHADC
               (Nekki_SF2_GUI_Dialogs_NewsDialog_OEMPAFGAOKB_o *__this,Il2CppObject *confirmData,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this_00;
  RaidConfig_ENBCJNLAHAC_o *IOOJAJAPMBM;
  FAIJGJCCKJC_o *__this_01;
  MethodInfo *in_x3;
  
  if ((DAT_045688df & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    DAT_045688df = 1;
  }
  __this_00 = (__this->fields).__4__this;
  IOOJAJAPMBM = (__this->fields).raidItemPack;
  __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
  FAIJGJCCKJC___ctor(__this_01,IOOJAJAPMBM,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_NewsDialog__APJCIKLILGP(__this_00,confirmData,__this_01,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

