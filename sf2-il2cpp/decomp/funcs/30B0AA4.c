// Nekki.SF2.GUI.Pvp.PhaseItem$$ChangeCharacter @ RVA 0x30B0AA4

void Nekki_SF2_GUI_Pvp_PhaseItem__ChangeCharacter
               (Nekki_SF2_GUI_Pvp_PhaseItem_o *__this,BNAIBAODKAK_o *CJDCMKEBBNK,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  (__this->fields).KPLEAGPMKFD = CJDCMKEBBNK;
  thunk_FUN_01c20e04();
  bVar1 = Nekki_SF2_GUI_Pvp_PhaseItem__FPBFCPPDGNI(__this,method_00);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x031b0ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._9_UpdateContent.methodPtr)
              (__this,(__this->klass->vtable)._9_UpdateContent.method);
    return;
  }
  return;
}

