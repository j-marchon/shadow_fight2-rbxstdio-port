// GPKDMPJJEOO$$MergeFrom @ RVA 0x319DB8C

void GPKDMPJJEOO__MergeFrom(GPKDMPJJEOO_o *__this,GPKDMPJJEOO_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  GPKDMPJJEOO_Fields *pGVar3;
  PGICCMFLDPI_o **ppPVar4;
  
  if ((DAT_04566abd & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_Add__);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566abd = 1;
  }
  if (IBKIPBJJCPG == (GPKDMPJJEOO_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    ppPVar4 = &(__this->fields).MIINPPOCPCN;
    pPVar1 = *ppPVar4;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar4 = pPVar1;
      thunk_FUN_01c20e04(ppPVar4,pPVar1);
      pPVar1 = *ppPVar4;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) goto LAB_0329dc7c;
    }
    PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).PPDLPBMONBL;
  if (__this_00 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
    Google_Protobuf_Collections_MapField<object,_object>__Add
              ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,
               (System_Collections_Generic_IDictionary_TKey__TValue__o *)
               (IBKIPBJJCPG->fields).PPDLPBMONBL,
               Method_Google_Protobuf_Collections_MapField<string,_string>_Add__);
    pGVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pGVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pGVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pGVar3,pGVar2);
    return;
  }
LAB_0329dc7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

