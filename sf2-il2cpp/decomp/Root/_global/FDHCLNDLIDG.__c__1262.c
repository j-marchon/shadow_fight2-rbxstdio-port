// TypeDefIndex 1262
// Namespace: 
// [Serializable]
// private sealed class FDHCLNDLIDG.<>c
// Fields:
//   public static readonly FDHCLNDLIDG.<>c <>9; // 0x0

// ===== internal FDHCLNDLIDG ICLFIHGKJJH()  [RVA 0x314B834]
// FDHCLNDLIDG.<>c$$ICLFIHGKJJH @ RVA 0x314B834

FDHCLNDLIDG_o * FDHCLNDLIDG_<>c__ICLFIHGKJJH(FDHCLNDLIDG___c_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  undefined1 auVar1 [16];
  
  if ((DAT_045667bf & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667bf = 1;
    method = extraout_x1;
  }
  auVar1 = thunk_FUN_01bda818(FDHCLNDLIDG_TypeInfo,method);
  FDHCLNDLIDG___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== public void .ctor()  [RVA 0x314B884]
// FDHCLNDLIDG.<>c$$.ctor @ RVA 0x314B884

void FDHCLNDLIDG_<>c___ctor(FDHCLNDLIDG___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x314B88C]
// FDHCLNDLIDG.<>c$$.cctor @ RVA 0x314B88C

void FDHCLNDLIDG_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045667c0 & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_<>c_TypeInfo);
    DAT_045667c0 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FDHCLNDLIDG_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  FDHCLNDLIDG_<>c_TypeInfo->static_fields->__9 = (FDHCLNDLIDG___c_o *)__this;
  thunk_FUN_01c20e04(FDHCLNDLIDG_<>c_TypeInfo->static_fields,__this);
  return;
}

