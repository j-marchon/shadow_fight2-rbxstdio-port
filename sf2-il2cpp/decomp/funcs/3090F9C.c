// NODLJPNGNBG$$MergeFrom @ RVA 0x3090F9C

void NODLJPNGNBG__MergeFrom
               (NODLJPNGNBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ICBMOMGINFH_o **ppIVar1;
  NODLJPNGNBG_Fields *pNVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int64_t iVar7;
  ICBMOMGINFH_o *pIVar8;
  
  if ((DAT_045660a0 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045660a0 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar4 != 0) {
    ppIVar1 = &(__this->fields).PMMFPJJOPKE;
    pNVar2 = &__this->fields;
    do {
      if (uVar4 < 0x11) {
        if (uVar4 == 8) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ANAJGHJEEOC = iVar7;
        }
        else if (uVar4 == 0x10) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LINGIJDCLLC = iVar5;
        }
        else {
LAB_0319107c:
          pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pNVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pNVar2->CKFPENBPNML = pGVar6;
          thunk_FUN_01c20e04(pNVar2,pGVar6);
        }
      }
      else if (uVar4 == 0x18) {
        bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).DMFDEJEDMPO = bVar3;
      }
      else if (uVar4 == 0x20) {
        iVar5 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PFJPLCAIGJH = iVar5;
      }
      else {
        if (uVar4 != 0x2a) goto LAB_0319107c;
        pIVar8 = *ppIVar1;
        if (pIVar8 == (ICBMOMGINFH_o *)0x0) {
          pIVar8 = (ICBMOMGINFH_o *)thunk_FUN_01bda818(ICBMOMGINFH_TypeInfo);
          ICBMOMGINFH___ctor(pIVar8,(MethodInfo *)0x0);
          *ppIVar1 = pIVar8;
          thunk_FUN_01c20e04(ppIVar1,pIVar8);
          pIVar8 = *ppIVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pIVar8,(MethodInfo *)0x0);
      }
      uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar4 != 0);
  }
  return;
}

