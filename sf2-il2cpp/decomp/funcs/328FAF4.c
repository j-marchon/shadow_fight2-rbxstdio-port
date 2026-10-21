// BKKENCMPLLF$$.ctor @ RVA 0x328FAF4

void BKKENCMPLLF___ctor(BKKENCMPLLF_o *__this,EEHFEPPDBHL_o *GMDFNEFPFJH,MethodInfo *method)

{
  MethodInfo *method_00;
  EEHFEPPDBHL_o **ppEVar1;
  
  if ((DAT_0456730b & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_0456730b = 1;
  }
  (__this->fields).HONOOAELMFJ = StringLiteral_1;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppEVar1 = &(__this->fields)._OGOHLLOEANF_k__BackingField;
  *ppEVar1 = GMDFNEFPFJH;
  thunk_FUN_01c20e04(ppEVar1,GMDFNEFPFJH);
  if (*ppEVar1 != (EEHFEPPDBHL_o *)0x0) {
    return;
  }
  BKKENCMPLLF__CGJFEEGNFOM(__this,method_00);
  return;
}

