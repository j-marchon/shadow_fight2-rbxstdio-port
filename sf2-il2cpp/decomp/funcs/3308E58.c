// PFLBGCPNEIM$$EOHMFJFFFIN @ RVA 0x3308E58

BOFEMGGNODC_o *
PFLBGCPNEIM__EOHMFJFFFIN
          (System_String_o *HCBBECJJIKK,System_String_o *HBDNGIDONHG,FPPKHNNABAD_o *LFHPEEKGNDO,
          System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  BOFEMGGNODC_o *__this;
  System_Type_o *BKFOLMBMFNP;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  FPPKHNNABAD_o *method_01;
  int32_t local_34;
  
  method_01 = LFHPEEKGNDO;
  if ((DAT_04567777 & 1) == 0) {
    FUN_01bab630(&PFLBGCPNEIM_var);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_4850);
    FUN_01bab630(&StringLiteral_853);
    DAT_04567777 = 1;
  }
  local_34 = 0;
  bVar1 = PFLBGCPNEIM__HGMMJIIEOLF(HCBBECJJIKK,&local_34,(MethodInfo *)method_01);
  handle = PFLBGCPNEIM_var;
  if (bVar1) {
    __this = PFLBGCPNEIM__EOHMFJFFFIN(local_34,HBDNGIDONHG,LFHPEEKGNDO,AHDGNOJPPIB,method);
  }
  else {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BKFOLMBMFNP = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_4850,HCBBECJJIKK,StringLiteral_853,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM(BKFOLMBMFNP,JLNPKGGFFDD,(MethodInfo *)0x0);
    __this = PFLBGCPNEIM__OABMGIDBMKF(method_00);
    if (__this == (BOFEMGGNODC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    BOFEMGGNODC__GIMAJOGGBHM(__this,HBDNGIDONHG,LFHPEEKGNDO,AHDGNOJPPIB,(MethodInfo *)0x0);
  }
  return __this;
}

