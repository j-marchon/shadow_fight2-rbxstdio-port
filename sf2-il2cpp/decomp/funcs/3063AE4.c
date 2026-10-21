// ACHLOMELAJE$$DGHDANFEIMA @ RVA 0x3063AE4

void ACHLOMELAJE__DGHDANFEIMA(ACHLOMELAJE_o *__this,System_String_o *LDOJIMFOBGG,MethodInfo *method)

{
  DNELIPCHKLK_o **ppDVar1;
  DNELIPCHKLK_o *pDVar2;
  
  if ((DAT_04565eed & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    DAT_04565eed = 1;
  }
  pDVar2 = (__this->fields).IFIPEAHGJKB;
  if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
    DNELIPCHKLK__LGOFNFEIKFB(pDVar2,LDOJIMFOBGG,(MethodInfo *)0x0);
    return;
  }
  ppDVar1 = &(__this->fields).IFIPEAHGJKB;
  pDVar2 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(pDVar2,LDOJIMFOBGG,(MethodInfo *)0x0);
  *ppDVar1 = pDVar2;
  thunk_FUN_01c20e04(ppDVar1,pDVar2);
  return;
}

