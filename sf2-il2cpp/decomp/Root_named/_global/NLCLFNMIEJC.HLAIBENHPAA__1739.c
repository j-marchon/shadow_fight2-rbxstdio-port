// TypeDefIndex 1739
// Namespace: 
// [CompilerGenerated]
// private sealed class NLCLFNMIEJC.HLAIBENHPAA
// Fields:
//   public LocalDailyConfig config; // 0x10

// ===== internal void BILDNJMJBGL(OPHDIHJPHDE d)  [RVA 0x31DC63C]
// NLCLFNMIEJC.HLAIBENHPAA$$BILDNJMJBGL @ RVA 0x31DC63C

void NLCLFNMIEJC_HLAIBENHPAA__BILDNJMJBGL
               (NLCLFNMIEJC_HLAIBENHPAA_o *__this,OPHDIHJPHDE_o *d,MethodInfo *method)

{
  Core_Configs_Models_LocalDailyQuestInfo_o *DKMMBMBMJBO;
  
  if (d != (OPHDIHJPHDE_o *)0x0) {
    DKMMBMBMJBO = Core_Configs_Models_LocalDailyConfigExtension__GetLocalDailyQuestInfoById
                            ((__this->fields).config,(d->fields)._MDAJFAPLLOH_k__BackingField,
                             (MethodInfo *)0x0);
    OPHDIHJPHDE__NOPJKPNLKNA(d,DKMMBMBMJBO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31DC0AC]
// NLCLFNMIEJC.HLAIBENHPAA$$.ctor @ RVA 0x31DC0AC

void NLCLFNMIEJC_HLAIBENHPAA___ctor(NLCLFNMIEJC_HLAIBENHPAA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

