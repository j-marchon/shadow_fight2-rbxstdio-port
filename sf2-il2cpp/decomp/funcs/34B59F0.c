// OJEHKJHEBID$$CalculateSize @ RVA 0x34B59F0

int32_t OJEHKJHEBID__CalculateSize(OJEHKJHEBID_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  long lVar4;
  System_String_o *value;
  EEHFEPPDBHL_o *value_00;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_02;
  int iVar5;
  
  if ((DAT_04568581 & 1) == 0) {
                    /* try { // try from 035b5a0c to 036b5ad3 has its CatchHandler @ 035b5a0c
                       catch() { ... } // from try @ 035b5a0c with catch @ 035b5a0c
                       catch() { ... } // from try @ 035b5b14 with catch @ 035b5a0c
                       catch() { ... } // from try @ 035b5b54 with catch @ 035b5a0c
                       catch() { ... } // from try @ 035b5b80 with catch @ 035b5a0c
                       catch() { ... } // from try @ 035b5bcc with catch @ 035b5a0c */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_CalculateSize__);
    DAT_04568581 = 1;
    method = extraout_x1;
  }
  lVar4 = (__this->fields).ADEIKPGDIPM;
  if (lVar4 == 0) {
    iVar5 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar4,(MethodInfo *)0x0);
    iVar5 = iVar2 + 1;
  }
  value = (__this->fields).GJNOEAKNMOG;
  if (value != (System_String_o *)0x0) {
    if ((value->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar5 = iVar5 + iVar2 + 1;
    }
    lVar4 = (__this->fields).HAKDPKINDPN;
    if (lVar4 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar4,(MethodInfo *)0x0);
                    /* try { // try from 035b5ad4 to 036b5adb has its CatchHandler @ 035b5b64 */
      iVar5 = iVar5 + iVar2 + 1;
    }
    iVar1 = (__this->fields).GPDALMOAKGG;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
                    /* try { // try from 035b5b04 to 036b5b07 has its CatchHandler @ 035b5b58 */
      iVar5 = iVar5 + iVar2 + 1;
    }
                    /* try { // try from 035b5b08 to 036b5b13 has its CatchHandler @ 035b5b5c */
    iVar1 = (__this->fields).IBFEHEDKGAL;
    if (iVar1 != 0) {
                    /* try { // try from 035b5b14 to 036b5b4f has its CatchHandler @ 035b5a0c */
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar5 = iVar5 + iVar2 + 1;
    }
    value_00 = (__this->fields).MMIHELOLFPP;
    if (value_00 != (EEHFEPPDBHL_o *)0x0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035b5b50 to 036b5b53 has its CatchHandler @ 035b5b60 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 035b5b54 to 036b5b7b has its CatchHandler @ 035b5a0c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b5b04 with catch @ 035b5b58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b5b08 with catch @ 035b5b5c
                        */
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                        ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b5b50 with catch @ 035b5b60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b5ad4 with catch @ 035b5b64
                        */
      iVar5 = iVar5 + iVar2 + 1;
    }
    __this_02 = (__this->fields).MABPCBMOECE;
    if ((OJEHKJHEBID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035b5b7c to 036b5b7f has its CatchHandler @ 035b5bb4 */
    if (__this_02 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* try { // try from 035b5b80 to 036b5bc3 has its CatchHandler @ 035b5a0c */
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                         (Google_Protobuf_FieldCodec_T__o *)
                         OJEHKJHEBID_TypeInfo->static_fields->CCHHCINKGLK,
                         Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_CalculateSize__
                        );
      __this_00 = (__this->fields).MJIHCLLODMF;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                    /* catch() { ... } // from try @ 035b5b7c with catch @ 035b5bb4 */
                    /* try { // try from 035b5bc4 to 036b5bcb has its CatchHandler @ 035b5be0 */
        iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                           (Google_Protobuf_FieldCodec_T__o *)
                           OJEHKJHEBID_TypeInfo->static_fields->ENELKKDEGPJ,
                           Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_CalculateSize__
                          );
                    /* try { // try from 035b5bcc to 036b5bd7 has its CatchHandler @ 035b5a0c */
        __this_01 = (__this->fields).CKFPENBPNML;
        iVar5 = iVar2 + iVar5 + iVar3;
        if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 035b5bd8 to 036b5bdf has its CatchHandler @ 035b5be0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b5bc4 with catch @ 035b5be0
                       catch(type#2 @ 00000000) { ... } // from try @ 035b5bd8 with catch @ 035b5be0
                        */
          iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
          iVar5 = iVar2 + iVar5;
        }
        return iVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

