// AADKBCFCLKK$$.ctor @ RVA 0x34398D8

void AADKBCFCLKK___ctor(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681ba & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_TypeInfo);
    DAT_045681ba = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>__ctor__);
  ppGVar1 = &(__this->fields).MPAIPMANDEO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
                    /* try { // try from 03539958 to 0363997f has its CatchHandler @ 03539f08 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

