// OMFJHNMDIBF$$.cctor @ RVA 0x343F380

void OMFJHNMDIBF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OMFJHNMDIBF__o *__this;
  Google_Protobuf_FieldCodec_Nullable_T___o *pGVar1;
  Google_Protobuf_FieldCodec_Nullable_int___o **ppGVar2;
  
  if ((DAT_04568209 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForStructWrapper<int>__);
    FUN_01bab630(&System_Func<OMFJHNMDIBF>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OMFJHNMDIBF>__ctor__);
                    /* try { // try from 0353f3d0 to 0363f3db has its CatchHandler @ 0353f504 */
    FUN_01bab630(&Google_Protobuf_MessageParser<OMFJHNMDIBF>_TypeInfo);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&Method_OMFJHNMDIBF_<>c_BAAJBPDPFGC__);
                    /* try { // try from 0353f3f0 to 0363f3fb has its CatchHandler @ 0353f4f0 */
    FUN_01bab630(&OMFJHNMDIBF_<>c_TypeInfo);
    DAT_04568209 = 1;
  }
                    /* try { // try from 0353f404 to 0363f47b has its CatchHandler @ 0353f50c */
  if ((OMFJHNMDIBF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OMFJHNMDIBF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OMFJHNMDIBF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OMFJHNMDIBF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OMFJHNMDIBF>__ctor__);
                    /* try { // try from 0353f48c to 0363f497 has its CatchHandler @ 0353f510 */
  OMFJHNMDIBF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OMFJHNMDIBF_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForStructWrapper<int>
                     (10,Method_Google_Protobuf_FieldCodec_ForStructWrapper<int>__);
                    /* try { // try from 0353f4ac to 0363f4b3 has its CatchHandler @ 0353f5cc */
  ppGVar2 = &OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
  *ppGVar2 = (Google_Protobuf_FieldCodec_Nullable_int___o *)pGVar1;
                    /* try { // try from 0353f4bc to 0363f4bf has its CatchHandler @ 0353f4f8 */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
                    /* try { // try from 0353f4c4 to 0363f4c7 has its CatchHandler @ 0353f4f4 */
  pGVar1 = Google_Protobuf_FieldCodec__ForStructWrapper<int>
                     (0x22,Method_Google_Protobuf_FieldCodec_ForStructWrapper<int>__);
                    /* try { // try from 0353f4cc to 0363f4cf has its CatchHandler @ 0353f4fc */
                    /* try { // try from 0353f4d4 to 0363f4df has its CatchHandler @ 0353f500 */
  ppGVar2 = &OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
                    /* try { // try from 0353f4e4 to 0363f4e7 has its CatchHandler @ 0353f4fc */
  *ppGVar2 = (Google_Protobuf_FieldCodec_Nullable_int___o *)pGVar1;
                    /* try { // try from 0353f4e8 to 0363f52b has its CatchHandler @ 0353f0b0 */
                    /* catch() { ... } // from try @ 0353f354 with catch @ 0353f4ec */
                    /* catch() { ... } // from try @ 0353f3f0 with catch @ 0353f4f0 */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

