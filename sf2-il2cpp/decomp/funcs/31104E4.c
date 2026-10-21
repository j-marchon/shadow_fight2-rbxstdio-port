// Nekki.SF2.GUI.Dialogs.ExitDialog$$PGEIEIKOCIN @ RVA 0x31104E4

void Nekki_SF2_GUI_Dialogs_ExitDialog__PGEIEIKOCIN
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  ONDBPECEKAJ_o *pOVar1;
  System_Action_o *pSVar2;
  
  pOVar1 = (__this->fields).LHNINNECGJF;
  if ((pOVar1 != (ONDBPECEKAJ_o *)0x0) &&
     (pSVar2 = (pOVar1->fields).MIMKJIKCPGP, pSVar2 != (System_Action_o *)0x0)) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

