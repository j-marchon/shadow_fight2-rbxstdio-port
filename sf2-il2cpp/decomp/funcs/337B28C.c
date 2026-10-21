// NIGMCJIMBHO$$CalculateSize @ RVA 0x337B28C

int32_t NIGMCJIMBHO__CalculateSize(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
                    /* try { // try from 0347b29c to 0357b29f has its CatchHandler @ 0347b6ec */
  if ((DAT_04567b8a & 1) == 0) {
                    /* try { // try from 0347b2ac to 0357b2b3 has its CatchHandler @ 0347b6f0 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567b8a = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).DKOBFIICAFM;
  if (pGVar2 != (Google_Protobuf_ByteString_o *)0x0) {
                    /* try { // try from 0347b2c4 to 0357b2c7 has its CatchHandler @ 0347b6d0 */
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar2,(MethodInfo *)0x0);
                    /* try { // try from 0347b2c8 to 0357b2d3 has its CatchHandler @ 0347b6dc */
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      pGVar2 = (__this->fields).DKOBFIICAFM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar2,(MethodInfo *)0x0);
      iVar3 = iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar1 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347b324 to 0357b33f has its CatchHandler @ 0347b6d8 */
  FUN_01bab8c8(0,method);
}

