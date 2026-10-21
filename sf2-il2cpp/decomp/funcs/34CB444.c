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
    FUN_01bab630(&StringLiteral_16454);
    FUN_01bab630(&StringLiteral_21599);
    FUN_01bab630(&StringLiteral_22370);
    FUN_01bab630(&StringLiteral_4871);
    DAT_0456866f = 1;
  }
  memset(&UStack_e8,0,0x88);
  local_f0._dateData = 0;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_4871 == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_4871,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_4871;
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
            pSVar3 = System_String__Format(StringLiteral_22370,args,(MethodInfo *)0x0);
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
            UStack_e8.fields._SmallIcon_k__BackingField = StringLiteral_21599;
            thunk_FUN_01c20e04(&UStack_e8.fields._SmallIcon_k__BackingField);
            UStack_e8.fields._LargeIcon_k__BackingField = StringLiteral_16454;
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

