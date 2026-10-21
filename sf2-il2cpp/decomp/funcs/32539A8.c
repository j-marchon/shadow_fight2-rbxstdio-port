// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$MEIAHIJOJEA @ RVA 0x32539A8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MEIAHIJOJEA
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  FEKEAPCCOOB_o *__this_00;
  MethodInfo *extraout_x1;
  FEKEAPCCOOB_o **ppFVar1;
  
  if ((DAT_0456714c & 1) == 0) {
    FUN_01bab630(&FEKEAPCCOOB_TypeInfo);
    DAT_0456714c = 1;
    method = extraout_x1;
  }
  __this_00 = (FEKEAPCCOOB_o *)thunk_FUN_01bda818(FEKEAPCCOOB_TypeInfo,method);
  FEKEAPCCOOB___ctor(__this_00,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields).HIOOMAJPEJP;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  if (*ppFVar1 != (FEKEAPCCOOB_o *)0x0) {
    FEKEAPCCOOB__GIENGNEGHPJ(*ppFVar1,(JEFOMACMAAD_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

