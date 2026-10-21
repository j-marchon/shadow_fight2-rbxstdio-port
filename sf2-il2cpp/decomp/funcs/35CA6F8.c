// Core.Configs.Models.PacksConfig$$.ctor @ RVA 0x35CA6F8

void Core_Configs_Models_PacksConfig___ctor
               (Core_Configs_Models_PacksConfig_o *__this,
               System_Collections_Generic_IEnumerable_PackSettings__o *packs,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *__this_00;
  System_Action_T__o *CPECAEHDDDB;
  
  if ((DAT_04568f98 & 1) == 0) {
    FUN_01bab630(&System_Action<PackSettings>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<PackSettings>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_PackSettings>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_PackSettings>_TypeInfo);
    FUN_01bab630(&Method_Core_Configs_Models_PacksConfig_<>c__DisplayClass5_0_<_ctor>b__0__);
    FUN_01bab630(&Core_Configs_Models_PacksConfig_<>c__DisplayClass5_0_TypeInfo);
    DAT_04568f98 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)
           thunk_FUN_01bda818(Core_Configs_Models_PacksConfig_<>c__DisplayClass5_0_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  __this_00 = (Il2CppClass *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<string,_PackSettings>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_PackSettings>__ctor__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = __this_00;
    thunk_FUN_01c20e04(pIVar1,__this_00);
    if (packs != (System_Collections_Generic_IEnumerable_PackSettings__o *)0x0) {
      CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<PackSettings>_TypeInfo);
      System_Action<object>___ctor();
      DFPABHGJPJJ__NHDPECDJBGO<object>
                ((System_Collections_Generic_IEnumerable_T__o *)packs,CPECAEHDDDB,
                 Method_DFPABHGJPJJ_NHDPECDJBGO<PackSettings>__);
    }
    (__this->fields)._PacksByName_k__BackingField =
         (System_Collections_Generic_IReadOnlyDictionary_string__PackSettings__o *)pIVar1->klass;
    thunk_FUN_01c20e04(&__this->fields);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

