// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$OCJBGCEPJPJ @ RVA 0x353F744

bool Nekki_SF2_GUI_Dialogs_Raids_InputDialog__OCJBGCEPJPJ
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  NCJBDBGIPNF_o *pNVar2;
  
  pNVar2 = (__this->fields).GIAMLPMHEDN;
  if (pNVar2 != (NCJBDBGIPNF_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                      (__this,(pNVar2->fields).GCDPLFELIBF,in_x2);
    if (!bVar1) {
      return false;
    }
    pNVar2 = (__this->fields).GIAMLPMHEDN;
    if (pNVar2 != (NCJBDBGIPNF_o *)0x0) {
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                        (__this,(pNVar2->fields).MLPDIICEKIO,in_x2);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

