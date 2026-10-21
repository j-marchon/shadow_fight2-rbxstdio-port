// TypeDefIndex 682
// Namespace: 
// [Serializable]
// private sealed class OJJLPLHNGBP.<>c
// Fields:
//   public static readonly OJJLPLHNGBP.<>c <>9; // 0x0
//   public static Func<ValueTuple<string, string>, string> <>9__3_0; // 0x8

// ===== internal string JFOKOCHPHMK(ValueTuple<string, string> h)  [RVA 0x30305B4]
// OJJLPLHNGBP.<>c$$JFOKOCHPHMK @ RVA 0x30305B4

System_String_o *
OJJLPLHNGBP_<>c__JFOKOCHPHMK
          (OJJLPLHNGBP___c_o *__this,System_ValueTuple_string__string__o h,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565cf8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    DAT_04565cf8 = 1;
  }
  pSVar1 = System_String__Concat(h.fields.Item1,StringLiteral_2086/*":"*/,h.fields.Item2,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3030610]
// OJJLPLHNGBP.<>c$$.cctor @ RVA 0x3030610

void OJJLPLHNGBP_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565cf9 & 1) == 0) {
    FUN_01bab630(&OJJLPLHNGBP_<>c_TypeInfo);
    DAT_04565cf9 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OJJLPLHNGBP_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  OJJLPLHNGBP_<>c_TypeInfo->static_fields->__9 = (OJJLPLHNGBP___c_o *)__this;
  thunk_FUN_01c20e04(OJJLPLHNGBP_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3030678]
// OJJLPLHNGBP.<>c$$.ctor @ RVA 0x3030678

void OJJLPLHNGBP_<>c___ctor(OJJLPLHNGBP___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

