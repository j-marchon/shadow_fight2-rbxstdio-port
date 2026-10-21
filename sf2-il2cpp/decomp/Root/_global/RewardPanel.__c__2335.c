// TypeDefIndex 2335
// Namespace: 
// [Serializable]
// private sealed class RewardPanel.<>c
// Fields:
//   public static readonly RewardPanel.<>c <>9; // 0x0
//   public static Func<IGPDCHBJAPD.AKGCHFPLJEC, BNKBGIIJNLF> <>9__6_0; // 0x8
//   public static Func<PIADCKMDDAK, bool> <>9__7_0; // 0x10
//   public static Func<PIADCKMDDAK, string> <>9__7_1; // 0x18
//   public static Func<PIADCKMDDAK, bool> <>9__7_2; // 0x20
//   public static Func<PIADCKMDDAK, string> <>9__7_3; // 0x28
//   public static Action<RewardPanelItem> <>9__10_0; // 0x30

// ===== internal string JGKOIBIAPPI(PIADCKMDDAK c)  [RVA 0x3322190]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$JGKOIBIAPPI @ RVA 0x3322190

System_String_o *
Nekki_SF2_GUI_Fight_RewardPanel_<>c__JGKOIBIAPPI
          (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,PIADCKMDDAK_o *c,MethodInfo *method)

{
  if (c != (PIADCKMDDAK_o *)0x0) {
    return (c->fields).GJNOEAKNMOG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void DBDJKMNAAKP(RewardPanelItem reward)  [RVA 0x33221A8]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$DBDJKMNAAKP @ RVA 0x33221A8

void Nekki_SF2_GUI_Fight_RewardPanel_<>c__DBDJKMNAAKP
               (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,
               Nekki_SF2_GUI_Fight_RewardPanelItem_o *reward,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 034221a8 to 035221ab has its CatchHandler @ 034221b4 */
                    /* try { // try from 034221ac to 035221af has its CatchHandler @ 034221b0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034221ac with catch @ 034221b0
                       try { // try from 034221b0 to 035221d3 has its CatchHandler @ 034220b4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034221a8 with catch @ 034221b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342217c with catch @ 034221b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03422154 with catch @ 034221bc
                        */
  if ((reward != (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)reward,(MethodInfo *)0x0),
     __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)0x0,
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal string KJADJCHPMIM(PIADCKMDDAK c)  [RVA 0x33221D4]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$KJADJCHPMIM @ RVA 0x33221D4

System_String_o *
Nekki_SF2_GUI_Fight_RewardPanel_<>c__KJADJCHPMIM
          (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,PIADCKMDDAK_o *c,MethodInfo *method)

{
                    /* try { // try from 034221d4 to 035221d7 has its CatchHandler @ 03422200 */
                    /* try { // try from 034221d8 to 0352220f has its CatchHandler @ 034220b4 */
  if (c != (PIADCKMDDAK_o *)0x0) {
    return (c->fields).GJNOEAKNMOG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool EGHJBDMDBBE(PIADCKMDDAK item)  [RVA 0x33221EC]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$EGHJBDMDBBE @ RVA 0x33221EC

bool Nekki_SF2_GUI_Fight_RewardPanel_<>c__EGHJBDMDBBE
               (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,PIADCKMDDAK_o *item,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
                    /* catch() { ... } // from try @ 034221d4 with catch @ 03422200 */
  if ((DAT_0456784e & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)FUN_01bab630(&StringLiteral_12304/*"Sphere"*/);
                    /* try { // try from 03422210 to 03522217 has its CatchHandler @ 0342222c */
    DAT_0456784e = 1;
  }
                    /* try { // try from 03422218 to 03522223 has its CatchHandler @ 034220b4 */
  if ((item != (PIADCKMDDAK_o *)0x0) &&
     (__this_00 = (item->fields).GJNOEAKNMOG, __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)0x0,
     __this_00 != (System_String_o *)0x0)) {
                    /* try { // try from 03422224 to 0352222b has its CatchHandler @ 0342222c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03422210 with catch @ 0342222c
                       catch(type#2 @ 00000000) { ... } // from try @ 03422224 with catch @ 0342222c
                        */
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_12304/*"Sphere"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool FHAKJHLHLLC(PIADCKMDDAK item)  [RVA 0x3322244]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$FHAKJHLHLLC @ RVA 0x3322244

bool Nekki_SF2_GUI_Fight_RewardPanel_<>c__FHAKJHLHLLC
               (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,PIADCKMDDAK_o *item,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((DAT_0456784f & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)FUN_01bab630(&StringLiteral_6544/*"Forge"*/);
    DAT_0456784f = 1;
  }
  if ((item != (PIADCKMDDAK_o *)0x0) &&
     (__this_00 = (item->fields).GJNOEAKNMOG, __this = (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)0x0,
     __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_6544/*"Forge"*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x332229C]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$.cctor @ RVA 0x332229C

void Nekki_SF2_GUI_Fight_RewardPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567850 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
    DAT_04567850 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields->__9 =
       (Nekki_SF2_GUI_Fight_RewardPanel___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Fight_RewardPanel_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal BNKBGIIJNLF HBJOIOKGNKP(IGPDCHBJAPD.AKGCHFPLJEC value)  [RVA 0x332230C]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$HBJOIOKGNKP @ RVA 0x332230C

BNKBGIIJNLF_o *
Nekki_SF2_GUI_Fight_RewardPanel_<>c__HBJOIOKGNKP
          (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,IGPDCHBJAPD_AKGCHFPLJEC_o *value,
          MethodInfo *method)

{
  if (value != (IGPDCHBJAPD_AKGCHFPLJEC_o *)0x0) {
    return (value->fields).MPNDFIPPOPA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3322304]
// Nekki.SF2.GUI.Fight.RewardPanel.<>c$$.ctor @ RVA 0x3322304

void Nekki_SF2_GUI_Fight_RewardPanel_<>c___ctor
               (Nekki_SF2_GUI_Fight_RewardPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

