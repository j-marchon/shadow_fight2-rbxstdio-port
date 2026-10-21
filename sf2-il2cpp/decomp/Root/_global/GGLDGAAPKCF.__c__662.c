// TypeDefIndex 662
// Namespace: 
// [Serializable]
// private sealed class GGLDGAAPKCF.<>c
// Fields:
//   public static readonly GGLDGAAPKCF.<>c <>9; // 0x0
//   public static Func<int, string> <>9__31_0; // 0x8

// ===== private static void .cctor()  [RVA 0x302507C]
// GGLDGAAPKCF.<>c$$.cctor @ RVA 0x302507C

void GGLDGAAPKCF_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565c86 & 1) == 0) {
    FUN_01bab630(&GGLDGAAPKCF_<>c_TypeInfo);
    DAT_04565c86 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(GGLDGAAPKCF_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  GGLDGAAPKCF_<>c_TypeInfo->static_fields->__9 = (GGLDGAAPKCF___c_o *)__this;
  thunk_FUN_01c20e04(GGLDGAAPKCF_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x30250E4]
// GGLDGAAPKCF.<>c$$.ctor @ RVA 0x30250E4

void GGLDGAAPKCF_<>c___ctor(GGLDGAAPKCF___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal string JKELCOKFAKD(int id)  [RVA 0x30250EC]
// GGLDGAAPKCF.<>c$$JKELCOKFAKD @ RVA 0x30250EC

System_String_o *
GGLDGAAPKCF_<>c__JKELCOKFAKD(GGLDGAAPKCF___c_o *__this,int32_t id,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_4;
  
  local_4 = id;
  pSVar1 = System_Int32__ToString((int32_t)&local_4,(MethodInfo *)0x0);
  return pSVar1;
}

