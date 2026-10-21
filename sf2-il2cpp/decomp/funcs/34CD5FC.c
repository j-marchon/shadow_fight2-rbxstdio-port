// KCPFIELGGLA$$CalculateSize @ RVA 0x34CD5FC

int32_t KCPFIELGGLA__CalculateSize(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_0456868d & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    DAT_0456868d = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KCPFIELGGLA_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* try { // try from 035cd670 to 036cd897 has its CatchHandler @ 035cd670
                       catch() { ... } // from try @ 035cd670 with catch @ 035cd670
                       catch() { ... } // from try @ 035cd8b8 with catch @ 035cd670
                       catch() { ... } // from try @ 035cd8e4 with catch @ 035cd670
                       catch() { ... } // from try @ 035cd90c with catch @ 035cd670
                       catch() { ... } // from try @ 035cd93c with catch @ 035cd670 */
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KCPFIELGGLA_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

