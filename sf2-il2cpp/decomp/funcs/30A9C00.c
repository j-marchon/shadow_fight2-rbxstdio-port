// HCKHJECBIJC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30A9C00

Google_Protobuf_Reflection_MessageDescriptor_o *
HCKHJECBIJC__pb__Google_Protobuf_IMessage_get_Descriptor(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  HCKHJECBIJC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031a9c04 to 032a9c87 has its CatchHandler @ 031a997c */
  if ((DAT_04566193 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566193 = 1;
    method = extraout_x1;
  }
  method_00 = HCKHJECBIJC_TypeInfo;
  if ((HCKHJECBIJC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HCKHJECBIJC_c *)thunk_FUN_01ba7564(HCKHJECBIJC_TypeInfo,method);
  }
  pGVar1 = HCKHJECBIJC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

