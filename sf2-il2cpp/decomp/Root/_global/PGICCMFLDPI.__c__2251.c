// TypeDefIndex 2251
// Namespace: 
// [Serializable]
// private sealed class PGICCMFLDPI.<>c
// Fields:
//   public static readonly PGICCMFLDPI.<>c <>9; // 0x0

// ===== internal PGICCMFLDPI ICLFIHGKJJH()  [RVA 0x32FD6DC]
// PGICCMFLDPI.<>c$$ICLFIHGKJJH @ RVA 0x32FD6DC

PGICCMFLDPI_o * PGICCMFLDPI_<>c__ICLFIHGKJJH(PGICCMFLDPI___c_o *__this,MethodInfo *method)

{
  PGICCMFLDPI_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676fd & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
                    /* try { // try from 033fd704 to 034fd72f has its CatchHandler @ 033fd978 */
    DAT_045676fd = 1;
    method = extraout_x1;
  }
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x32FD730]
// PGICCMFLDPI.<>c$$.cctor @ RVA 0x32FD730

void PGICCMFLDPI_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045676fe & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_<>c_TypeInfo);
    DAT_045676fe = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(PGICCMFLDPI_<>c_TypeInfo);
                    /* try { // try from 033fd76c to 034fd773 has its CatchHandler @ 033fd96c */
  System_Object___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 033fd778 to 034fd77f has its CatchHandler @ 033fd968 */
  PGICCMFLDPI_<>c_TypeInfo->static_fields->__9 = (PGICCMFLDPI___c_o *)__this;
                    /* try { // try from 033fd784 to 034fd78b has its CatchHandler @ 033fd960 */
                    /* try { // try from 033fd794 to 034fd7bf has its CatchHandler @ 033fd974 */
  thunk_FUN_01c20e04(PGICCMFLDPI_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x32FD798]
// PGICCMFLDPI.<>c$$.ctor @ RVA 0x32FD798

void PGICCMFLDPI_<>c___ctor(PGICCMFLDPI___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

