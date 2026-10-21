// Nekki.SF2.GUI.Map.ContentToggle$$FDOLPOJBFHG @ RVA 0x33B30C0

void Nekki_SF2_GUI_Map_ContentToggle__FDOLPOJBFHG
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar1;
  DG_Tweening_Sequence_o *t;
  
                    /* try { // try from 034b30c8 to 035b30cf has its CatchHandler @ 034b46dc */
                    /* try { // try from 034b30dc to 035b30e3 has its CatchHandler @ 034b46f4 */
  if ((DAT_04567d5a & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
                    /* try { // try from 034b30ec to 035b30f3 has its CatchHandler @ 034b4718 */
    DAT_04567d5a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b30f4 to 035b310f has its CatchHandler @ 034b4950 */
  Nekki_SF2_GUI_Map_ContentToggle__FGPJLJDMNEA(__this,method);
  t = (__this->fields).BPOLHFBDIMK;
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                    /* try { // try from 034b311c to 035b3123 has its CatchHandler @ 034b46d0 */
  if (pMVar1 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
    DG_Tweening_TweenExtensions__Restart
              ((DG_Tweening_Tween_o *)t,false,(pMVar1->fields).OJILDEBJODL,(MethodInfo *)0x0);
                    /* try { // try from 034b3134 to 035b313b has its CatchHandler @ 034b46e8 */
                    /* try { // try from 034b313c to 035b3157 has its CatchHandler @ 034b4980 */
                    /* WARNING: Could not recover jumptable at 0x034b3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._5_ELNCBEDOJED.methodPtr)
              (__this,(__this->klass->vtable)._5_ELNCBEDOJED.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

