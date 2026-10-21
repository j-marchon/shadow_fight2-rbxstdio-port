// FDFGGHMGLIB$$JHDKCCOBBED @ RVA 0x34CB2D0

void FDFGGHMGLIB__JHDKCCOBBED(FDFGGHMGLIB_o *__this,int32_t KKJPPDNKGAI,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  int32_t local_44;
  
  if ((DAT_0456866c & 1) == 0) {
    FUN_01bab630(&Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_3858);
    FUN_01bab630(&StringLiteral_22369);
    DAT_0456866c = 1;
  }
  local_44 = KKJPPDNKGAI;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
  JLNPKGGFFDD = System_String__Format(StringLiteral_22369,StringLiteral_3858,arg1,(MethodInfo *)0x0)
  ;
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  if ((Unity_Notifications_Android_AndroidNotificationCenter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelNotification
            (KKJPPDNKGAI,(MethodInfo *)0x0);
  return;
}

