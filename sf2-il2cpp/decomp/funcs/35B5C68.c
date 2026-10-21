// FDJKKAFIEFB$$HCPLEOIKIEH @ RVA 0x35B5C68

bool FDJKKAFIEFB__HCPLEOIKIEH
               (FDJKKAFIEFB_o *__this,System_String_o *DDMGAEHAGMN,bool HBOEDCODABJ,bool BEPHNFAELEI
               ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  DBNEEHGBCJD_o *NFDKMBAGHPD;
  System_Collections_Generic_List_DBNEEHGBCJD__o *__this_01;
  
  if ((DAT_04568ebc & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_KGEIAOABALL_LFAIKJHPNDH__);
    FUN_01bab630(&FDJKKAFIEFB_KGEIAOABALL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
    FUN_01bab630(&System_Predicate<DBNEEHGBCJD>_TypeInfo);
    DAT_04568ebc = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDJKKAFIEFB_KGEIAOABALL_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)DDMGAEHAGMN;
    thunk_FUN_01c20e04(__this_00 + 1,DDMGAEHAGMN);
    __this_01 = (__this->fields).DIKCNPKCGJP;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<DBNEEHGBCJD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      NFDKMBAGHPD = (DBNEEHGBCJD_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_01,match,
                               Method_System_Collections_Generic_List<DBNEEHGBCJD>_Find__);
      bVar1 = FDJKKAFIEFB__HCPLEOIKIEH(__this,NFDKMBAGHPD,HBOEDCODABJ,BEPHNFAELEI,method);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

