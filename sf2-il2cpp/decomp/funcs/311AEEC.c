// KAMBBJFPLGM$$MergeFrom @ RVA 0x311AEEC

void KAMBBJFPLGM__MergeFrom
               (KAMBBJFPLGM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KEGDLHPEJBG_o **ppKVar1;
  BPBGAAHBFKH_o **ppBVar2;
  NGOFOPOGBMJ_o **ppNVar3;
  EOLFEKNCPLM_o **ppEVar4;
  KAMBBJFPLGM_Fields *pKVar5;
  uint uVar6;
  int32_t iVar7;
  int64_t iVar8;
  KEGDLHPEJBG_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar9;
  NGOFOPOGBMJ_o *__this_01;
  BPBGAAHBFKH_o *__this_02;
  EOLFEKNCPLM_o *pEVar10;
  Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *codec;
  MethodInfo_295E0C0 *method_00;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_03;
  
  if ((DAT_045665e4 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_045665e4 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0321b2b4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 == 0) {
    return;
  }
  ppKVar1 = &(__this->fields).LIGHEGAMGHD;
  ppBVar2 = &(__this->fields).IGPJEDLPAGI;
  ppNVar3 = &(__this->fields).CBEJJIHKEGF;
  ppEVar4 = &(__this->fields).FLAFELDNABC;
  pKVar5 = &__this->fields;
LAB_0321afc0:
  if (uVar6 < 0x31) {
    if (0x18 < uVar6) {
      if (uVar6 == 0x22) {
        __this_03 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                    (__this->fields).LEJBLHJFJHP;
        if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          codec = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
                  KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE;
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__
          ;
          goto LAB_0321b27c;
        }
        goto LAB_0321b2b4;
      }
      if (uVar6 == 0x28) {
        iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IJBBNNHJPLF = iVar7;
      }
      else {
        if (uVar6 != 0x30) goto LAB_0321b0f4;
        iVar8 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GFIFLFPODAE = iVar8;
      }
      goto LAB_0321b288;
    }
    if (uVar6 == 10) {
      pEVar10 = *ppEVar4;
      if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
        pEVar10 = (EOLFEKNCPLM_o *)thunk_FUN_01bda818(EOLFEKNCPLM_TypeInfo);
        EOLFEKNCPLM___ctor(pEVar10,(MethodInfo *)0x0);
        *ppEVar4 = pEVar10;
        thunk_FUN_01c20e04(ppEVar4,pEVar10);
        pEVar10 = *ppEVar4;
      }
    }
    else {
      if (uVar6 != 0x12) {
        if (uVar6 != 0x18) goto LAB_0321b0f4;
        iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMOLIBOCKJK = iVar7;
        goto LAB_0321b288;
      }
      pEVar10 = (EOLFEKNCPLM_o *)*ppNVar3;
      if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
        __this_01 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
        NGOFOPOGBMJ___ctor(__this_01,(MethodInfo *)0x0);
        *ppNVar3 = __this_01;
        thunk_FUN_01c20e04(ppNVar3,__this_01);
        pEVar10 = (EOLFEKNCPLM_o *)*ppNVar3;
      }
    }
  }
  else {
    if (uVar6 < 0x49) {
      if (uVar6 == 0x38) {
        iVar8 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FLFGAIPCCJK = iVar8;
      }
      else {
        if (uVar6 == 0x42) {
          __this_03 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                      (__this->fields).AKFPFIHIHOC;
          if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
            codec = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
                    KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__;
            goto LAB_0321b27c;
          }
          goto LAB_0321b2b4;
        }
        if (uVar6 != 0x48) goto LAB_0321b0f4;
        iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GNKNDHJHFOC = iVar7;
      }
      goto LAB_0321b288;
    }
    if (0x5a < uVar6) {
      if (uVar6 != 0x62) {
        if (uVar6 != 0x6a) {
LAB_0321b0f4:
          pGVar9 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pKVar5->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pKVar5->CKFPENBPNML = pGVar9;
          thunk_FUN_01c20e04(pKVar5,pGVar9);
          goto LAB_0321b288;
        }
        pEVar10 = (EOLFEKNCPLM_o *)*ppKVar1;
        if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
          __this_00 = (KEGDLHPEJBG_o *)thunk_FUN_01bda818(KEGDLHPEJBG_TypeInfo);
          KEGDLHPEJBG___ctor(__this_00,(MethodInfo *)0x0);
          *ppKVar1 = __this_00;
          thunk_FUN_01c20e04(ppKVar1,__this_00);
          pEVar10 = (EOLFEKNCPLM_o *)*ppKVar1;
        }
        goto LAB_0321b244;
      }
      __this_03 = (__this->fields).FDELJPKNGKF;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
        codec = KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG;
        method_00 = Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_AddEntriesFrom__;
LAB_0321b27c:
        Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,AIGOBLJEBCA,
                   (Google_Protobuf_FieldCodec_T__o *)codec,method_00);
        goto LAB_0321b288;
      }
      goto LAB_0321b2b4;
    }
    if (uVar6 != 0x52) {
      if (uVar6 != 0x5a) goto LAB_0321b0f4;
      __this_03 = (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)
                  (__this->fields).HBIHNBPPEEO;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_03 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
        codec = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
                KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF;
        method_00 = Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__;
        goto LAB_0321b27c;
      }
      goto LAB_0321b2b4;
    }
    pEVar10 = (EOLFEKNCPLM_o *)*ppBVar2;
    if (pEVar10 == (EOLFEKNCPLM_o *)0x0) {
      __this_02 = (BPBGAAHBFKH_o *)thunk_FUN_01bda818(BPBGAAHBFKH_TypeInfo);
      BPBGAAHBFKH___ctor(__this_02,(MethodInfo *)0x0);
      *ppBVar2 = __this_02;
      thunk_FUN_01c20e04(ppBVar2,__this_02);
      pEVar10 = (EOLFEKNCPLM_o *)*ppBVar2;
    }
  }
LAB_0321b244:
  Google_Protobuf_CodedInputStream__ReadMessage
            (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pEVar10,(MethodInfo *)0x0);
LAB_0321b288:
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 == 0) {
    return;
  }
  goto LAB_0321afc0;
}

