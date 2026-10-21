// DBOOKMFPFNI$$.cctor @ RVA 0x34DB144

void DBOOKMFPFNI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DBOOKMFPFNI__o *__this;
  
  if ((DAT_0456870e & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    FUN_01bab630(&System_Func<DBOOKMFPFNI>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DBOOKMFPFNI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DBOOKMFPFNI>_TypeInfo);
    FUN_01bab630(&Method_DBOOKMFPFNI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&DBOOKMFPFNI_<>c_TypeInfo);
    DAT_0456870e = 1;
  }
  if ((DBOOKMFPFNI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DBOOKMFPFNI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DBOOKMFPFNI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DBOOKMFPFNI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DBOOKMFPFNI>__ctor__);
  DBOOKMFPFNI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DBOOKMFPFNI_TypeInfo->static_fields,__this);
  return;
}

