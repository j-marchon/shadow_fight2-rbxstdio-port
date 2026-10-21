// DLOALGNBPNL$$.ctor @ RVA 0x3233CCC

void DLOALGNBPNL___ctor(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o **ppGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03333ccc to 03433cd7 has its CatchHandler @ 03333d6c */
                    /* try { // try from 03333cd8 to 03433d5f has its CatchHandler @ 03333bfc */
  if ((DAT_04567000 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_TypeInfo);
    DAT_04567000 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

