// GKKKJLJFGBG$$.ctor @ RVA 0x3169AD4

void GKKKJLJFGBG___ctor(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_int__o **ppGVar1;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o **ppGVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045668dd & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<int>_TypeInfo);
    DAT_045668dd = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_int__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<int>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<int>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
  ppGVar1 = &(__this->fields).DFKIAOPJPCE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>__ctor__);
  ppGVar2 = &(__this->fields).LJDACDDNJOD;
  *ppGVar2 = __this_01;
  thunk_FUN_01c20e04(ppGVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

