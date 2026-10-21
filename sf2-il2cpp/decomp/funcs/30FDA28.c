// EJALJLHMDHM$$.ctor @ RVA 0x30FDA28

void EJALJLHMDHM___ctor(EJALJLHMDHM_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  
  if ((DAT_045664a5 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664a5 = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).IJONCLJPNDO = StringLiteral_1;
  thunk_FUN_01c20e04();
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).FNOJIPMNDPJ;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).FNGNIKNIEMM;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

