// TypeDefIndex 2267
// Namespace: 
// [Serializable]
// private sealed class IOCCJDEBNHF.<>c
// Fields:
//   public static readonly IOCCJDEBNHF.<>c <>9; // 0x0
//   public static Comparison<KCLPNDAPADO> <>9__1_0; // 0x8

// ===== public void .ctor()  [RVA 0x33025DC]
// IOCCJDEBNHF.<>c$$.ctor @ RVA 0x33025DC

void IOCCJDEBNHF_<>c___ctor(IOCCJDEBNHF___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x33025E4]
// IOCCJDEBNHF.<>c$$.cctor @ RVA 0x33025E4

void IOCCJDEBNHF_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456772a & 1) == 0) {
    FUN_01bab630(&IOCCJDEBNHF_<>c_TypeInfo);
    DAT_0456772a = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IOCCJDEBNHF_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  IOCCJDEBNHF_<>c_TypeInfo->static_fields->__9 = (IOCCJDEBNHF___c_o *)__this;
  thunk_FUN_01c20e04(IOCCJDEBNHF_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal int AKJBDKKCCFP(KCLPNDAPADO trick1, KCLPNDAPADO trick2)  [RVA 0x330264C]
// IOCCJDEBNHF.<>c$$AKJBDKKCCFP @ RVA 0x330264C

int32_t IOCCJDEBNHF_<>c__AKJBDKKCCFP
                  (IOCCJDEBNHF___c_o *__this,KCLPNDAPADO_o *trick1,KCLPNDAPADO_o *trick2,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if ((trick1 != (KCLPNDAPADO_o *)0x0) && (trick2 != (KCLPNDAPADO_o *)0x0)) {
    iVar1 = System_Int32__CompareTo
                      ((int)trick1 + 0x30,(trick2->fields).GKAGCIBKONM,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

