// AJINOJNMEEK$$IPNMMELEIJE @ RVA 0x304DF94

void AJINOJNMEEK__IPNMMELEIJE(AJINOJNMEEK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565e2b & 1) == 0) {
                    /* try { // try from 0314dfc8 to 0324dfef has its CatchHandler @ 0314e004 */
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930);
    DAT_04565e2b = 1;
  }
                    /* try { // try from 0314dff0 to 0324dffb has its CatchHandler @ 0314dae8 */
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).EGELDFKMOCJ;
  *ppSVar2 = pSVar1;
                    /* try { // try from 0314dffc to 0324e003 has its CatchHandler @ 0314e004 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314dfc8 with catch @ 0314e004
                       catch(type#2 @ 00000000) { ... } // from try @ 0314dffc with catch @ 0314e004
                        */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

