// Nekki.SF2.GUI.Tutorial.TutorialCanvas$$IsInstanceExists @ RVA 0x318FF80

bool Nekki_SF2_GUI_Tutorial_TutorialCanvas__IsInstanceExists(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *x;
  
                    /* try { // try from 0328ff98 to 0338ffa3 has its CatchHandler @ 0328fbe0 */
  if ((DAT_04566a3a & 1) == 0) {
                    /* try { // try from 0328ffa4 to 0338ffab has its CatchHandler @ 0328ffac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328ff30 with catch @ 0328ffac
                       catch(type#2 @ 00000000) { ... } // from try @ 0328ffa4 with catch @ 0328ffac
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0328ffb0 to 0339003b has its CatchHandler @ 0328ffb0
                       catch() { ... } // from try @ 0328ffb0 with catch @ 0328ffb0
                       catch() { ... } // from try @ 0329005c with catch @ 0328ffb0
                       catch() { ... } // from try @ 03290080 with catch @ 0328ffb0
                       catch() { ... } // from try @ 032900a8 with catch @ 0328ffb0
                       catch() { ... } // from try @ 032900e8 with catch @ 0328ffb0 */
    FUN_01bab630(&Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo);
    DAT_04566a3a = 1;
  }
  x = Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo->static_fields->KNOHKIKFEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

