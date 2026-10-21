// Nekki.SF2.GUI.Profile.SubItem$$SetSelectFlashingMaxOpacity @ RVA 0x359BAD4

void Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashingMaxOpacity
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,int32_t ILMPNBJGEDH,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_04568dca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568dca = 1;
  }
  x = (__this->fields)._selectWhiteSquare;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar1 = ILMPNBJGEDH & (ILMPNBJGEDH >> 0x1f ^ 0xffffffffU);
  if (0 < (int)uVar1) {
    uVar1 = 1;
  }
  (__this->fields).BBGEFCIPNAM = (float)(int)uVar1;
  return;
}

