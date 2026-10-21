// TypeDefIndex 3045
// Namespace: 
// [Serializable]
// private sealed class BHNHMJNIAII.<>c
// Fields:
//   public static readonly BHNHMJNIAII.<>c <>9; // 0x0
//   public static Func<string, string> <>9__7_0; // 0x8

// ===== internal string IFIDCADMKDJ(string name)  [RVA 0x34B8FF8]
// BHNHMJNIAII.<>c$$IFIDCADMKDJ @ RVA 0x34B8FF8

System_String_o *
BHNHMJNIAII_<>c__IFIDCADMKDJ(BHNHMJNIAII___c_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (name != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(name,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34B9010]
// BHNHMJNIAII.<>c$$.ctor @ RVA 0x34B9010

void BHNHMJNIAII_<>c___ctor(BHNHMJNIAII___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x34B9018]
// BHNHMJNIAII.<>c$$.cctor @ RVA 0x34B9018

void BHNHMJNIAII_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045685aa & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_<>c_TypeInfo);
    DAT_045685aa = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BHNHMJNIAII_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  BHNHMJNIAII_<>c_TypeInfo->static_fields->__9 = (BHNHMJNIAII___c_o *)__this;
  thunk_FUN_01c20e04(BHNHMJNIAII_<>c_TypeInfo->static_fields,__this);
  return;
}

