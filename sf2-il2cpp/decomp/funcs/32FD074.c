// PGICCMFLDPI$$.cctor @ RVA 0x32FD074

void PGICCMFLDPI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_PGICCMFLDPI__o *__this;
  
                    /* try { // try from 033fd08c to 034fd203 has its CatchHandler @ 033fd08c
                       catch() { ... } // from try @ 033fd08c with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd224 with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd33c with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd368 with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd3a8 with catch @ 033fd08c */
  if ((DAT_045676f5 & 1) == 0) {
    FUN_01bab630(&System_Func<PGICCMFLDPI>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<PGICCMFLDPI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<PGICCMFLDPI>_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_PGICCMFLDPI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&PGICCMFLDPI_<>c_TypeInfo);
    DAT_045676f5 = 1;
  }
  if ((PGICCMFLDPI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PGICCMFLDPI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_PGICCMFLDPI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<PGICCMFLDPI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<PGICCMFLDPI>__ctor__);
  PGICCMFLDPI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(PGICCMFLDPI_TypeInfo->static_fields,__this);
  return;
}

