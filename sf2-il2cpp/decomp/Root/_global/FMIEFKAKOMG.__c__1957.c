// TypeDefIndex 1957
// Namespace: 
// [Serializable]
// private sealed class FMIEFKAKOMG.<>c
// Fields:
//   public static readonly FMIEFKAKOMG.<>c <>9; // 0x0

// ===== internal FMIEFKAKOMG AFJKCJDOFEL()  [RVA 0x3280F50]
// FMIEFKAKOMG.<>c$$AFJKCJDOFEL @ RVA 0x3280F50

FMIEFKAKOMG_o * FMIEFKAKOMG_<>c__AFJKCJDOFEL(FMIEFKAKOMG___c_o *__this,MethodInfo *method)

{
  FMIEFKAKOMG_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567294 & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
    DAT_04567294 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03380f84 to 03480fb7 has its CatchHandler @ 03381050 */
  __this_00 = (FMIEFKAKOMG_o *)thunk_FUN_01bda818(FMIEFKAKOMG_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x3280FA4]
// FMIEFKAKOMG.<>c$$.cctor @ RVA 0x3280FA4

void FMIEFKAKOMG_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* catch() { ... } // from try @ 03380b00 with catch @ 03380fb8
                       try { // try from 03380fb8 to 03480fc7 has its CatchHandler @ 03380878 */
  if ((DAT_04567295 & 1) == 0) {
                    /* try { // try from 03380fc8 to 03480fcb has its CatchHandler @ 03380fdc */
    FUN_01bab630(&FMIEFKAKOMG_<>c_TypeInfo);
    DAT_04567295 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FMIEFKAKOMG_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 03380fc8 with catch @ 03380fdc */
  System_Object___ctor(__this,(MethodInfo *)0x0);
  FMIEFKAKOMG_<>c_TypeInfo->static_fields->__9 = (FMIEFKAKOMG___c_o *)__this;
  thunk_FUN_01c20e04(FMIEFKAKOMG_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x328100C]
// FMIEFKAKOMG.<>c$$.ctor @ RVA 0x328100C

void FMIEFKAKOMG_<>c___ctor(FMIEFKAKOMG___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

