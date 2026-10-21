// GKKKJLJFGBG$$.ctor @ RVA 0x3169E6C

void GKKKJLJFGBG___ctor(GKKKJLJFGBG_o *__this,GKKKJLJFGBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_045668e8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
    DAT_045668e8 = 1;
    method_00 = extraout_x1;
  }
  GKKKJLJFGBG___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (GKKKJLJFGBG_o *)0x0) &&
     (__this_00 = (IBKIPBJJCPG->fields).DFKIAOPJPCE,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0)) {
    pGVar1 = Google_Protobuf_Collections_RepeatedField<int>__Clone
                       (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
    (__this->fields).DFKIAOPJPCE = (Google_Protobuf_Collections_RepeatedField_int__o *)pGVar1;
    thunk_FUN_01c20e04();
    pGVar2 = (IBKIPBJJCPG->fields).LJDACDDNJOD;
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      pGVar2 = (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                          Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Clone__);
      (__this->fields).LJDACDDNJOD = pGVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

