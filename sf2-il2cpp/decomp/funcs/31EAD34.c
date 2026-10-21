// KGLCGFMIEGI$$CKJKNCFFBME @ RVA 0x31EAD34

void KGLCGFMIEGI__CKJKNCFFBME
               (KGLCGFMIEGI_o *__this,System_String_o *ANIALDFEENL,
               System_Collections_Generic_Dictionary_string__object__o *OKBIKHHKOEN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Facebook_Unity_InitDelegate_o *MEBBNHCIEOC;
  MethodInfo *method_00;
  void **ppvVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04566d96 & 1) == 0) {
    FUN_01bab630(&Method_KGLCGFMIEGI_DFPOOHIJALM_CHHOFMJCADJ__);
    FUN_01bab630(&KGLCGFMIEGI_DFPOOHIJALM_TypeInfo);
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    DAT_04566d96 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(KGLCGFMIEGI_DFPOOHIJALM_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(pIVar2 + 1,__this);
    ppvVar3 = &pIVar2[1].monitor;
    *ppvVar3 = ANIALDFEENL;
    thunk_FUN_01c20e04(ppvVar3,ANIALDFEENL);
    pIVar2 = pIVar2 + 2;
    pIVar2->klass = (Il2CppClass *)OKBIKHHKOEN;
    auVar4 = thunk_FUN_01c20e04(pIVar2,OKBIKHHKOEN);
    bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar4._0_8_,auVar4._8_8_);
    if (bVar1) {
      KGLCGFMIEGI__FIOINEAEEHP
                ((KGLCGFMIEGI_o *)0x1,*ppvVar3,
                 (System_Collections_Generic_Dictionary_string__object__o *)pIVar2->klass,method);
      return;
    }
    MEBBNHCIEOC = (Facebook_Unity_InitDelegate_o *)
                  thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
    method_00 = Method_KGLCGFMIEGI_DFPOOHIJALM_CHHOFMJCADJ__;
    Facebook_Unity_InitDelegate___ctor();
    KGLCGFMIEGI__GIMAJOGGBHM(__this,MEBBNHCIEOC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

