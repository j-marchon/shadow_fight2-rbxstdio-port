// EIILGPAPGMJ$$KDMBCCPCLAJ @ RVA 0x35825E8

void EIILGPAPGMJ__KDMBCCPCLAJ(EIILGPAPGMJ_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  MethodInfo *extraout_x1;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
                    /* try { // try from 036825f8 to 037825ff has its CatchHandler @ 03682864 */
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 03682600 to 0378260b has its CatchHandler @ 0368285c */
    (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    pUVar1 = (__this->fields).IAKCIALILLN;
    method = extraout_x1;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* try { // try from 03682620 to 03782627 has its CatchHandler @ 03682830 */
                    /* WARNING: Could not recover jumptable at 0x03682630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

