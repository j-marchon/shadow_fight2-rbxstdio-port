// Core.Configs.Models.PacksConfig.<>c__DisplayClass5_0$$<.ctor>b__0 @ RVA 0x35CA844

void Core_Configs_Models_PacksConfig_<>c__DisplayClass5_0__<_ctor>b__0
               (Core_Configs_Models_PacksConfig___c__DisplayClass5_0_o *__this,
               Core_Configs_Models_PackSettings_o *pack,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568f99 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_PackSettings>_set_Item__);
    DAT_04568f99 = 1;
  }
  if ((pack != (Core_Configs_Models_PackSettings_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).packsByName,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_00,(Il2CppObject *)(pack->fields)._Name_k__BackingField,(Il2CppObject *)pack,
               Method_System_Collections_Generic_Dictionary<string,_PackSettings>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

