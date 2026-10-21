// OJKCDJCBOBL$$CalculateSize @ RVA 0x35C2CB0

int32_t OJKCDJCBOBL__CalculateSize(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
                    /* try { // try from 036c2cc0 to 037c2ccf has its CatchHandler @ 036c2ce0 */
  if ((DAT_04568f4a & 1) == 0) {
                    /* try { // try from 036c2cd0 to 037c2cf7 has its CatchHandler @ 036c2b60 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2c80 with catch @ 036c2cd4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2c30 with catch @ 036c2cd8
                        */
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2cc0 with catch @ 036c2ce0
                        */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    DAT_04568f4a = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).OHMDCKEDOGH;
                    /* try { // try from 036c2cf8 to 037c2cfb has its CatchHandler @ 036c2d1c */
                    /* try { // try from 036c2cfc to 037c2d23 has its CatchHandler @ 036c2b60 */
  if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OJKCDJCBOBL_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* catch() { ... } // from try @ 036c2cf8 with catch @ 036c2d1c */
                    /* try { // try from 036c2d24 to 037c2d2b has its CatchHandler @ 036c2d40 */
    iVar1 = Google_Protobuf_Collections_RepeatedField<long>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       OJKCDJCBOBL_TypeInfo->static_fields->NIKPLHDPOJB,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 036c2d2c to 037c2d37 has its CatchHandler @ 036c2b60 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 036c2d38 to 037c2d3f has its CatchHandler @ 036c2d40 */
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c2d24 with catch @ 036c2d40
                       catch(type#2 @ 00000000) { ... } // from try @ 036c2d38 with catch @ 036c2d40
                        */
      iVar1 = iVar2 + iVar1;
    }
                    /* try { // try from 036c2d44 to 037c2def has its CatchHandler @ 036c2d44
                       catch() { ... } // from try @ 036c2d44 with catch @ 036c2d44
                       catch() { ... } // from try @ 036c2e0c with catch @ 036c2d44
                       catch() { ... } // from try @ 036c2e64 with catch @ 036c2d44
                       catch() { ... } // from try @ 036c2ea4 with catch @ 036c2d44 */
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

