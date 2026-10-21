// OJEHKJHEBID$$.cctor @ RVA 0x34B6180

void OJEHKJHEBID___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OJEHKJHEBID__o *__this;
  Google_Protobuf_FieldCodec_MGDJPGGPDJI__o *pGVar1;
  Google_Protobuf_FieldCodec_NLFLMJPNOLF__o *pGVar2;
  Google_Protobuf_FieldCodec_MGDJPGGPDJI__o **ppGVar3;
  Google_Protobuf_FieldCodec_NLFLMJPNOLF__o **ppGVar4;
  
  if ((DAT_04568588 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<MGDJPGGPDJI>__);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<NLFLMJPNOLF>__);
    FUN_01bab630(&System_Func<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OJEHKJHEBID>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&Method_OJEHKJHEBID_<>c_COJHKMMKGPC__);
    FUN_01bab630(&OJEHKJHEBID_<>c_TypeInfo);
    DAT_04568588 = 1;
  }
  if ((OJEHKJHEBID_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OJEHKJHEBID>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OJEHKJHEBID__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OJEHKJHEBID>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OJEHKJHEBID>__ctor__);
  OJEHKJHEBID_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OJEHKJHEBID_TypeInfo->static_fields,__this);
  if ((MGDJPGGPDJI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035b62d8 to 036b63e3 has its CatchHandler @ 035b62d8
                       catch() { ... } // from try @ 035b62d8 with catch @ 035b62d8
                       catch() { ... } // from try @ 035b6458 with catch @ 035b62d8
                       catch() { ... } // from try @ 035b6488 with catch @ 035b62d8
                       catch() { ... } // from try @ 035b64bc with catch @ 035b62d8
                       catch() { ... } // from try @ 035b64ec with catch @ 035b62d8 */
  if (DAT_04567f76 == '\0') {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_04567f76 = '\x01';
  }
  if ((MGDJPGGPDJI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_MGDJPGGPDJI__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x3a,(Google_Protobuf_MessageParser_T__o *)
                           MGDJPGGPDJI_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<MGDJPGGPDJI>__);
  ppGVar3 = &OJEHKJHEBID_TypeInfo->static_fields->CCHHCINKGLK;
  *ppGVar3 = pGVar1;
  thunk_FUN_01c20e04(ppGVar3,pGVar1);
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567f78 == '\0') {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    DAT_04567f78 = '\x01';
  }
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = (Google_Protobuf_FieldCodec_NLFLMJPNOLF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x42,(Google_Protobuf_MessageParser_T__o *)
                           NLFLMJPNOLF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<NLFLMJPNOLF>__);
  ppGVar4 = &OJEHKJHEBID_TypeInfo->static_fields->ENELKKDEGPJ;
  *ppGVar4 = pGVar2;
  thunk_FUN_01c20e04(ppGVar4,pGVar2);
  return;
}

