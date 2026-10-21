// DMOPGPMINJD$$MergeFrom @ RVA 0x30BAB54

void DMOPGPMINJD__MergeFrom
               (DMOPGPMINJD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EEHFEPPDBHL_o **ppEVar1;
  DMOPGPMINJD_Fields *pDVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  EEHFEPPDBHL_o *pEVar5;
  
  if ((DAT_04566236 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04566236 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppEVar1 = &(__this->fields).MMIHELOLFPP;
    pDVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          DMOPGPMINJD__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar3 != 0x12) break;
        pEVar5 = *ppEVar1;
        if (pEVar5 == (EEHFEPPDBHL_o *)0x0) {
          pEVar5 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo);
          EEHFEPPDBHL___ctor(pEVar5,(MethodInfo *)0x0);
          *ppEVar1 = pEVar5;
          thunk_FUN_01c20e04(ppEVar1,pEVar5);
          pEVar5 = *ppEVar1;
        }
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pEVar5,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pDVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pDVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pDVar2,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

