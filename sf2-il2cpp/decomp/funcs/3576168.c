// Core.Network.ServerProvider$$EEJKIAEDLDO @ RVA 0x3576168

void Core_Network_ServerProvider__EEJKIAEDLDO
               (Core_Network_ServerProvider_o *__this,System_String_o *JHDEDPMNOOJ,
               System_String_o *CELOLGNMKCG,System_Action_bool__string__object__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF_00;
  
  if ((DAT_04568cae & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_DBAMNBNKJIG_OMGDDAHPMCB__);
    FUN_01bab630(&Core_Network_ServerProvider_DBAMNBNKJIG_TypeInfo);
    DAT_04568cae = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_DBAMNBNKJIG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)CELOLGNMKCG;
    thunk_FUN_01c20e04(__this_00 + 1,CELOLGNMKCG);
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)JHDEDPMNOOJ;
    thunk_FUN_01c20e04(__this_00 + 2,JHDEDPMNOOJ);
    __this_00[2].monitor = BLMFLPJJMPF;
    thunk_FUN_01c20e04(&__this_00[2].monitor,BLMFLPJJMPF);
    BLMFLPJJMPF_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

