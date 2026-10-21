// Core.Network.ServerProvider$$RestoreDump @ RVA 0x35795E4

void Core_Network_ServerProvider__RestoreDump
               (Core_Network_ServerProvider_o *__this,bool BJOGNFODLCH,
               System_Action_bool__JSONNode__object__o *GFNABKGEGJA,uint32_t MINHPKOPAIE,
               bool BKFIBHGAEMF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF;
  
  if ((DAT_04568c9a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo,BJOGNFODLCH,GFNABKGEGJA,MINHPKOPAIE,BKFIBHGAEMF);
    FUN_01bab630(&Method_Core_Network_ServerProvider_ICAEADBIINE_FEKMJGPAPJN__);
    FUN_01bab630(&Core_Network_ServerProvider_ICAEADBIINE_TypeInfo);
    DAT_04568c9a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_ICAEADBIINE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(bool *)&__this_00[1].klass = BJOGNFODLCH;
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)GFNABKGEGJA;
    thunk_FUN_01c20e04(__this_00 + 2,GFNABKGEGJA);
    BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

