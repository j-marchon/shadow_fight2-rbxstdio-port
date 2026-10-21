// TypeDefIndex 1955
// Namespace: 
// [Serializable]
// private sealed class OCMLPCKBHPN.<>c
// Fields:
//   public static readonly OCMLPCKBHPN.<>c <>9; // 0x0
//   public static Action<CAAJMGKIPIE> <>9__119_0; // 0x8
//   public static Action<OANGEOLKMJG> <>9__119_3; // 0x10
//   public static Action<MGNDHCBAPEN<string, List<OANGEOLKMJG>>> <>9__119_1; // 0x18
//   public static Action<OANGEOLKMJG> <>9__119_2; // 0x20

// ===== internal void BMBFAMGHJDO(CAAJMGKIPIE x)  [RVA 0x3280474]
// OCMLPCKBHPN.<>c$$BMBFAMGHJDO @ RVA 0x3280474

void OCMLPCKBHPN_<>c__BMBFAMGHJDO(OCMLPCKBHPN___c_o *__this,CAAJMGKIPIE_o *x,MethodInfo *method)

{
                    /* try { // try from 03380474 to 0348049b has its CatchHandler @ 03380200 */
  if (x != (CAAJMGKIPIE_o *)0x0) {
    CAAJMGKIPIE__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void NLIGBCPEFHN(MGNDHCBAPEN<string, List<OANGEOLKMJG>> x)  [RVA 0x328048C]
// OCMLPCKBHPN.<>c$$NLIGBCPEFHN @ RVA 0x328048C

void OCMLPCKBHPN_<>c__NLIGBCPEFHN
               (OCMLPCKBHPN___c_o *__this,MGNDHCBAPEN_string__List_OANGEOLKMJG___o *x,
               MethodInfo *method)

{
  System_Action_OANGEOLKMJG__o **ppSVar1;
  System_Collections_Generic_List_OANGEOLKMJG__o *__this_00;
  System_Action_OANGEOLKMJG__o *action;
  
                    /* catch() { ... } // from try @ 03380470 with catch @ 03380494 */
                    /* try { // try from 0338049c to 034804a3 has its CatchHandler @ 033804b8 */
                    /* try { // try from 033804a4 to 034804af has its CatchHandler @ 03380200 */
  if ((DAT_04567288 & 1) == 0) {
                    /* try { // try from 033804b0 to 034804b7 has its CatchHandler @ 033804b8 */
    FUN_01bab630(&System_Action<OANGEOLKMJG>_TypeInfo);
                    /* catch() { ... } // from try @ 03380444 with catch @ 033804b8
                       catch() { ... } // from try @ 0338049c with catch @ 033804b8
                       catch() { ... } // from try @ 033804b0 with catch @ 033804b8 */
                    /* try { // try from 033804bc to 034805bf has its CatchHandler @ 033804bc
                       catch() { ... } // from try @ 033804bc with catch @ 033804bc
                       catch() { ... } // from try @ 033805dc with catch @ 033804bc
                       catch() { ... } // from try @ 0338067c with catch @ 033804bc
                       catch() { ... } // from try @ 033806ac with catch @ 033804bc
                       catch() { ... } // from try @ 033806dc with catch @ 033804bc
                       catch() { ... } // from try @ 03380714 with catch @ 033804bc
                       catch() { ... } // from try @ 03380730 with catch @ 033804bc
                       catch() { ... } // from try @ 03380760 with catch @ 033804bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<OANGEOLKMJG>_ForEach__);
    FUN_01bab630(&Method_OCMLPCKBHPN_<>c_FPKIFMACGLG__);
    __this = (OCMLPCKBHPN___c_o *)FUN_01bab630(&OCMLPCKBHPN_<>c_TypeInfo);
    DAT_04567288 = 1;
  }
  if (x != (MGNDHCBAPEN_string__List_OANGEOLKMJG___o *)0x0) {
    __this_00 = (x->fields).DOKHHBGJICA;
    if ((OCMLPCKBHPN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = OCMLPCKBHPN_<>c_TypeInfo->static_fields->__9__119_3;
    __this = (OCMLPCKBHPN___c_o *)OCMLPCKBHPN_<>c_TypeInfo;
    if (action == (System_Action_OANGEOLKMJG__o *)0x0) {
      if ((OCMLPCKBHPN_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_OANGEOLKMJG__o *)
               thunk_FUN_01bda818(System_Action<OANGEOLKMJG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &OCMLPCKBHPN_<>c_TypeInfo->static_fields->__9__119_3;
      *ppSVar1 = action;
      __this = (OCMLPCKBHPN___c_o *)thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_00 != (System_Collections_Generic_List_OANGEOLKMJG__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<OANGEOLKMJG>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x3280594]
// OCMLPCKBHPN.<>c$$.cctor @ RVA 0x3280594

void OCMLPCKBHPN_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567289 & 1) == 0) {
    FUN_01bab630(&OCMLPCKBHPN_<>c_TypeInfo);
                    /* try { // try from 033805c0 to 034805c7 has its CatchHandler @ 03380714 */
    DAT_04567289 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(OCMLPCKBHPN_<>c_TypeInfo);
                    /* try { // try from 033805d4 to 034805db has its CatchHandler @ 033806bc */
  System_Object___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 033805dc to 0348065f has its CatchHandler @ 033804bc */
  OCMLPCKBHPN_<>c_TypeInfo->static_fields->__9 = (OCMLPCKBHPN___c_o *)__this;
  thunk_FUN_01c20e04(OCMLPCKBHPN_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x32805FC]
// OCMLPCKBHPN.<>c$$.ctor @ RVA 0x32805FC

void OCMLPCKBHPN_<>c___ctor(OCMLPCKBHPN___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void NJOPCEMKOLC(OANGEOLKMJG x)  [RVA 0x3280604]
// OCMLPCKBHPN.<>c$$NJOPCEMKOLC @ RVA 0x3280604

void OCMLPCKBHPN_<>c__NJOPCEMKOLC(OCMLPCKBHPN___c_o *__this,OANGEOLKMJG_o *x,MethodInfo *method)

{
  if (x != (OANGEOLKMJG_o *)0x0) {
    OANGEOLKMJG__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void FPKIFMACGLG(OANGEOLKMJG c)  [RVA 0x328061C]
// OCMLPCKBHPN.<>c$$FPKIFMACGLG @ RVA 0x328061C

void OCMLPCKBHPN_<>c__FPKIFMACGLG(OCMLPCKBHPN___c_o *__this,OANGEOLKMJG_o *c,MethodInfo *method)

{
  if (c != (OANGEOLKMJG_o *)0x0) {
    OANGEOLKMJG__RandomizeObscuredVars(c,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

