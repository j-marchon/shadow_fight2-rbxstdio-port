// ENFPENIMCIK$$HCOCAAIGNNL @ RVA 0x337870C

void ENFPENIMCIK__HCOCAAIGNNL(ENFPENIMCIK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 0347871c to 03578743 has its CatchHandler @ 03479d8c */
  if ((DAT_04567b60 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930);
    DAT_04567b60 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).GJNOEAKNMOG;
  *ppSVar2 = pSVar1;
                    /* try { // try from 03478778 to 035787a3 has its CatchHandler @ 03479d84 */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

