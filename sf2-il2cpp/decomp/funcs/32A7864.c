// NLFLMJPNOLF$$.ctor @ RVA 0x32A7864

void NLFLMJPNOLF___ctor(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o **ppGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033a7864 to 034a789f has its CatchHandler @ 033a7b28 */
  if ((DAT_0456740f & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<long>_TypeInfo);
                    /* try { // try from 033a78ac to 034a78af has its CatchHandler @ 033a7b1c */
    DAT_0456740f = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_long__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<long>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<long>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
  ppGVar1 = &(__this->fields).MABPCBMOECE;
  *ppGVar1 = __this_00;
                    /* try { // try from 033a78cc to 034a78f7 has its CatchHandler @ 033a7b18 */
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

