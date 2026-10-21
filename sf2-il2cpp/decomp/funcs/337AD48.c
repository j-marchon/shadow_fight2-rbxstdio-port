// NIGMCJIMBHO$$AKKHFOGFIMC @ RVA 0x337AD48

void NIGMCJIMBHO__AKKHFOGFIMC
               (NIGMCJIMBHO_o *__this,Google_Protobuf_ByteString_o *CJNHFNHJHPE,MethodInfo *method)

{
  Google_Protobuf_ByteString_o *pGVar1;
  Google_Protobuf_ByteString_o **ppGVar2;
  
  if ((DAT_04567b84 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
    FUN_01bab630(&StringLiteral_21930);
    DAT_04567b84 = 1;
  }
  pGVar1 = (Google_Protobuf_ByteString_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
  ppGVar2 = &(__this->fields).DKOBFIICAFM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

