// TypeDefIndex 731
// Namespace: Nekki.SF2.Core.Utils.LoaderScreen.Config
// [Serializable]
// public class LoaderConfig
// Fields:
//   public Dictionary<string, SpritesPreset> SpritesPresets; // 0x10
//   public Dictionary<string, string> TexturePaths; // 0x18

// ===== public void .ctor()  [RVA 0x3046BB8]
// Nekki.SF2.Core.Utils.LoaderScreen.Config.LoaderConfig$$.ctor @ RVA 0x3046BB8

void Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig___ctor
               (Nekki_SF2_Core_Utils_LoaderScreen_Config_LoaderConfig_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565de0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_SpritesPreset>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_SpritesPreset>_TypeInfo);
                    /* try { // try from 03146c20 to 03246c47 has its CatchHandler @ 03146cdc */
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    DAT_04565de0 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_SpritesPreset>_TypeInfo,
                              method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_SpritesPreset>__ctor__);
                    /* try { // try from 03146c48 to 03246caf has its CatchHandler @ 031469c8 */
  (__this->fields).SpritesPresets =
       (System_Collections_Generic_Dictionary_string__SpritesPreset__o *)pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  ppSVar2 = &(__this->fields).TexturePaths;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

