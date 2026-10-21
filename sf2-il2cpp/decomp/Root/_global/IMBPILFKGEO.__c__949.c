// TypeDefIndex 949
// Namespace: 
// [Serializable]
// private sealed class IMBPILFKGEO.<>c
// Fields:
//   public static readonly IMBPILFKGEO.<>c <>9; // 0x0

// ===== internal IMBPILFKGEO AFJKCJDOFEL()  [RVA 0x30ABF28]
// IMBPILFKGEO.<>c$$AFJKCJDOFEL @ RVA 0x30ABF28

IMBPILFKGEO_o * IMBPILFKGEO_<>c__AFJKCJDOFEL(IMBPILFKGEO___c_o *__this,MethodInfo *method)

{
  IMBPILFKGEO_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045661a6 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_045661a6 = 1;
    method = extraout_x1;
  }
  __this_00 = (IMBPILFKGEO_o *)thunk_FUN_01bda818(IMBPILFKGEO_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x30ABF7C]
// IMBPILFKGEO.<>c$$.cctor @ RVA 0x30ABF7C

void IMBPILFKGEO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045661a7 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_<>c_TypeInfo);
    DAT_045661a7 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IMBPILFKGEO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  IMBPILFKGEO_<>c_TypeInfo->static_fields->__9 = (IMBPILFKGEO___c_o *)__this;
  thunk_FUN_01c20e04(IMBPILFKGEO_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x30ABFE4]
// IMBPILFKGEO.<>c$$.ctor @ RVA 0x30ABFE4

void IMBPILFKGEO_<>c___ctor(IMBPILFKGEO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

