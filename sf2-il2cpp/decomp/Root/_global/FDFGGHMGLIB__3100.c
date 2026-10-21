// TypeDefIndex 3100
// Namespace: 
// public sealed class FDFGGHMGLIB : LNADBMOHMKN, IDisposable
// Fields:
//   private bool MCPOMFEMFKO; // 0x10
//   private AndroidNotificationChannel LAMCKMPOAAA; // 0x18

// ===== public void Dispose()  [RVA 0x34CB118]
// FDFGGHMGLIB$$Dispose @ RVA 0x34CB118

void FDFGGHMGLIB__Dispose(FDFGGHMGLIB_o *__this,MethodInfo *method)

{
  if ((DAT_0456866a & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_0456866a = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void GIMAJOGGBHM()  [RVA 0x34CB164]
// FDFGGHMGLIB$$GIMAJOGGBHM @ RVA 0x34CB164

void FDFGGHMGLIB__GIMAJOGGBHM(FDFGGHMGLIB_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_0456866b & 1) == 0) {
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_0456866b = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  FDFGGHMGLIB__BDIAOKOKLFD(__this,method_00);
  return;
}


// ===== public void JHDKCCOBBED(int KKJPPDNKGAI)  [RVA 0x34CB2D0]
// FDFGGHMGLIB$$JHDKCCOBBED @ RVA 0x34CB2D0

void FDFGGHMGLIB__JHDKCCOBBED(FDFGGHMGLIB_o *__this,int32_t KKJPPDNKGAI,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  int32_t local_44;
  
  if ((DAT_0456866c & 1) == 0) {
    FUN_01bab630(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_3858/*"CancelNotification"*/);
    FUN_01bab630(&StringLiteral_22369/*"{0}:  id='{1}'"*/);
    DAT_0456866c = 1;
  }
  local_44 = KKJPPDNKGAI;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
  JLNPKGGFFDD = System_String__Format(StringLiteral_22369/*"{0}:  id='{1}'"*/,StringLiteral_3858/*"CancelNotification"*/,arg1,(MethodInfo *)0x0)
  ;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  if ((Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification
            (KKJPPDNKGAI,(MethodInfo *)0x0);
  return;
}


// ===== public void DCIFPFIPGFD()  [RVA 0x34CB3BC]
// FDFGGHMGLIB$$DCIFPFIPGFD @ RVA 0x34CB3BC

void FDFGGHMGLIB__DCIFPFIPGFD(FDFGGHMGLIB_o *__this,MethodInfo *method)

{
  if ((DAT_0456866d & 1) == 0) {
    FUN_01bab630(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    FUN_01bab630(&StringLiteral_3857/*"CancelAllNotifications"*/);
    DAT_0456866d = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_3857/*"CancelAllNotifications"*/,(MethodInfo *)0x0);
  if ((Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllNotifications((MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x34CB43C]
// FDFGGHMGLIB$$.ctor @ RVA 0x34CB43C

void FDFGGHMGLIB___ctor(FDFGGHMGLIB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void BDIAOKOKLFD()  [RVA 0x34CB1B8]
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


// ===== public void NFMANKNGJLM(int KKJPPDNKGAI, string NDNGGHKKMEJ, string HFOIODFEKCH, long FBHEGGHGADE)  [RVA 0x34CB444]
// FDFGGHMGLIB$$NFMANKNGJLM @ RVA 0x34CB444

void FDFGGHMGLIB__NFMANKNGJLM
               (FDFGGHMGLIB_o *__this,int32_t KKJPPDNKGAI,System_String_o *NDNGGHKKMEJ,
               System_String_o *HFOIODFEKCH,int64_t FBHEGGHGADE,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_DateTime_o fireTime;
  undefined8 uVar4;
  Unity_Notifications_Android_AndroidNotification_o UStack_210;
  undefined1 auStack_188 [136];
  int64_t local_100;
  int32_t local_f4;
  System_DateTime_Fields local_f0;
  Unity_Notifications_Android_AndroidNotification_o UStack_e8;
  
  if ((DAT_0456866f & 1) == 0) {
    FUN_01bab630(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_16454/*"app_icon"*/);
    FUN_01bab630(&StringLiteral_21599/*"tray_icon"*/);
    FUN_01bab630(&StringLiteral_22370/*"{0}:  id='{1}', title='{2}', message='{3}', delaySeconds='{4}'"*/);
    FUN_01bab630(&StringLiteral_4871/*"CreateNotification"*/);
    DAT_0456866f = 1;
  }
  memset(&UStack_e8,0,0x88);
  local_f0._dateData = 0;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_4871/*"CreateNotification"*/ == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_4871/*"CreateNotification"*/,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_4871/*"CreateNotification"*/;
    if (lVar1 == 0) goto LAB_035cb7a8;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    local_f4 = KKJPPDNKGAI;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_f4);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_035cb7a8:
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      if ((NDNGGHKKMEJ != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(NDNGGHKKMEJ,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) goto LAB_035cb7a8;
                    /* try { // try from 035cb5cc to 036cb7c3 has its CatchHandler @ 035cb5cc
                       catch() { ... } // from try @ 035cb5cc with catch @ 035cb5cc
                       catch() { ... } // from try @ 035cba2c with catch @ 035cb5cc
                       catch() { ... } // from try @ 035cba48 with catch @ 035cb5cc
                       catch() { ... } // from try @ 035cbb54 with catch @ 035cb5cc
                       catch() { ... } // from try @ 035cbb5c with catch @ 035cb5cc
                       catch() { ... } // from try @ 035cbc68 with catch @ 035cb5cc */
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)NDNGGHKKMEJ;
        thunk_FUN_01c20e04(args->m_Items + 2,NDNGGHKKMEJ);
        if ((HFOIODFEKCH != (System_String_o *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(HFOIODFEKCH,(((args->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_035cb7a8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)HFOIODFEKCH;
          thunk_FUN_01c20e04(args->m_Items + 3,HFOIODFEKCH);
          local_100 = FBHEGGHGADE;
          pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_100);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0
             )) goto LAB_035cb7a8;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar2;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar2);
            pSVar3 = System_String__Format(StringLiteral_22370/*"{0}:  id='{1}', title='{2}', message='{3}', delaySeconds='{4}'"*/,args,(MethodInfo *)0x0);
            KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
            if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            local_f0._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
            fireTime = System_DateTime__AddSeconds
                                 ((System_DateTime_o)&local_f0,(double)FBHEGGHGADE,(MethodInfo *)0x0
                                 );
            Unity_Notifications_Android_AndroidNotification___ctor
                      (&UStack_e8,NDNGGHKKMEJ,HFOIODFEKCH,fireTime,(MethodInfo *)0x0);
            UStack_e8.fields._Style_k__BackingField = 3;
            UStack_e8.fields._ShouldAutoCancel_k__BackingField = true;
            Unity_Notifications_Android_AndroidNotification__set_ShowInForeground
                      (&UStack_e8,false,(MethodInfo *)0x0);
            UStack_e8.fields._SmallIcon_k__BackingField = StringLiteral_21599/*"tray_icon"*/;
            thunk_FUN_01c20e04(&UStack_e8.fields._SmallIcon_k__BackingField);
            UStack_e8.fields._LargeIcon_k__BackingField = StringLiteral_16454/*"app_icon"*/;
            thunk_FUN_01c20e04(&UStack_e8.fields._LargeIcon_k__BackingField);
            memcpy(auStack_188,&UStack_e8,0x88);
            pSVar3 = (__this->fields).LAMCKMPOAAA.fields._Id_k__BackingField;
            if ((Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2).cctor_finished
                == 0) {
              thunk_FUN_01ba7564();
            }
            memcpy(&UStack_210,auStack_188,0x88);
            Unity_Notifications_Android_AndroidNotificationCenter__SendNotificationWithExplicitID
                      (&UStack_210,pSVar3,KKJPPDNKGAI,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

