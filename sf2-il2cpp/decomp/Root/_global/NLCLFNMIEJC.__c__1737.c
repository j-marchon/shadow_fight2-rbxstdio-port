// TypeDefIndex 1737
// Namespace: 
// [Serializable]
// private sealed class NLCLFNMIEJC.<>c
// Fields:
//   public static readonly NLCLFNMIEJC.<>c <>9; // 0x0
//   public static Func<LocalDailyQuestInfo, int> <>9__0_0; // 0x8

// ===== private static void .cctor()  [RVA 0x31DC4CC]
// NLCLFNMIEJC.<>c$$.cctor @ RVA 0x31DC4CC

void NLCLFNMIEJC_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566d1a & 1) == 0) {
    FUN_01bab630(&NLCLFNMIEJC_<>c_TypeInfo);
    DAT_04566d1a = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NLCLFNMIEJC_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  NLCLFNMIEJC_<>c_TypeInfo->static_fields->__9 = (NLCLFNMIEJC___c_o *)__this;
  thunk_FUN_01c20e04(NLCLFNMIEJC_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x31DC534]
// NLCLFNMIEJC.<>c$$.ctor @ RVA 0x31DC534

void NLCLFNMIEJC_<>c___ctor(NLCLFNMIEJC___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal int ICINMCJLNIA(LocalDailyQuestInfo q)  [RVA 0x31DC53C]
// NLCLFNMIEJC.<>c$$ICINMCJLNIA @ RVA 0x31DC53C

int32_t NLCLFNMIEJC_<>c__ICINMCJLNIA
                  (NLCLFNMIEJC___c_o *__this,Core_Configs_Models_LocalDailyQuestInfo_o *q,
                  MethodInfo *method)

{
  if (q != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
    return (q->fields)._SequencePos_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

