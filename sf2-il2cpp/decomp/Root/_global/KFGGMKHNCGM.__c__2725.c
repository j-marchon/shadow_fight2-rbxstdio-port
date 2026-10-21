// TypeDefIndex 2725
// Namespace: 
// [Serializable]
// private sealed class KFGGMKHNCGM.<>c
// Fields:
//   public static readonly KFGGMKHNCGM.<>c <>9; // 0x0
//   public static Comparison<KMJDCOABCCG> <>9__2_0; // 0x8

// ===== internal int EOOKNHCKOKI(KMJDCOABCCG a, KMJDCOABCCG b)  [RVA 0x33E0B08]
// KFGGMKHNCGM.<>c$$EOOKNHCKOKI @ RVA 0x33E0B08

int32_t KFGGMKHNCGM_<>c__EOOKNHCKOKI
                  (KFGGMKHNCGM___c_o *__this,KMJDCOABCCG_o *a,KMJDCOABCCG_o *b,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((a != (KMJDCOABCCG_o *)0x0) && (b != (KMJDCOABCCG_o *)0x0)) {
    iVar1 = System_Int32__CompareTo((int)a + 0x14,(b->fields).ADHFHEJFJPK,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33E0B30]
// KFGGMKHNCGM.<>c$$.ctor @ RVA 0x33E0B30

void KFGGMKHNCGM_<>c___ctor(KFGGMKHNCGM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x33E0B38]
// KFGGMKHNCGM.<>c$$.cctor @ RVA 0x33E0B38

void KFGGMKHNCGM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567e9a & 1) == 0) {
    FUN_01bab630(&KFGGMKHNCGM_<>c_TypeInfo);
    DAT_04567e9a = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KFGGMKHNCGM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KFGGMKHNCGM_<>c_TypeInfo->static_fields->__9 = (KFGGMKHNCGM___c_o *)__this;
  thunk_FUN_01c20e04(KFGGMKHNCGM_<>c_TypeInfo->static_fields,__this);
  return;
}

