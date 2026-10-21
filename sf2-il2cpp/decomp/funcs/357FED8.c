// EOLFEKNCPLM$$MergeFrom @ RVA 0x357FED8

void EOLFEKNCPLM__MergeFrom
               (EOLFEKNCPLM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OBCMNBDBNFO_o **ppOVar1;
  GKLPDMLELJF_o **ppGVar2;
  EOLFEKNCPLM_Fields *pEVar3;
  uint uVar4;
  int32_t iVar5;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  OBCMNBDBNFO_o *__this_00;
  GKLPDMLELJF_o *pGVar7;
  
  if ((DAT_04568cc2 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_04568cc2 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar4 != 0) {
    ppOVar1 = &(__this->fields).PLJJCOHGICK;
    ppGVar2 = &(__this->fields).MCOPPCNPAHF;
    pEVar3 = &__this->fields;
    do {
      if (uVar4 < 0x1b) {
        if (uVar4 == 10) {
          pGVar7 = *ppGVar2;
          if (pGVar7 == (GKLPDMLELJF_o *)0x0) {
            pGVar7 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo);
            GKLPDMLELJF___ctor(pGVar7,(MethodInfo *)0x0);
            *ppGVar2 = pGVar7;
            thunk_FUN_01c20e04(ppGVar2,pGVar7);
            pGVar7 = *ppGVar2;
          }
        }
        else {
          if (uVar4 != 0x12) {
            if (uVar4 == 0x1a) {
              CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes
                                      (AIGOBLJEBCA,(MethodInfo *)0x0);
              EOLFEKNCPLM__BGOOPIDKJEC(__this,CJNHFNHJHPE,method);
            }
            else {
LAB_0367ffb8:
              method = (MethodInfo *)0x0;
              pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                 (pEVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pEVar3->CKFPENBPNML = pGVar6;
              thunk_FUN_01c20e04(pEVar3,pGVar6);
            }
            goto LAB_03680074;
          }
          pGVar7 = (GKLPDMLELJF_o *)*ppOVar1;
          if (pGVar7 == (GKLPDMLELJF_o *)0x0) {
            __this_00 = (OBCMNBDBNFO_o *)thunk_FUN_01bda818(OBCMNBDBNFO_TypeInfo);
            OBCMNBDBNFO___ctor(__this_00,(MethodInfo *)0x0);
            *ppOVar1 = __this_00;
            thunk_FUN_01c20e04(ppOVar1,__this_00);
            pGVar7 = (GKLPDMLELJF_o *)*ppOVar1;
          }
        }
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pGVar7,(MethodInfo *)0x0);
      }
      else if (uVar4 == 0x20) {
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).LEEKCALJFJN = iVar5;
      }
      else if (uVar4 == 0x28) {
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IINFDIJOFIG = iVar5;
      }
      else {
        if (uVar4 != 0x30) goto LAB_0367ffb8;
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).ODDCBFOLIGB = iVar5;
      }
LAB_03680074:
      uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar4 != 0);
  }
  return;
}

