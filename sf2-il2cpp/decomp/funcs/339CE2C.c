// Nekki.SF2.GUI.Map.BattlePrizeElement$$MAPALKNGENO @ RVA 0x339CE2C

void Nekki_SF2_GUI_Map_BattlePrizeElement__MAPALKNGENO
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_o *pSVar2;
  
  iVar1 = (__this->fields).CKPLHEOCNEC;
  pSVar2 = (__this->fields).NFECDKAEFJL;
  (__this->fields).IKBBLGEBDGM = true;
  if (0 < iVar1) {
    iVar1 = 1;
  }
  (__this->fields).CKPLHEOCNEC = iVar1;
  if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0349ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

