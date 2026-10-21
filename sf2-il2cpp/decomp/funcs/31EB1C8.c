// KGLCGFMIEGI$$JHOAGFPCIPM @ RVA 0x31EB1C8

void KGLCGFMIEGI__JHOAGFPCIPM(KGLCGFMIEGI_o *__this,LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Facebook_Unity_FacebookDelegate_ILoginResult__o *callback;
  void **ppvVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04566d99 & 1) == 0) {
    FUN_01bab630(&Method_KGLCGFMIEGI_CDHBBIJMDPK_JKBGOLFFIFC__);
    FUN_01bab630(&KGLCGFMIEGI_CDHBBIJMDPK_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&Facebook_Unity_FacebookDelegate<ILoginResult>_TypeInfo);
    FUN_01bab630(&StringLiteral_8617);
    DAT_04566d99 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_CDHBBIJMDPK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = NCMNKCDJPAA;
    auVar3 = thunk_FUN_01c20e04(ppvVar2,NCMNKCDJPAA);
    bVar1 = KGLCGFMIEGI__EDBFDLIIHGI(auVar3._0_8_,auVar3._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__ENFBBKEOLCL(__this,*ppvVar2,method);
      return;
    }
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8617,(MethodInfo *)0x0);
    callback = (Facebook_Unity_FacebookDelegate_ILoginResult__o *)
               thunk_FUN_01bda818(Facebook_Unity_FacebookDelegate<ILoginResult>_TypeInfo);
    Facebook_Unity_FacebookDelegate<object>___ctor();
    if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Facebook_Unity_FB__LogInWithReadPermissions
              ((System_Collections_Generic_IEnumerable_string__o *)0x0,callback,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

