// CBPENMDOJDB$$FFHJDGPNCKJ @ RVA 0x3103120

void CBPENMDOJDB__FFHJDGPNCKJ(CBPENMDOJDB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045664d5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930);
    DAT_045664d5 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).JAAACMPGMKJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

