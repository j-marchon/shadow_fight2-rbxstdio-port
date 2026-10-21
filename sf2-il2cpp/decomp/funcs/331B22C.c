// KJNCNBJIJPC$$CalculateSize @ RVA 0x331B22C

int32_t KJNCNBJIJPC__CalculateSize(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_03;
  int iVar4;
  
                    /* try { // try from 0341b23c to 0351b247 has its CatchHandler @ 0341af14 */
  if ((DAT_0456780f & 1) == 0) {
                    /* try { // try from 0341b248 to 0351b24f has its CatchHandler @ 0341b250 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341b214 with catch @ 0341b250
                       catch(type#2 @ 00000000) { ... } // from try @ 0341b248 with catch @ 0341b250
                        */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_CalculateSize__);
    DAT_0456780f = 1;
    method = extraout_x1;
  }
  iVar4 = (__this->fields).OLGJBKMCGIC;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar4,(MethodInfo *)0x0);
    iVar4 = iVar2 + 1;
  }
  __this_02 = (__this->fields).DDEAFMPDPBJ;
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    iVar1 = (__this->fields).OJBIFDEEBNO;
    iVar4 = iVar2 + iVar4;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    __this_03 = (__this->fields).EACBGCPPLBO;
    if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_03 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                         (Google_Protobuf_FieldCodec_T__o *)
                         KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP,
                         Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_CalculateSize__
                        );
      __this_01 = (__this->fields).KELNJLBBHEC;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
        iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                           (Google_Protobuf_FieldCodec_T__o *)
                           KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI,
                           Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_CalculateSize__
                          );
        iVar1 = (__this->fields).GAGJCDGEGBL;
        iVar4 = iVar2 + iVar4 + iVar3;
        if ((__this->fields).HFNMLHEEAJM != false) {
          iVar4 = iVar4 + 2;
        }
        if (iVar1 != 0) {
          if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
          iVar4 = iVar4 + iVar2 + 1;
        }
        __this_00 = (__this->fields).CKFPENBPNML;
        if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
          iVar4 = iVar2 + iVar4;
        }
        return iVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

