// JGELBDHDHAO$$CalculateSize @ RVA 0x3504A3C

int32_t JGELBDHDHAO__CalculateSize(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_0456888c & 1) == 0) {
                    /* try { // try from 03604a64 to 03704a6b has its CatchHandler @ 03604b84 */
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
                    /* try { // try from 03604a78 to 03704a87 has its CatchHandler @ 03604b8c */
    DAT_0456888c = 1;
    method = extraout_x1;
  }
  bVar1 = (__this->fields).IFBHDAMCHNM;
  __this_01 = (__this->fields).DDEAFMPDPBJ;
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JGELBDHDHAO_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* try { // try from 03604a9c to 03704a9f has its CatchHandler @ 03604b70 */
                    /* try { // try from 03604ab0 to 03704ab3 has its CatchHandler @ 03604b6c */
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar3 = iVar2 + (uint)bVar1 * 2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

