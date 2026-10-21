// GDKLJOEKBNF$$.ctor @ RVA 0x33AB840

void GDKLJOEKBNF___ctor(GDKLJOEKBNF_o *__this,GDKLJOEKBNF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_String_o **ppSVar6;
  
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (GDKLJOEKBNF_o *)0x0) {
    ppSVar6 = &(__this->fields)._IANGGJCONIH_k__BackingField;
    *ppSVar6 = (IBKIPBJJCPG->fields)._IANGGJCONIH_k__BackingField;
    thunk_FUN_01c20e04(ppSVar6);
    (__this->fields)._PFHCJJIBIBD_k__BackingField =
         (IBKIPBJJCPG->fields)._PFHCJJIBIBD_k__BackingField;
    bVar1 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive;
    bVar2 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe;
    iVar4 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey;
    iVar5 = (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue =
         (IBKIPBJJCPG->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValue;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.fakeValueActive = bVar1;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._LJNEEIANKCI_k__BackingField.fields.field_0xe = uVar3;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.currentCryptoKey = iVar4;
    (__this->fields)._LJNEEIANKCI_k__BackingField.fields.hiddenValue = iVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ab888 to 035ab8b3 has its CatchHandler @ 034aba4c */
  FUN_01bab8c8();
}

