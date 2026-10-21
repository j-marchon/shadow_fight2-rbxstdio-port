// FDFGGHMGLIB$$BDIAOKOKLFD @ RVA 0x34CB1B8

void FDFGGHMGLIB__BDIAOKOKLFD(FDFGGHMGLIB_o *__this,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *name;
  MethodInfo *extraout_x1;
  Unity_Notifications_Android_AndroidNotificationChannel_o local_b0;
  System_String_o *local_80;
  System_String_o *pSStack_78;
  System_String_o *local_70;
  undefined8 uStack_68;
  System_Int64_array *local_60;
  int32_t iStack_58;
  undefined4 uStack_54;
  Unity_Notifications_Android_AndroidNotificationChannel_o local_50;
  
  if ((DAT_0456866e & 1) == 0) {
    FUN_01bab630(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456866e = 1;
    method = extraout_x1;
  }
  if ((__this->fields).MCPOMFEMFKO == false) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
    }
    id = UnityEngine_Application__get_productName((MethodInfo *)0x0);
    name = UnityEngine_Application__get_productName((MethodInfo *)0x0);
    local_50.fields._Importance_k__BackingField = 0;
    local_50.fields._CanBypassDnd_k__BackingField = false;
    local_50.fields._CanShowBadge_k__BackingField = false;
    local_50.fields._EnableLights_k__BackingField = false;
    local_50.fields._EnableVibration_k__BackingField = false;
    local_50.fields._Description_k__BackingField = (System_String_o *)0x0;
    local_50.fields._LockScreenVisibility_k__BackingField = 0;
    local_50.fields._44_4_ = 0;
    local_50.fields._VibrationPattern_k__BackingField = (System_Int64_array *)0x0;
    local_50.fields._Name_k__BackingField = (System_String_o *)0x0;
    local_50.fields._Id_k__BackingField = (System_String_o *)0x0;
    Unity_Notifications_Android_AndroidNotificationChannel___ctor
              (&local_50,id,name,name,3,(MethodInfo *)0x0);
    (__this->fields).LAMCKMPOAAA.fields._LockScreenVisibility_k__BackingField =
         local_50.fields._LockScreenVisibility_k__BackingField;
    *(undefined4 *)&(__this->fields).LAMCKMPOAAA.fields.field_0x2c = local_50.fields._44_4_;
    (__this->fields).LAMCKMPOAAA.fields._VibrationPattern_k__BackingField =
         local_50.fields._VibrationPattern_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._Importance_k__BackingField =
         local_50.fields._Importance_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._CanBypassDnd_k__BackingField =
         local_50.fields._CanBypassDnd_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._CanShowBadge_k__BackingField =
         local_50.fields._CanShowBadge_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._EnableLights_k__BackingField =
         local_50.fields._EnableLights_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._EnableVibration_k__BackingField =
         local_50.fields._EnableVibration_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._Description_k__BackingField =
         local_50.fields._Description_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._Name_k__BackingField =
         local_50.fields._Name_k__BackingField;
    (__this->fields).LAMCKMPOAAA.fields._Id_k__BackingField = local_50.fields._Id_k__BackingField;
    thunk_FUN_01c20e04(&(__this->fields).LAMCKMPOAAA,0);
    pSStack_78 = (__this->fields).LAMCKMPOAAA.fields._Name_k__BackingField;
    local_80 = (__this->fields).LAMCKMPOAAA.fields._Id_k__BackingField;
    iStack_58 = (__this->fields).LAMCKMPOAAA.fields._LockScreenVisibility_k__BackingField;
    uStack_54 = *(undefined4 *)&(__this->fields).LAMCKMPOAAA.fields.field_0x2c;
    local_60 = (__this->fields).LAMCKMPOAAA.fields._VibrationPattern_k__BackingField;
    uStack_68._0_4_ = (__this->fields).LAMCKMPOAAA.fields._Importance_k__BackingField;
    uStack_68._4_1_ = (__this->fields).LAMCKMPOAAA.fields._CanBypassDnd_k__BackingField;
    uStack_68._5_1_ = (__this->fields).LAMCKMPOAAA.fields._CanShowBadge_k__BackingField;
    uStack_68._6_1_ = (__this->fields).LAMCKMPOAAA.fields._EnableLights_k__BackingField;
    uStack_68._7_1_ = (__this->fields).LAMCKMPOAAA.fields._EnableVibration_k__BackingField;
    local_70 = (__this->fields).LAMCKMPOAAA.fields._Description_k__BackingField;
    if ((Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_b0.fields._Name_k__BackingField = pSStack_78;
    local_b0.fields._Id_k__BackingField = local_80;
    local_b0.fields._Importance_k__BackingField = (int32_t)uStack_68;
    local_b0.fields._CanBypassDnd_k__BackingField = uStack_68._4_1_;
    local_b0.fields._CanShowBadge_k__BackingField = uStack_68._5_1_;
    local_b0.fields._EnableLights_k__BackingField = uStack_68._6_1_;
    local_b0.fields._EnableVibration_k__BackingField = uStack_68._7_1_;
    local_b0.fields._Description_k__BackingField = local_70;
    local_b0.fields._LockScreenVisibility_k__BackingField = iStack_58;
    local_b0.fields._44_4_ = uStack_54;
    local_b0.fields._VibrationPattern_k__BackingField = local_60;
    Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel
              (&local_b0,(MethodInfo *)0x0);
    (__this->fields).MCPOMFEMFKO = true;
  }
  return;
}

