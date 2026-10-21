// IOHDCPBJGFF$$.ctor @ RVA 0x320972C

void IOHDCPBJGFF___ctor(IOHDCPBJGFF_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04566e64 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12583);
    DAT_04566e64 = 1;
  }
  ODKDFMHHLIP___ctor((ODKDFMHHLIP_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).DONLEDMPGCF;
  *ppSVar1 = StringLiteral_12583;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).super.DNPAFIFHKIP = 0;
  return;
}

