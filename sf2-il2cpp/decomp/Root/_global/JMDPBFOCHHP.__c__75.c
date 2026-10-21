// TypeDefIndex 75
// Namespace: 
// [Serializable]
// private sealed class JMDPBFOCHHP.<>c
// Fields:
//   public static readonly JMDPBFOCHHP.<>c <>9; // 0x0
//   public static Func<ZipEntry, bool> <>9__113_0; // 0x8
//   public static Func<ZipEntry, bool> <>9__113_1; // 0x10

// ===== internal bool DGLOHKJKCOA(ZipEntry entry)  [RVA 0x2FFC1EC]
// JMDPBFOCHHP.<>c$$DGLOHKJKCOA @ RVA 0x2FFC1EC

bool JMDPBFOCHHP_<>c__DGLOHKJKCOA
               (JMDPBFOCHHP___c_o *__this,Ionic_Zip_ZipEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565ae5 & 1) == 0) {
    __this = (JMDPBFOCHHP___c_o *)FUN_01bab630(&StringLiteral_20411/*"raid_configs.zip.sha"*/);
    DAT_04565ae5 = 1;
  }
  if (entry != (Ionic_Zip_ZipEntry_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((entry->fields)._FileNameInArchive,StringLiteral_20411/*"raid_configs.zip.sha"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor()  [RVA 0x2FFC240]
// JMDPBFOCHHP.<>c$$.ctor @ RVA 0x2FFC240

void JMDPBFOCHHP_<>c___ctor(JMDPBFOCHHP___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x2FFC248]
// JMDPBFOCHHP.<>c$$.cctor @ RVA 0x2FFC248

void JMDPBFOCHHP_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565ae6 & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_<>c_TypeInfo);
    DAT_04565ae6 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(JMDPBFOCHHP_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  JMDPBFOCHHP_<>c_TypeInfo->static_fields->__9 = (JMDPBFOCHHP___c_o *)__this;
  thunk_FUN_01c20e04(JMDPBFOCHHP_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool BJDFMJMEIGJ(ZipEntry entry)  [RVA 0x2FFC2B0]
// JMDPBFOCHHP.<>c$$BJDFMJMEIGJ @ RVA 0x2FFC2B0

bool JMDPBFOCHHP_<>c__BJDFMJMEIGJ
               (JMDPBFOCHHP___c_o *__this,Ionic_Zip_ZipEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565ae7 & 1) == 0) {
    __this = (JMDPBFOCHHP___c_o *)FUN_01bab630(&StringLiteral_20410/*"raid_configs.zip.enc"*/);
    DAT_04565ae7 = 1;
  }
  if (entry != (Ionic_Zip_ZipEntry_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((entry->fields)._FileNameInArchive,StringLiteral_20410/*"raid_configs.zip.enc"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

