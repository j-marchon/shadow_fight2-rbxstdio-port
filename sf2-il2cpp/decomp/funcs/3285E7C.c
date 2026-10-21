// OOMHDDBCBJP$$PEOJNPEINED @ RVA 0x3285E7C

void OOMHDDBCBJP__PEOJNPEINED(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  
  if ((DAT_045672b4 & 1) == 0) {
    FUN_01bab630(&Method_OOMHDDBCBJP_ECDBDFLNONG_DKGBGEHJIEO__);
    FUN_01bab630(&OOMHDDBCBJP_ECDBDFLNONG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Find__);
    FUN_01bab630(&System_Predicate<AFFHKININGD>_TypeInfo);
    DAT_045672b4 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OOMHDDBCBJP_ECDBDFLNONG_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
LAB_03385fa0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  *(undefined4 *)&__this_00[1].klass = 0;
  if ((__this->fields).KIHDFNGKPGN != 0) {
    do {
      __this_01 = (__this->fields).HDDNEKLMLMF;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<AFFHKININGD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_01 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_03385fa0;
      method_00 = Method_System_Collections_Generic_List<AFFHKININGD>_Find__;
      pIVar3 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          (MethodInfo_26E5414 *)
                          Method_System_Collections_Generic_List<AFFHKININGD>_Find__);
      if ((pIVar3 == (Il2CppObject *)0x0) &&
         (bVar2 = OOMHDDBCBJP__HLNIBCHNHNP(__this,*(int32_t *)&__this_00[1].klass,method_00), !bVar2
         )) {
        (*(__this->klass->vtable)._6_IOJIEDAEOBN.methodPtr)
                  (__this,(ulong)*(uint *)&__this_00[1].klass,
                   (__this->klass->vtable)._6_IOJIEDAEOBN.method);
      }
      iVar1 = *(int *)&__this_00[1].klass + 1;
      *(int *)&__this_00[1].klass = iVar1;
    } while (iVar1 < (int)(uint)(__this->fields).KIHDFNGKPGN);
  }
  return;
}

