// Nekki.SF2.GUI.Profile.SubItem$$SetSelectFlashingMinOpacity @ RVA 0x359BB58

void Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashingMinOpacity
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,float CBEFHLDCMFF,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  float fVar1;
  
  if ((DAT_04568dcb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568dcb = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._selectWhiteSquare;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar1 = 0.0;
  (__this->fields).EEPECIAODNN = CBEFHLDCMFF;
  if ((CBEFHLDCMFF < 0.0) || (fVar1 = 1.0, 1.0 < CBEFHLDCMFF)) {
    (__this->fields).EEPECIAODNN = fVar1;
  }
                    /* try { // try from 0369bbe4 to 0379bd8f has its CatchHandler @ 0369bbe4
                       catch() { ... } // from try @ 0369bbe4 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369bdf4 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c010 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c2a0 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c2d0 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c2ec with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c31c with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c368 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c398 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c3c8 with catch @ 0369bbe4 */
  return;
}

