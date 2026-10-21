// TypeDefIndex 914
// Namespace: 
// [Serializable]
// private sealed class EndFightContent.<>c
// Fields:
//   public static readonly EndFightContent.<>c <>9; // 0x0
//   public static Predicate<BNKBGIIJNLF> <>9__39_0; // 0x8

// ===== private static void .cctor()  [RVA 0x309CFAC]
// Nekki.SF2.GUI.Fight.EndFightContent.<>c$$.cctor @ RVA 0x309CFAC

void Nekki_SF2_GUI_Fight_EndFightContent_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566125 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo);
    DAT_04566125 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Fight_EndFightContent___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Fight_EndFightContent_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x309D014]
// Nekki.SF2.GUI.Fight.EndFightContent.<>c$$.ctor @ RVA 0x309D014

void Nekki_SF2_GUI_Fight_EndFightContent_<>c___ctor
               (Nekki_SF2_GUI_Fight_EndFightContent___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool COIHDLLGDLJ(BNKBGIIJNLF c)  [RVA 0x309D01C]
// Nekki.SF2.GUI.Fight.EndFightContent.<>c$$COIHDLLGDLJ @ RVA 0x309D01C

bool Nekki_SF2_GUI_Fight_EndFightContent_<>c__COIHDLLGDLJ
               (Nekki_SF2_GUI_Fight_EndFightContent___c_o *__this,BNKBGIIJNLF_o *c,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  HBNENINHPGF_o *pHVar2;
  
  if ((DAT_04566126 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_EndFightContent___c_o *)FUN_01bab630(&StringLiteral_6545/*"ForgeMaterial"*/);
    DAT_04566126 = 1;
  }
  if (((c != (BNKBGIIJNLF_o *)0x0) &&
      (pHVar2 = (c->fields)._GDNLFJIBAAI_k__BackingField, pHVar2 != (HBNENINHPGF_o *)0x0)) &&
     (__this_00 = (pHVar2->fields)._COIPKAKHDFP_k__BackingField,
     __this = (Nekki_SF2_GUI_Fight_EndFightContent___c_o *)0x0, __this_00 != (System_String_o *)0x0)
     ) {
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_6545/*"ForgeMaterial"*/,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

