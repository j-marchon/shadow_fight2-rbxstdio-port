// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GIDNPADMKMG @ RVA 0x3287678

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GIDNPADMKMG
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  CocosAnimation_o *pCVar2;
  System_Exception_o *__this_00;
  System_String_o *message;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if ((DAT_045672c8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14097);
    DAT_045672c8 = 1;
  }
  pCVar2 = (__this->fields).WinEffect;
  if (pCVar2 != (CocosAnimation_o *)0x0) {
    bVar1 = CocosAnimation__Init
                      (pCVar2,StringLiteral_14097,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5960);
      System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
      uVar3 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_GIDNPADMKMG__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar3);
    }
    pCVar2 = (__this->fields).WinEffect;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFramesRange(pCVar2,0,-1,(MethodInfo *)0x0);
      pCVar2 = (__this->fields).WinEffect;
      if (pCVar2 != (CocosAnimation_o *)0x0) {
        (pCVar2->fields)._PPEGDOHGLJJ_k__BackingField = 0.083;
        Nekki_SF2_GUI_Dialogs_LotteryDialog__OIJGCNKKINI(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

