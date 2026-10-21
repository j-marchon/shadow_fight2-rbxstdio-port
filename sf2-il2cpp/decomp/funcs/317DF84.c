// ICBMOMGINFH$$MergeFrom @ RVA 0x317DF84

void ICBMOMGINFH__MergeFrom
               (ICBMOMGINFH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BECIPDJBAOG_o **ppBVar1;
  ICBMOMGINFH_Fields *pIVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *pBVar6;
  
  if ((DAT_0456699d & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_0456699d = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar3 != 0) {
    ppBVar1 = &(__this->fields).MJIIHOLHNCK;
    pIVar2 = &__this->fields;
    do {
      if (uVar3 < 0x11) {
        if (uVar3 == 10) {
          pBVar6 = *ppBVar1;
          if (pBVar6 == (BECIPDJBAOG_o *)0x0) {
            pBVar6 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
            BECIPDJBAOG___ctor(pBVar6,(MethodInfo *)0x0);
            *ppBVar1 = pBVar6;
            thunk_FUN_01c20e04(ppBVar1,pBVar6);
            pBVar6 = *ppBVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pBVar6,(MethodInfo *)0x0);
        }
        else if (uVar3 == 0x10) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).DHNAEFBMBEG = iVar4;
        }
        else {
LAB_0327e030:
          pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pIVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pIVar2->CKFPENBPNML = pGVar5;
          thunk_FUN_01c20e04(pIVar2,pGVar5);
        }
      }
      else if (uVar3 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FBKKMKKHPBC = iVar4;
      }
      else {
        if (uVar3 != 0x20) goto LAB_0327e030;
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EJKCJCAPKKG = iVar4;
      }
      uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar3 != 0);
  }
  return;
}

