// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsStickEnabled @ RVA 0x33A43B0

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsStickEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* try { // try from 034a43b8 to 035a43df has its CatchHandler @ 034a4494 */
  __this_00 = (__this->fields)._Joystick;
  (__this->fields).FNCLELOEFDM = CJNHFNHJHPE;
  if ((__this_00 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 034a43e0 to 035a43f7 has its CatchHandler @ 034a3fe4 */
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

