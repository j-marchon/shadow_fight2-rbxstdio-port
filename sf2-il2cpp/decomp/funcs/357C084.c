// Core.Network.ServerProvider$$ReceiveWebhookBasedStoresPurchases @ RVA 0x357C084

void Core_Network_ServerProvider__ReceiveWebhookBasedStoresPurchases
               (Core_Network_ServerProvider_o *__this,bool ANIOGEGBPME,
               System_Action_bool__string__object__o *BLMFLPJJMPF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF_00;
  
  if ((DAT_04568caf & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_IDNAKPHHJGK_NBFPPMBCJMC__);
    FUN_01bab630(&Core_Network_ServerProvider_IDNAKPHHJGK_TypeInfo);
    DAT_04568caf = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_IDNAKPHHJGK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(bool *)&__this_00[1].monitor = ANIOGEGBPME;
    __this_00[2].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(__this_00 + 2,BLMFLPJJMPF);
    BLMFLPJJMPF_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

