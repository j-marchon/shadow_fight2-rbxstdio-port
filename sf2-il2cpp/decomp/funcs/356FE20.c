// NLDPAHFABGL$$CalculateSize @ RVA 0x356FE20

int32_t NLDPAHFABGL__CalculateSize(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long lVar3;
  PGICCMFLDPI_o *value;
  
                    /* try { // try from 0366fe20 to 0376fe2b has its CatchHandler @ 03672c98 */
  if ((DAT_04568c58 & 1) == 0) {
                    /* try { // try from 0366fe44 to 0376fe4f has its CatchHandler @ 03672e14 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568c58 = 1;
    method = extraout_x1;
  }
  lVar3 = (__this->fields).ADEIKPGDIPM;
  iVar2 = 0;
  if (lVar3 != 0) {
                    /* try { // try from 0366fe60 to 0376fe6f has its CatchHandler @ 0367325c */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
                    /* try { // try from 0366fe7c to 0376fe83 has its CatchHandler @ 03673054 */
    iVar2 = iVar1 + 1;
  }
  lVar3 = (__this->fields).IFDGNOKADMK;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366fe94 to 0376fe9b has its CatchHandler @ 03673050 */
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
                    /* try { // try from 0366fea8 to 0376feaf has its CatchHandler @ 0367304c */
    iVar2 = iVar2 + iVar1 + 1;
  }
  value = (__this->fields).MIINPPOCPCN;
  if (value != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366fec0 to 0376fec7 has its CatchHandler @ 03673048 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366fec8 to 0376fed7 has its CatchHandler @ 03673044 */
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0366fee8 to 0376feef has its CatchHandler @ 03673040 */
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}

