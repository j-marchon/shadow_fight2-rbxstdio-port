// MPFCDEPCALP$$IOKPGFFEMCE @ RVA 0x30364D8

void MPFCDEPCALP__IOKPGFFEMCE(MPFCDEPCALP_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04565d45 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 03136500 to 03236507 has its CatchHandler @ 03136618 */
    FUN_01bab630(&Method_MPFCDEPCALP_IOKPGFFEMCE__);
    DAT_04565d45 = 1;
  }
                    /* try { // try from 03136518 to 03236523 has its CatchHandler @ 03136614 */
  if (KDLGNPCKLIJ == 5) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                  thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 0313653c to 03236543 has its CatchHandler @ 03136604 */
                    /* try { // try from 03136550 to 0323656f has its CatchHandler @ 0313660c */
    System_Action<Int32Enum>___ctor();
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__LMMJGPKGCDJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03136570 to 032365bf has its CatchHandler @ 03136048 */
      MPFCDEPCALP__MAHEOMJKNLK(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

