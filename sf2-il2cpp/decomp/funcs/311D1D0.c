// HEINPCIAMNL$$.ctor @ RVA 0x311D1D0

void HEINPCIAMNL___ctor(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  int32_t *piVar2;
  LCKCDEKNLOA_o **ppLVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566600 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04566600 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  piVar2 = &(__this->fields).ACCIHBHMFPN;
  *(LCKCDEKNLOA_o **)piVar2 = pLVar1;
  thunk_FUN_01c20e04(piVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).PGLINMCHKGC;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).EBAHJECPAHA;
  *ppLVar3 = pLVar1;
  thunk_FUN_01c20e04(ppLVar3,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

