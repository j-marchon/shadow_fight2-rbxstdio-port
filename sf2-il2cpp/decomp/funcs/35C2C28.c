// OJKCDJCBOBL$$MergeFrom @ RVA 0x35C2C28

void OJKCDJCBOBL__MergeFrom(OJKCDJCBOBL_o *__this,OJKCDJCBOBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  OJKCDJCBOBL_Fields *pOVar2;
  
                    /* try { // try from 036c2c30 to 037c2c37 has its CatchHandler @ 036c2cd8 */
  if ((DAT_04568f49 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_04568f49 = 1;
  }
  if (IBKIPBJJCPG != (OJKCDJCBOBL_o *)0x0) {
    __this_00 = (__this->fields).OHMDCKEDOGH;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).OHMDCKEDOGH,
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
      pOVar2 = &__this->fields;
                    /* try { // try from 036c2c80 to 037c2c9b has its CatchHandler @ 036c2cd4 */
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pOVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pOVar2->CKFPENBPNML = pGVar1;
                    /* try { // try from 036c2c9c to 037c2cbf has its CatchHandler @ 036c2b60 */
      thunk_FUN_01c20e04(pOVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

