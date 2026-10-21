// CMOAIOLDOIJ$$.ctor @ RVA 0x31BE544

void CMOAIOLDOIJ___ctor(CMOAIOLDOIJ_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04566c02 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10925);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566c02 = 1;
  }
  ODKDFMHHLIP___ctor((ODKDFMHHLIP_o *)__this,(MethodInfo *)0x0);
  (__this->fields).ACHHIFCBPHD = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).BMPDKEOBAKN = -1;
  ppSVar1 = &(__this->fields).KJAIPLMIAGP;
  *ppSVar1 = StringLiteral_10925;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).super.DNPAFIFHKIP = 1;
  return;
}

