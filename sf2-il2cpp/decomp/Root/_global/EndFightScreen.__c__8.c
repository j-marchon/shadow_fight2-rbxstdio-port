// TypeDefIndex 8
// Namespace: 
// [Serializable]
// private sealed class EndFightScreen.<>c
// Fields:
//   public static readonly EndFightScreen.<>c <>9; // 0x0
//   public static Predicate<IGPDCHBJAPD.AKGCHFPLJEC> <>9__23_0; // 0x8

// ===== public void .ctor()  [RVA 0x2FF0544]
// Nekki.SF2.GUI.Fight.EndFightScreen.<>c$$.ctor @ RVA 0x2FF0544

void Nekki_SF2_GUI_Fight_EndFightScreen_<>c___ctor
               (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x2FF054C]
// Nekki.SF2.GUI.Fight.EndFightScreen.<>c$$.cctor @ RVA 0x2FF054C

void Nekki_SF2_GUI_Fight_EndFightScreen_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* try { // try from 030f054c to 031f0557 has its CatchHandler @ 030f0778 */
                    /* try { // try from 030f0558 to 031f078f has its CatchHandler @ 030f03a4 */
  if ((DAT_04565a63 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo);
    DAT_04565a63 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Fight_EndFightScreen_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool NGIEDLBLNEJ(IGPDCHBJAPD.AKGCHFPLJEC item)  [RVA 0x2FF05B4]
// Nekki.SF2.GUI.Fight.EndFightScreen.<>c$$NGIEDLBLNEJ @ RVA 0x2FF05B4

bool Nekki_SF2_GUI_Fight_EndFightScreen_<>c__NGIEDLBLNEJ
               (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *__this,IGPDCHBJAPD_AKGCHFPLJEC_o *item,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  BNKBGIIJNLF_o *pBVar2;
  HBNENINHPGF_o *pHVar3;
  
  if ((DAT_04565a64 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *)FUN_01bab630(&StringLiteral_6545/*"ForgeMaterial"*/);
    DAT_04565a64 = 1;
  }
  if ((((item != (IGPDCHBJAPD_AKGCHFPLJEC_o *)0x0) &&
       (pBVar2 = (item->fields).MPNDFIPPOPA, pBVar2 != (BNKBGIIJNLF_o *)0x0)) &&
      (pHVar3 = (pBVar2->fields)._GDNLFJIBAAI_k__BackingField, pHVar3 != (HBNENINHPGF_o *)0x0)) &&
     (__this_00 = (pHVar3->fields)._COIPKAKHDFP_k__BackingField,
     __this = (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *)0x0, __this_00 != (System_String_o *)0x0))
  {
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_6545/*"ForgeMaterial"*/,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

