// FDHCLNDLIDG$$MergeFrom @ RVA 0x314B7B4

void FDHCLNDLIDG__MergeFrom
               (FDHCLNDLIDG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  FDHCLNDLIDG_Fields *pFVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pFVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 10) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        FDHCLNDLIDG__GCAEKDKFFKK(__this,CJNHFNHJHPE,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pFVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pFVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pFVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

