// EMMFFOGMNAB$$NMDCPICIHAL @ RVA 0x33A8DB0

bool EMMFFOGMNAB__NMDCPICIHAL(EMMFFOGMNAB_o *__this,System_String_o *JGILCNFNPHE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *uriString;
  System_Uri_o *local_28;
  
  if ((DAT_04567cfd & 1) == 0) {
    FUN_01bab630(&System_Uri_TypeInfo);
    FUN_01bab630(&StringLiteral_18862);
    DAT_04567cfd = 1;
  }
  local_28 = (System_Uri_o *)0x0;
  uriString = System_String__Concat(StringLiteral_18862,JGILCNFNPHE,(MethodInfo *)0x0);
  if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Uri_TypeInfo);
  }
  bVar1 = System_Uri__TryCreate(uriString,1,&local_28,(MethodInfo *)0x0);
  return bVar1;
}

