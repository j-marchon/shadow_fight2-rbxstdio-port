// Nekki.SF2.Core.InputControllers.GamePadController$$LNCFKMEHFNC @ RVA 0x30E5490

void Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  CKOFPNFDDAB_o *pCVar2;
  
  bVar1 = AAENCHDNFKC__OCEACOIOMLI(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar2 = (__this->fields).AEKEGMAOOHO;
  }
  else {
    bVar1 = AAENCHDNFKC__GCILEELAMGM(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pCVar2 = (__this->fields).AHGJIANNLBP;
  }
  if (pCVar2 != (CKOFPNFDDAB_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e54dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar2->fields).super.super.invoke_impl)
              ((pCVar2->fields).super.super.method_code,GIDJIIFPHJK,IKKKILCDMMB,
               (pCVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

