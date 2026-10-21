// HJPEKDOPBHN$$.cctor @ RVA 0x34A1FA8

void HJPEKDOPBHN___cctor(MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  HJPEKDOPBHN_StaticFields *pHVar6;
  BGPFALGFJIL_StaticFields *pBVar7;
  
  if ((DAT_045684a1 & 1) == 0) {
    FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045684a1 = 1;
  }
  pHVar6 = HJPEKDOPBHN_TypeInfo->static_fields;
  pHVar6->NKIKDJEPECM = false;
  if ((BGPFALGFJIL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pHVar6 = HJPEKDOPBHN_TypeInfo->static_fields;
  }
  pBVar7 = BGPFALGFJIL_TypeInfo->static_fields;
  bVar1 = (pBVar7->NLEJEOIFOMI).fields.fakeValueActive;
  bVar2 = (pBVar7->NLEJEOIFOMI).fields.inited;
  uVar3 = *(undefined2 *)&(pBVar7->NLEJEOIFOMI).fields.field_0xe;
  iVar4 = (pBVar7->NLEJEOIFOMI).fields.currentCryptoKey;
  iVar5 = (pBVar7->NLEJEOIFOMI).fields.hiddenValue;
  (pHVar6->MJEPNDCEBCK).fields.fakeValue = (pBVar7->NLEJEOIFOMI).fields.fakeValue;
  (pHVar6->MJEPNDCEBCK).fields.fakeValueActive = bVar1;
  (pHVar6->MJEPNDCEBCK).fields.inited = bVar2;
  *(undefined2 *)&(pHVar6->MJEPNDCEBCK).fields.field_0xe = uVar3;
  (pHVar6->MJEPNDCEBCK).fields.currentCryptoKey = iVar4;
  (pHVar6->MJEPNDCEBCK).fields.hiddenValue = iVar5;
  pBVar7 = BGPFALGFJIL_TypeInfo->static_fields;
  bVar1 = (pBVar7->JBGPHLKPICA).fields.fakeValueActive;
  bVar2 = (pBVar7->JBGPHLKPICA).fields.inited;
  uVar3 = *(undefined2 *)&(pBVar7->JBGPHLKPICA).fields.field_0xe;
  iVar4 = (pBVar7->JBGPHLKPICA).fields.currentCryptoKey;
  iVar5 = (pBVar7->JBGPHLKPICA).fields.hiddenValue;
  pHVar6 = HJPEKDOPBHN_TypeInfo->static_fields;
  (pHVar6->ENCOAOMGLKD).fields.fakeValue = (pBVar7->JBGPHLKPICA).fields.fakeValue;
  (pHVar6->ENCOAOMGLKD).fields.fakeValueActive = bVar1;
  (pHVar6->ENCOAOMGLKD).fields.inited = bVar2;
  *(undefined2 *)&(pHVar6->ENCOAOMGLKD).fields.field_0xe = uVar3;
  (pHVar6->ENCOAOMGLKD).fields.currentCryptoKey = iVar4;
  (pHVar6->ENCOAOMGLKD).fields.hiddenValue = iVar5;
  return;
}

