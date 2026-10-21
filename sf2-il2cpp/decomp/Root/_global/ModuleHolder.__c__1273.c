// TypeDefIndex 1273
// Namespace: 
// [Serializable]
// private sealed class ModuleHolder.<>c
// Fields:
//   public static readonly ModuleHolder.<>c <>9; // 0x0
//   public static Predicate<UIModule> <>9__35_0; // 0x8
//   public static Comparison<UIModule> <>9__39_0; // 0x10

// ===== public void .ctor()  [RVA 0x314E63C]
// Nekki.SF2.GUI.ModuleHolder.<>c$$.ctor @ RVA 0x314E63C

void Nekki_SF2_GUI_ModuleHolder_<>c___ctor
               (Nekki_SF2_GUI_ModuleHolder___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x314E644]
// Nekki.SF2.GUI.ModuleHolder.<>c$$.cctor @ RVA 0x314E644

void Nekki_SF2_GUI_ModuleHolder_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045667eb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo);
    DAT_045667eb = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_ModuleHolder___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool CMEEANHGFBE(UIModule p_item)  [RVA 0x314E6AC]
// Nekki.SF2.GUI.ModuleHolder.<>c$$CMEEANHGFBE @ RVA 0x314E6AC

bool Nekki_SF2_GUI_ModuleHolder_<>c__CMEEANHGFBE
               (Nekki_SF2_GUI_ModuleHolder___c_o *__this,Nekki_SF2_GUI_UIModule_o *p_item,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667ec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045667ec = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)p_item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== internal int EKLCINBJPAG(UIModule p_a, UIModule p_b)  [RVA 0x314E708]
// Nekki.SF2.GUI.ModuleHolder.<>c$$EKLCINBJPAG @ RVA 0x314E708

int32_t Nekki_SF2_GUI_ModuleHolder_<>c__EKLCINBJPAG
                  (Nekki_SF2_GUI_ModuleHolder___c_o *__this,Nekki_SF2_GUI_UIModule_o *p_a,
                  Nekki_SF2_GUI_UIModule_o *p_b,MethodInfo *method)

{
  int32_t iVar1;
  int32_t local_4;
  
  if (p_a == p_b) {
    iVar1 = 0;
  }
  else {
    if ((p_a == (Nekki_SF2_GUI_UIModule_o *)0x0) ||
       (local_4 = (p_a->fields)._Order, p_b == (Nekki_SF2_GUI_UIModule_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = System_Int32__CompareTo((int32_t)&local_4,(p_b->fields)._Order,(MethodInfo *)0x0);
  }
  return iVar1;
}

