// Nekki.SF2.GUI.LockScreen$$HHGJCPADNOJ @ RVA 0x3539F08

void Nekki_SF2_GUI_LockScreen__HHGJCPADNOJ(Nekki_SF2_GUI_LockScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  __this_00 = (__this->fields).rotateImg;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__Rotate
              (__this_01,(UnityEngine_Vector3_o)(__this->fields).rotationAngle.fields,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

