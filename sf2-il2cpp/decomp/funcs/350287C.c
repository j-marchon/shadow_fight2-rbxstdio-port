// OBCMNBDBNFO$$MergeFrom @ RVA 0x350287C

void OBCMNBDBNFO__MergeFrom
               (OBCMNBDBNFO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OBCMNBDBNFO_Fields *pOVar1;
  uint uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  
  if ((DAT_04568867 & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_AddEntriesFrom__);
    DAT_04568867 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar2 != 0) {
      pOVar1 = &__this->fields;
      do {
        if (uVar2 < 0x19) {
          if (uVar2 == 8) {
                    /* try { // try from 036029bc to 03702c93 has its CatchHandler @ 036029bc
                       catch() { ... } // from try @ 036029bc with catch @ 036029bc
                       catch() { ... } // from try @ 03602d2c with catch @ 036029bc
                       catch() { ... } // from try @ 03602d58 with catch @ 036029bc
                       catch() { ... } // from try @ 03602e10 with catch @ 036029bc
                       catch() { ... } // from try @ 03602f5c with catch @ 036029bc
                       catch() { ... } // from try @ 03602f88 with catch @ 036029bc
                       catch() { ... } // from try @ 0360306c with catch @ 036029bc */
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HHNJEEMAEIH = iVar3;
          }
          else if (uVar2 == 0x10) {
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).MGFICIOBKAI = iVar3;
          }
          else {
            if (uVar2 != 0x18) goto LAB_03602990;
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).AKBMEEECABK = iVar3;
          }
        }
        else if (uVar2 < 0x29) {
          if (uVar2 == 0x20) {
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).GCELGJPAMAA = iVar3;
          }
          else if (uVar2 == 0x28) {
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).JEAFOMDCLHD = iVar3;
          }
          else {
LAB_03602990:
            pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pOVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pOVar1->CKFPENBPNML = pGVar4;
            thunk_FUN_01c20e04(pOVar1,pGVar4);
          }
        }
        else if (uVar2 == 0x30) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OKHEECOKPBF = iVar3;
        }
        else {
          if (uVar2 != 0x3a) goto LAB_03602990;
          __this_00 = (__this->fields).CFIKNGMJBLI;
          if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0)
          goto LAB_03602a24;
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM,
                     Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_AddEntriesFrom__)
          ;
        }
        uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar2 != 0);
    }
    return;
  }
LAB_03602a24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

