// KGLCGFMIEGI$$NPODDNIHKBO @ RVA 0x31EB4C0

void KGLCGFMIEGI__NPODDNIHKBO(KGLCGFMIEGI_o *__this,LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  Facebook_Unity_InitDelegate_o *MEBBNHCIEOC;
  MethodInfo *method_00;
  void **ppvVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04566d9b & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_JJAOIBKKJJO_DFICFAGPMHF__);
    FUN_01bab630(&KGLCGFMIEGI_JJAOIBKKJJO_TypeInfo);
    DAT_04566d9b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_JJAOIBKKJJO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = NCMNKCDJPAA;
    auVar3 = thunk_FUN_01c20e04(ppvVar2,NCMNKCDJPAA);
    bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar3._0_8_,auVar3._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__JHOAGFPCIPM(__this,*ppvVar2,method);
      return;
    }
    MEBBNHCIEOC = (Facebook_Unity_InitDelegate_o *)
                  thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
    method_00 = Method_KGLCGFMIEGI_JJAOIBKKJJO_DFICFAGPMHF__;
    Facebook_Unity_InitDelegate___ctor();
    KGLCGFMIEGI__GIMAJOGGBHM(__this,MEBBNHCIEOC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

