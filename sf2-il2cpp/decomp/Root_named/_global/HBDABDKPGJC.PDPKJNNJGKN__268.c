// TypeDefIndex 268
// Namespace: 
// [CompilerGenerated]
// private sealed class HBDABDKPGJC.PDPKJNNJGKN
// Fields:
//   public PackType packType; // 0x10

// ===== internal bool GBHDFOCDJJK(PackSettings pack)  [RVA 0x3230CAC]
// HBDABDKPGJC.PDPKJNNJGKN$$GBHDFOCDJJK @ RVA 0x3230CAC

bool HBDABDKPGJC_PDPKJNNJGKN__GBHDFOCDJJK
               (HBDABDKPGJC_PDPKJNNJGKN_o *__this,Core_Configs_Models_PackSettings_o *pack,
               MethodInfo *method)

{
  bool bVar1;
  
  if (pack == (Core_Configs_Models_PackSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (((pack->fields)._Type_k__BackingField == (__this->fields).packType) &&
     (bVar1 = Core_Configs_Models_PackSettingsExtension__IsDownloaded(pack,(MethodInfo *)0x0),
     !bVar1)) {
    bVar1 = Core_Configs_Models_PackSettingsExtension__CheckDownloadConditions
                      (pack,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x3230BD0]
// HBDABDKPGJC.PDPKJNNJGKN$$.ctor @ RVA 0x3230BD0

void HBDABDKPGJC_PDPKJNNJGKN___ctor(HBDABDKPGJC_PDPKJNNJGKN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

