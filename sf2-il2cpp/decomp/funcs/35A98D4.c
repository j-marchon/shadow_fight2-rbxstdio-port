// FIPOABEGELK$$.cctor @ RVA 0x35A98D4

void FIPOABEGELK___cctor(MethodInfo *method)

{
  GODDDLLLOLB_o *pGVar1;
  GODDDLLLOLB_o **ppGVar2;
  
  if ((DAT_04568e3b & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&GODDDLLLOLB_TypeInfo);
    DAT_04568e3b = 1;
  }
  FIPOABEGELK_TypeInfo->static_fields->EBHMIOHJIJJ = 1;
  pGVar1 = (GODDDLLLOLB_o *)thunk_FUN_01bda818(GODDDLLLOLB_TypeInfo);
  GODDDLLLOLB___ctor(pGVar1,0.0,0.0,(MethodInfo *)0x0);
  ppGVar2 = &FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  pGVar1 = (GODDDLLLOLB_o *)thunk_FUN_01bda818(GODDDLLLOLB_TypeInfo);
  GODDDLLLOLB___ctor(pGVar1,0.0,0.0,(MethodInfo *)0x0);
  ppGVar2 = &FIPOABEGELK_TypeInfo->static_fields->PNKKLHDNAGP;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  FIPOABEGELK_TypeInfo->static_fields->BCBHBHADEJL = 0.0;
  return;
}

