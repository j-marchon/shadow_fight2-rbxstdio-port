// PFOMHOLCODE.AJMCKEHMEOD$$.ctor @ RVA 0x334DB94

void PFOMHOLCODE_AJMCKEHMEOD___ctor(PFOMHOLCODE_AJMCKEHMEOD_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  
  if ((DAT_04567a29 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567a29 = 1;
  }
  (__this->fields).NAMPJLCANNG = true;
  (__this->fields).CMKKMKONDHG = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).HOKHAHEGMAB = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).ABCHAOKFLGL = StringLiteral_1;
  thunk_FUN_01c20e04();
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).GBLCPIFNBJJ;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).HHMNHKJGJPG;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

