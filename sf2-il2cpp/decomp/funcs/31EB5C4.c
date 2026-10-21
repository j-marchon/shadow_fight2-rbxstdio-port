// KGLCGFMIEGI$$BDMBCINIFFB @ RVA 0x31EB5C4

void KGLCGFMIEGI__BDMBCINIFFB
               (KGLCGFMIEGI_o *__this,float IDPMJOKDHNP,System_String_o *OAOLCGAIILM,
               System_Collections_Generic_Dictionary_string__object__o *OKBIKHHKOEN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Facebook_Unity_InitDelegate_o *MEBBNHCIEOC;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04566d9d & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_JHIOKJAHDND_HBGOIPILCJC__);
    FUN_01bab630(&KGLCGFMIEGI_JHIOKJAHDND_TypeInfo);
    DAT_04566d9d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_JHIOKJAHDND_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(float *)&__this_00[1].monitor = IDPMJOKDHNP;
    __this_00[2].klass = (Il2CppClass *)OAOLCGAIILM;
    thunk_FUN_01c20e04(__this_00 + 2,OAOLCGAIILM);
    __this_00[2].monitor = OKBIKHHKOEN;
    auVar2 = thunk_FUN_01c20e04(&__this_00[2].monitor,OKBIKHHKOEN);
    bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar2._0_8_,auVar2._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__LLMHKMEEMMH
                ((KGLCGFMIEGI_o *)0x1,*(float *)&__this_00[1].monitor,
                 (System_String_o *)__this_00[2].klass,__this_00[2].monitor,method);
      return;
    }
    MEBBNHCIEOC = (Facebook_Unity_InitDelegate_o *)
                  thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
    method_00 = Method_KGLCGFMIEGI_JHIOKJAHDND_HBGOIPILCJC__;
    Facebook_Unity_InitDelegate___ctor();
    KGLCGFMIEGI__GIMAJOGGBHM(__this,MEBBNHCIEOC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

