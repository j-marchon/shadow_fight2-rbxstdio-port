// KJNCNBJIJPC$$MergeFrom @ RVA 0x331B404

void KJNCNBJIJPC__MergeFrom
               (KJNCNBJIJPC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KJNCNBJIJPC_Fields *pKVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  Google_Protobuf_FieldCodec_IHMIMECHIAN__o *codec;
  MethodInfo_295E0C0 *method_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_00;
  
  if ((DAT_04567810 & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04567810 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      pKVar1 = &__this->fields;
      do {
        if (uVar3 < 0x19) {
          if (uVar3 == 8) {
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).OLGJBKMCGIC = iVar4;
          }
          else {
            if (uVar3 == 0x12) {
              __this_00 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
                          (__this->fields).DDEAFMPDPBJ;
              if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (__this_00 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
                codec = (Google_Protobuf_FieldCodec_IHMIMECHIAN__o *)
                        KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ;
                method_00 = 
                Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__;
                goto LAB_0341b5c4;
              }
              goto LAB_0341b610;
            }
            if (uVar3 != 0x18) goto LAB_0341b538;
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).OJBIFDEEBNO = iVar4;
          }
        }
        else if (uVar3 < 0x2b) {
          if (uVar3 == 0x22) {
            __this_00 = (__this->fields).EACBGCPPLBO;
            if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_00 == (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)
            goto LAB_0341b610;
            codec = KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddEntriesFrom__;
          }
          else {
            if (uVar3 != 0x2a) {
LAB_0341b538:
              pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                 (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pKVar1->CKFPENBPNML = pGVar5;
              thunk_FUN_01c20e04(pKVar1,pGVar5);
              goto LAB_0341b5e8;
            }
            __this_00 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
                        (__this->fields).KELNJLBBHEC;
            if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_00 == (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)
            goto LAB_0341b610;
            codec = (Google_Protobuf_FieldCodec_IHMIMECHIAN__o *)
                    KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddEntriesFrom__;
          }
LAB_0341b5c4:
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)codec,method_00);
        }
        else if (uVar3 == 0x30) {
          bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).HFNMLHEEAJM = bVar2;
        }
        else {
          if (uVar3 != 0x38) goto LAB_0341b538;
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).GAGJCDGEGBL = iVar4;
        }
LAB_0341b5e8:
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
    return;
  }
LAB_0341b610:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

