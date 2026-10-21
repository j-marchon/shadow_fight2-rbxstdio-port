// LBMOOFGGPEB$$JBGIAEJIKCA @ RVA 0x31D32C4

void LBMOOFGGPEB__JBGIAEJIKCA
               (LBMOOFGGPEB_o *__this,Nekki_SF2_GUI_TimerLabel_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TimerLabel_o **ppNVar2;
  Nekki_SF2_GUI_TimerLabel_o *x;
  
                    /* try { // try from 032d32c8 to 033d32d3 has its CatchHandler @ 032d4144 */
  if ((DAT_04566cc0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 032d32fc to 033d3307 has its CatchHandler @ 032d4120 */
    DAT_04566cc0 = 1;
  }
  ppNVar2 = &(__this->fields).NFCJGLPMIHH;
  *ppNVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar2,CJNHFNHJHPE);
                    /* try { // try from 032d3318 to 033d3343 has its CatchHandler @ 032d4150 */
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
                    /* try { // try from 032d3350 to 033d3373 has its CatchHandler @ 032d4118 */
      Nekki_SF2_GUI_TimerLabel__set_CurrentTime
                (*ppNVar2,(__this->fields).JAODINPKJLN,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

