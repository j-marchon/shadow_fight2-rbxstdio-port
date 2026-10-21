// OJKCDJCBOBL$$MergeFrom @ RVA 0x35C2B38

void OJKCDJCBOBL__MergeFrom
               (OJKCDJCBOBL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OJKCDJCBOBL_Fields *pOVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04568f48 & 1) == 0) {
                    /* try { // try from 036c2b60 to 037c2c2f has its CatchHandler @ 036c2b60
                       catch() { ... } // from try @ 036c2b60 with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2c9c with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2cd0 with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2cfc with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2d2c with catch @ 036c2b60 */
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    DAT_04568f48 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pOVar1 = &__this->fields;
    while( true ) {
      while ((uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
             uVar2 != 8 && (uVar2 != 10))) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pOVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pOVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pOVar1,pGVar3);
      }
      __this_00 = (__this->fields).OHMDCKEDOGH;
      if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<long>__AddEntriesFrom
                (__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)OJKCDJCBOBL_TypeInfo->static_fields->NIKPLHDPOJB
                 ,Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

