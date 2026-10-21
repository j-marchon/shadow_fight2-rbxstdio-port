// FLBBKMOHIOG$$BHHEHDLFMDN @ RVA 0x3493E44

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__BHHEHDLFMDN(FLBBKMOHIOG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  Sfs2X_Entities_Data_SFSObject_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_01;
  Sfs2X_Entities_Data_SFSObject_o *local_28;
  
  if ((DAT_04568441 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    DAT_04568441 = 1;
  }
  __this_00 = (Sfs2X_Entities_Data_SFSObject_o *)
              thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
  Sfs2X_Entities_Data_SFSObject___ctor(__this_00,(MethodInfo *)0x0);
  local_28 = __this_00;
  __this_01 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_01->fields).value_ = CJNHFNHJHPE;
    FLBBKMOHIOG__IPIICMBKHLK(&local_28,(Google_Protobuf_IMessage_o *)__this_01,method);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

