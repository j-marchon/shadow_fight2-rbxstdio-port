// IHMIMECHIAN$$MergeFrom @ RVA 0x343CC78

void IHMIMECHIAN__MergeFrom
               (IHMIMECHIAN_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  IHMIMECHIAN_Fields *pIVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  float fVar6;
  
  if ((DAT_045681e7 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
    DAT_045681e7 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      pIVar1 = &__this->fields;
      do {
        if (uVar3 < 0x29) {
          if (uVar3 < 0x11) {
            if (uVar3 == 8) {
              iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
              (__this->fields).CHLCOKOBIHN = iVar4;
            }
            else {
              if (uVar3 != 0x10) goto LAB_0353cda0;
              iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
              (__this->fields).KFBIHGFDAOL = iVar4;
            }
          }
          else if (uVar3 == 0x18) {
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).POHDGAPDBGK = bVar2;
          }
          else if (uVar3 == 0x20) {
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).PJMOADBJNKH = bVar2;
          }
          else {
            if (uVar3 != 0x28) goto LAB_0353cda0;
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).NNCLFDMPFHP = bVar2;
          }
        }
        else if (uVar3 < 0x3e) {
          if (uVar3 == 0x30) {
            bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HOFAHGOCDCE = bVar2;
          }
          else if (uVar3 == 0x3d) {
            fVar6 = Google_Protobuf_CodedInputStream__ReadFloat(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).KLOGBBKOLFL = fVar6;
          }
          else {
LAB_0353cda0:
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pIVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pIVar1->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pIVar1,pGVar5);
          }
        }
        else if ((uVar3 == 0x40) || (uVar3 == 0x42)) {
          __this_00 = (__this->fields).IKCCLDMOOKP;
          if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0)
          goto LAB_0353ce78;
          Google_Protobuf_Collections_RepeatedField<int>__AddEntriesFrom
                    (__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF,
                     Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
        }
        else {
          if (uVar3 != 0x48) goto LAB_0353cda0;
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LADINGEOKCK = iVar4;
        }
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
    return;
  }
LAB_0353ce78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

