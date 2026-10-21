// GKKKJLJFGBG$$MergeFrom @ RVA 0x3169A24

void GKKKJLJFGBG__MergeFrom(GKKKJLJFGBG_o *__this,GKKKJLJFGBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  GKKKJLJFGBG_Fields *pGVar2;
  
  if ((DAT_045668dc & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    DAT_045668dc = 1;
  }
  if (IBKIPBJJCPG != (GKKKJLJFGBG_o *)0x0) {
    __this_00 = (__this->fields).DFKIAOPJPCE;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<int>__Add
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).DFKIAOPJPCE,
                 Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
      __this_01 = (__this->fields).LJDACDDNJOD;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LJDACDDNJOD,
                   Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Add__);
        pGVar2 = &__this->fields;
        pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                           (pGVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0)
        ;
        pGVar2->CKFPENBPNML = pGVar1;
        thunk_FUN_01c20e04(pGVar2,pGVar1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

