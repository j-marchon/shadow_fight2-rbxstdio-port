// TypeDefIndex 3040
// Namespace: 
// [Serializable]
// private sealed class KLPJOKOFLJD.EDDJLFOOBCI.<>c
// Fields:
//   public static readonly KLPJOKOFLJD.EDDJLFOOBCI.<>c <>9; // 0x0
//   public static Func<int, byte, int> <>9__1_0; // 0x8

// ===== public void .ctor()  [RVA 0x34B7E80]
// KLPJOKOFLJD.EDDJLFOOBCI.<>c$$.ctor @ RVA 0x34B7E80

void KLPJOKOFLJD_EDDJLFOOBCI_<>c___ctor(KLPJOKOFLJD_EDDJLFOOBCI___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x34B7E88]
// KLPJOKOFLJD.EDDJLFOOBCI.<>c$$.cctor @ RVA 0x34B7E88

void KLPJOKOFLJD_EDDJLFOOBCI_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045685a3 & 1) == 0) {
    FUN_01bab630(&KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo);
    DAT_045685a3 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo->static_fields->__9 = (KLPJOKOFLJD_EDDJLFOOBCI___c_o *)__this
  ;
  thunk_FUN_01c20e04(KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal int BEBLEDHIPKL(int current, byte cur)  [RVA 0x34B7EF0]
// KLPJOKOFLJD.EDDJLFOOBCI.<>c$$BEBLEDHIPKL @ RVA 0x34B7EF0

int32_t KLPJOKOFLJD_EDDJLFOOBCI_<>c__BEBLEDHIPKL
                  (KLPJOKOFLJD_EDDJLFOOBCI___c_o *__this,int32_t current,uint8_t cur,
                  MethodInfo *method)

{
  return current + (uint)cur;
}

