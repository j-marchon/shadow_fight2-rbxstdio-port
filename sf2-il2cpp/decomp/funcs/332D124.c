// Nekki.SF2.GUI.Fight.ComboModel$$AddPerfect @ RVA 0x332D124

void Nekki_SF2_GUI_Fight_ComboModel__AddPerfect
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  GOJLGHMMDBO_o *pGVar1;
  
  pGVar1 = (__this->fields).AMKECFKEGJH;
  if (pGVar1 != (GOJLGHMMDBO_o *)0x0) {
                    /* try { // try from 0342d130 to 0352d153 has its CatchHandler @ 0342d190 */
    (pGVar1->fields).KODJDFKIJFJ = (pGVar1->fields).KODJDFKIJFJ + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

