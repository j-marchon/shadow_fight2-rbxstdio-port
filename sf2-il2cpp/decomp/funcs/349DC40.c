// NGKBNOEJLPH$$EOCECNOHPPE @ RVA 0x349DC40

void NGKBNOEJLPH__EOCECNOHPPE(NGKBNOEJLPH_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  CAAJMGKIPIE_o *pCVar1;
  CAAJMGKIPIE_o **ppCVar2;
  
  if ((DAT_04568474 & 1) == 0) {
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568474 = 1;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = OCMLPCKBHPN__HMBNHEFIECG(KGLJICLJHEL,(MethodInfo *)0x0);
  if (pCVar1 != (CAAJMGKIPIE_o *)0x0) {
    ppCVar2 = &(__this->fields)._MPABEMCEHCL_k__BackingField;
    *ppCVar2 = pCVar1;
    thunk_FUN_01c20e04(ppCVar2,pCVar1);
    return;
  }
  return;
}

