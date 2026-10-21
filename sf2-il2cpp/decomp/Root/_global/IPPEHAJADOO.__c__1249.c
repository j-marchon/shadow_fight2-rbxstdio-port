// TypeDefIndex 1249
// Namespace: 
// [Serializable]
// private sealed class IPPEHAJADOO.<>c
// Fields:
//   public static readonly IPPEHAJADOO.<>c <>9; // 0x0
//   public static Predicate<IPPEHAJADOO.GHFEMFCMBEJ> <>9__31_0; // 0x8

// ===== internal bool BGPBDFCDLIF(IPPEHAJADOO.GHFEMFCMBEJ x)  [RVA 0x3143568]
// IPPEHAJADOO.<>c$$BGPBDFCDLIF @ RVA 0x3143568

bool IPPEHAJADOO_<>c__BGPBDFCDLIF
               (IPPEHAJADOO___c_o *__this,IPPEHAJADOO_GHFEMFCMBEJ_o *x,MethodInfo *method)

{
  if (x != (IPPEHAJADOO_GHFEMFCMBEJ_o *)0x0) {
    IPPEHAJADOO_GHFEMFCMBEJ__LLCONNGHGKD(x,(MethodInfo *)x);
    return (x->fields).COJOJNLJBDO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x314358C]
// IPPEHAJADOO.<>c$$.ctor @ RVA 0x314358C

void IPPEHAJADOO_<>c___ctor(IPPEHAJADOO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x3143594]
// IPPEHAJADOO.<>c$$.cctor @ RVA 0x3143594

void IPPEHAJADOO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566768 & 1) == 0) {
    FUN_01bab630(&IPPEHAJADOO_<>c_TypeInfo);
    DAT_04566768 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IPPEHAJADOO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  IPPEHAJADOO_<>c_TypeInfo->static_fields->__9 = (IPPEHAJADOO___c_o *)__this;
  thunk_FUN_01c20e04(IPPEHAJADOO_<>c_TypeInfo->static_fields,__this);
  return;
}

