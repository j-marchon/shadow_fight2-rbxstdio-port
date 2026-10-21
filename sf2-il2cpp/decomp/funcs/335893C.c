// PFDCJGIIPLB.HDIIAOLIPHF$$HandleHelpshiftEvent @ RVA 0x335893C

void PFDCJGIIPLB_HDIIAOLIPHF__HandleHelpshiftEvent
               (PFDCJGIIPLB_HDIIAOLIPHF_o *__this,System_String_o *ANIALDFEENL,
               System_Collections_Generic_Dictionary_string__object__o *OHNNFPGGEFK,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  UnityMainThreadDispatcher_o *__this_01;
  System_Action_o *PKKMGBOIDJD;
  
  if ((DAT_04567a49 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION_OGAHJPOMCJO__);
    FUN_01bab630(&PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION_TypeInfo);
    FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    DAT_04567a49 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PFDCJGIIPLB_HDIIAOLIPHF_PDBOGDHOION_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)ANIALDFEENL;
    thunk_FUN_01c20e04(__this_00 + 1,ANIALDFEENL);
    __this_00[1].monitor = OHNNFPGGEFK;
    thunk_FUN_01c20e04(&__this_00[1].monitor,OHNNFPGGEFK);
    if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = UnityMainThreadDispatcher__get_Current((MethodInfo *)0x0);
    PKKMGBOIDJD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_01 != (UnityMainThreadDispatcher_o *)0x0) {
      UnityMainThreadDispatcher__Enqueue(__this_01,PKKMGBOIDJD,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

