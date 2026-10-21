// KLFOGICEHJC$$.ctor @ RVA 0x2FED85C

void KLFOGICEHJC___ctor(KLFOGICEHJC_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a41 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04565a41 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).KFJLNJDDGDO;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).MJMJIDBBMON;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

