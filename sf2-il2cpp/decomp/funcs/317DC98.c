// ICBMOMGINFH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x317DC98

Google_Protobuf_Reflection_MessageDescriptor_o *
ICBMOMGINFH__pb__Google_Protobuf_IMessage_get_Descriptor(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  ICBMOMGINFH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0327dc98 to 0337f9d7 has its CatchHandler @ 0327dc98
                       catch() { ... } // from try @ 0327dc98 with catch @ 0327dc98
                       catch() { ... } // from try @ 0327fa7c with catch @ 0327dc98
                       catch() { ... } // from try @ 0327ff50 with catch @ 0327dc98
                       catch() { ... } // from try @ 032801a4 with catch @ 0327dc98
                       catch() { ... } // from try @ 03280338 with catch @ 0327dc98
                       catch() { ... } // from try @ 0328034c with catch @ 0327dc98
                       catch() { ... } // from try @ 03280424 with catch @ 0327dc98
                       catch() { ... } // from try @ 032804cc with catch @ 0327dc98
                       catch() { ... } // from try @ 03280568 with catch @ 0327dc98 */
  if ((DAT_0456699a & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_0456699a = 1;
    method = extraout_x1;
  }
  method_00 = ICBMOMGINFH_TypeInfo;
  if ((ICBMOMGINFH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ICBMOMGINFH_c *)thunk_FUN_01ba7564(ICBMOMGINFH_TypeInfo,method);
  }
  pGVar1 = ICBMOMGINFH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

