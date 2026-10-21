// OLCBPIHLPEC$$EEMGLBFKELA @ RVA 0x35BADB8

void OLCBPIHLPEC__EEMGLBFKELA(OLCBPIHLPEC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568ecf & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930);
    DAT_04568ecf = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).IAEBJKOPDAO;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

