// Core.Network.ServerProvider$$Login @ RVA 0x3575F4C

void Core_Network_ServerProvider__Login
               (Core_Network_ServerProvider_o *__this,
               System_Action_ServerProvider_DEBEPAKJMBK__o *ODJGKAPGNFF,
               System_Collections_Generic_Dictionary_string__string__o *DECKEOBBCMP,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF;
  
                    /* try { // try from 03675f68 to 03775f73 has its CatchHandler @ 03675608 */
                    /* try { // try from 03675f74 to 03775f7b has its CatchHandler @ 03675f7c */
  if ((DAT_04568c87 & 1) == 0) {
                    /* catch() { ... } // from try @ 03675f40 with catch @ 03675f7c
                       catch() { ... } // from try @ 03675f74 with catch @ 03675f7c */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_KIJCGGLKCJO_DFICFAGPMHF__);
    FUN_01bab630(&Core_Network_ServerProvider_KIJCGGLKCJO_TypeInfo);
    DAT_04568c87 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_KIJCGGLKCJO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)DECKEOBBCMP;
    thunk_FUN_01c20e04(__this_00 + 1,DECKEOBBCMP);
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)ODJGKAPGNFF;
    thunk_FUN_01c20e04(__this_00 + 2,ODJGKAPGNFF);
    BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

