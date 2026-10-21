// TypeDefIndex 1990
// Namespace: 
// [Serializable]
// private sealed class HIJGJNFACPG.<>c
// Fields:
//   public static readonly HIJGJNFACPG.<>c <>9; // 0x0
//   public static Action<AJNNHGGLGIF> <>9__6_0; // 0x8

// ===== internal void NBNIOBMFCOB(AJNNHGGLGIF x)  [RVA 0x3291FA4]
// HIJGJNFACPG.<>c$$NBNIOBMFCOB @ RVA 0x3291FA4

void HIJGJNFACPG_<>c__NBNIOBMFCOB(HIJGJNFACPG___c_o *__this,AJNNHGGLGIF_o *x,MethodInfo *method)

{
  if (x != (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03391fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(x->klass->vtable)._11_RandomizeObscuredVars.methodPtr)
              (x,(x->klass->vtable)._11_RandomizeObscuredVars.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3291FC8]
// HIJGJNFACPG.<>c$$.ctor @ RVA 0x3291FC8

void HIJGJNFACPG_<>c___ctor(HIJGJNFACPG___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x3291FD0]
// HIJGJNFACPG.<>c$$.cctor @ RVA 0x3291FD0

void HIJGJNFACPG_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456732e & 1) == 0) {
    FUN_01bab630(&HIJGJNFACPG_<>c_TypeInfo);
    DAT_0456732e = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(HIJGJNFACPG_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  HIJGJNFACPG_<>c_TypeInfo->static_fields->__9 = (HIJGJNFACPG___c_o *)__this;
  thunk_FUN_01c20e04(HIJGJNFACPG_<>c_TypeInfo->static_fields,__this);
  return;
}

