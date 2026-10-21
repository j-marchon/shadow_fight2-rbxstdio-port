// KCPFIELGGLA$$MergeFrom @ RVA 0x34CCF68

void KCPFIELGGLA__MergeFrom
               (KCPFIELGGLA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KCPFIELGGLA_Fields *pKVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
                    /* try { // try from 035ccf68 to 036ccf6f has its CatchHandler @ 035ccf70 */
                    /* catch() { ... } // from try @ 035ccef4 with catch @ 035ccf70
                       catch() { ... } // from try @ 035ccf68 with catch @ 035ccf70 */
  if ((DAT_04568684 & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04568684 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 != 10) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pKVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pKVar1,pGVar3);
      }
      __this_00 = (__this->fields).EHBNKDHKJNI;
      if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)KCPFIELGGLA_TypeInfo->static_fields->IODFLINNJEL
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

