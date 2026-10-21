// GPKDMPJJEOO$$.ctor @ RVA 0x319D72C

void GPKDMPJJEOO___ctor(GPKDMPJJEOO_o *__this,GPKDMPJJEOO_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_Collections_MapField_string__string__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566ac5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_Clone__);
    DAT_04566ac5 = 1;
    method_00 = extraout_x1;
  }
  GPKDMPJJEOO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (GPKDMPJJEOO_o *)0x0) {
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    if (__this != (GPKDMPJJEOO_o *)0x0) {
      (__this->fields).MIINPPOCPCN = pPVar1;
      thunk_FUN_01c20e04();
      pGVar2 = (IBKIPBJJCPG->fields).PPDLPBMONBL;
      if (pGVar2 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_MapField_string__string__o *)
                 Google_Protobuf_Collections_MapField<object,_object>__Clone
                           ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)pGVar2,
                            Method_Google_Protobuf_Collections_MapField<string,_string>_Clone__);
        (__this->fields).PPDLPBMONBL = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(&__this->fields,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

