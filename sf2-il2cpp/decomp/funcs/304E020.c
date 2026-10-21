// AJINOJNMEEK$$MergeFrom @ RVA 0x304E020

void AJINOJNMEEK__MergeFrom
               (AJINOJNMEEK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  AJINOJNMEEK_Fields *pAVar2;
  bool bVar3;
  uint32_t uVar4;
  int32_t iVar5;
  Google_Protobuf_FieldCodec_string__o *__this_00;
  System_String_o *pSVar6;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  
  if ((DAT_04565e28 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<string>_Read__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565e28 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0314e194:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppSVar1 = &(__this->fields).ABFBDJFPIMM;
  pAVar2 = &__this->fields;
LAB_0314e098:
  while( true ) {
    while( true ) {
      while (uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            (int)uVar4 < 0x12) {
        if (uVar4 != 8) {
          if (uVar4 == 0) {
            return;
          }
          goto LAB_0314e158;
        }
        iVar5 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMDNDLOODLG = iVar5;
      }
      if (uVar4 != 0x12) break;
      pSVar6 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
      AJINOJNMEEK__IPNMMELEIJE(__this,pSVar6,method);
    }
    if (uVar4 == 0x1a) break;
LAB_0314e158:
    method = (MethodInfo *)0x0;
    pGVar7 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                       (pAVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
    pAVar2->CKFPENBPNML = pGVar7;
    thunk_FUN_01c20e04(pAVar2,pGVar7);
  }
  if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
  if (__this_00 == (Google_Protobuf_FieldCodec_string__o *)0x0) goto LAB_0314e194;
  method = Method_Google_Protobuf_FieldCodec<string>_Read__;
  pSVar6 = (System_String_o *)
           Google_Protobuf_FieldCodec<object>__Read
                     ((Google_Protobuf_FieldCodec_T__o *)__this_00,AIGOBLJEBCA,
                      (MethodInfo_250B49C *)Method_Google_Protobuf_FieldCodec<string>_Read__);
  if (*ppSVar1 != (System_String_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
    if (!bVar3) goto LAB_0314e098;
  }
  *ppSVar1 = pSVar6;
  thunk_FUN_01c20e04(ppSVar1,pSVar6);
  goto LAB_0314e098;
}

