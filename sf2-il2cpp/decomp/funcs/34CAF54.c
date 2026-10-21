// Nekki.SF2.GUI.BaseScrollItem$$get_CenterPosition @ RVA 0x34CAF54

UnityEngine_Vector3_o
Nekki_SF2_GUI_BaseScrollItem__get_CenterPosition
          (Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar1;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar1 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

