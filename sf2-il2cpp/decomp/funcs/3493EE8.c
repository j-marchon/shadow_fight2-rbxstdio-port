// FLBBKMOHIOG$$NAEOFHBNGEB @ RVA 0x3493EE8

Sfs2X_Entities_Data_SFSObject_o *
FLBBKMOHIOG__NAEOFHBNGEB(FLBBKMOHIOG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  Sfs2X_Entities_Data_SFSObject_o *__this_00;
  Google_Protobuf_WellKnownTypes_StringValue_o *__this_01;
  MethodInfo *method_00;
  Sfs2X_Entities_Data_SFSObject_o *local_28;
  
  if ((DAT_04568443 & 1) == 0) {
    FUN_01bab630(&Sfs2X_Entities_Data_SFSObject_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    DAT_04568443 = 1;
  }
  __this_00 = (Sfs2X_Entities_Data_SFSObject_o *)
              thunk_FUN_01bda818(Sfs2X_Entities_Data_SFSObject_TypeInfo);
  Sfs2X_Entities_Data_SFSObject___ctor(__this_00,(MethodInfo *)0x0);
  local_28 = __this_00;
  __this_01 = (Google_Protobuf_WellKnownTypes_StringValue_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
  Google_Protobuf_WellKnownTypes_StringValue___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Google_Protobuf_WellKnownTypes_StringValue_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Google_Protobuf_WellKnownTypes_StringValue__set_Value(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    FLBBKMOHIOG__IPIICMBKHLK(&local_28,(Google_Protobuf_IMessage_o *)__this_01,method_00);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

