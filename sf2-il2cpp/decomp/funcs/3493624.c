// FLBBKMOHIOG$$IPIICMBKHLK @ RVA 0x3493624

void FLBBKMOHIOG__IPIICMBKHLK
               (Sfs2X_Entities_Data_SFSObject_o **CFJOHIDMOJG,
               Google_Protobuf_IMessage_o *IMMNELPBGIF,MethodInfo *method)

{
  System_Byte_array *buf;
  Sfs2X_Util_ByteArray_o *__this;
  MethodInfo *method_00;
  Sfs2X_Entities_Data_SFSObject_o *__this_00;
  
  if ((DAT_04568442 & 1) == 0) {
    FUN_01bab630(&Sfs2X_Util_ByteArray_TypeInfo);
    FUN_01bab630(&StringLiteral_16576);
    DAT_04568442 = 1;
  }
  __this_00 = *CFJOHIDMOJG;
  buf = Google_Protobuf_MessageExtensions__ToByteArray(IMMNELPBGIF,(MethodInfo *)0x0);
  __this = (Sfs2X_Util_ByteArray_o *)thunk_FUN_01bda818(Sfs2X_Util_ByteArray_TypeInfo);
  Sfs2X_Util_ByteArray___ctor(__this,buf,(MethodInfo *)0x0);
  if (__this_00 != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    Sfs2X_Entities_Data_SFSObject__PutByteArray
              (__this_00,StringLiteral_16576,__this,(MethodInfo *)0x0);
    FLBBKMOHIOG__IIHFIAGNGOJ(CFJOHIDMOJG,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

