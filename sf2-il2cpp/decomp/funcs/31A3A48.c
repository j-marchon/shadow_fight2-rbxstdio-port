// HGADMOBFBBF$$.cctor @ RVA 0x31A3A48

void HGADMOBFBBF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HGADMOBFBBF__o *__this;
  
  if ((DAT_04566af2 & 1) == 0) {
    FUN_01bab630(&System_Func<HGADMOBFBBF>_TypeInfo);
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HGADMOBFBBF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HGADMOBFBBF>_TypeInfo);
    FUN_01bab630(&Method_HGADMOBFBBF_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&HGADMOBFBBF_<>c_TypeInfo);
    DAT_04566af2 = 1;
  }
                    /* try { // try from 032a3aec to 033a3c6f has its CatchHandler @ 032a3aec
                       catch() { ... } // from try @ 032a3aec with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3cf0 with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3d58 with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3d84 with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3db4 with catch @ 032a3aec */
  if ((HGADMOBFBBF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HGADMOBFBBF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HGADMOBFBBF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HGADMOBFBBF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HGADMOBFBBF>__ctor__);
  HGADMOBFBBF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HGADMOBFBBF_TypeInfo->static_fields,__this);
  return;
}

