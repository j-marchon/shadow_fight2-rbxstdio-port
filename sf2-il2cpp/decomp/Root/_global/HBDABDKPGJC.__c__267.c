// TypeDefIndex 267
// Namespace: 
// [Serializable]
// private sealed class HBDABDKPGJC.<>c
// Fields:
//   public static readonly HBDABDKPGJC.<>c <>9; // 0x0
//   public static Func<PackSettings, bool> <>9__2_0; // 0x8

// ===== internal bool GNLDILNGKHG(PackSettings pack)  [RVA 0x3230C08]
// HBDABDKPGJC.<>c$$GNLDILNGKHG @ RVA 0x3230C08

bool HBDABDKPGJC_<>c__GNLDILNGKHG
               (HBDABDKPGJC___c_o *__this,Core_Configs_Models_PackSettings_o *pack,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Core_Configs_Models_PackSettingsExtension__IsDownloaded(pack,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  bVar1 = Core_Configs_Models_PackSettingsExtension__CheckDownloadConditions(pack,(MethodInfo *)0x0)
  ;
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x3230C3C]
// HBDABDKPGJC.<>c$$.ctor @ RVA 0x3230C3C

void HBDABDKPGJC_<>c___ctor(HBDABDKPGJC___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x3230C44]
// HBDABDKPGJC.<>c$$.cctor @ RVA 0x3230C44

void HBDABDKPGJC_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566fda & 1) == 0) {
    FUN_01bab630(&HBDABDKPGJC_<>c_TypeInfo);
    DAT_04566fda = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(HBDABDKPGJC_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  HBDABDKPGJC_<>c_TypeInfo->static_fields->__9 = (HBDABDKPGJC___c_o *)__this;
  thunk_FUN_01c20e04(HBDABDKPGJC_<>c_TypeInfo->static_fields,__this);
  return;
}

