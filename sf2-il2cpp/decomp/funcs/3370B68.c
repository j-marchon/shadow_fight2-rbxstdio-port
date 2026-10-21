// IALJKCECCLB$$.ctor @ RVA 0x3370B68

void IALJKCECCLB___ctor(IALJKCECCLB_o *__this,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  PICIKPNGDBE_o **ppPVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b20 & 1) == 0) {
    FUN_01bab630(&PICIKPNGDBE_TypeInfo);
    DAT_04567b20 = 1;
    method = extraout_x1;
  }
  __this_00 = (PICIKPNGDBE_o *)thunk_FUN_01bda818(PICIKPNGDBE_TypeInfo,method);
  PICIKPNGDBE___ctor(__this_00,(MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).DKGMKMJDMPC;
  *ppPVar1 = __this_00;
  thunk_FUN_01c20e04(ppPVar1,__this_00);
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  return;
}

