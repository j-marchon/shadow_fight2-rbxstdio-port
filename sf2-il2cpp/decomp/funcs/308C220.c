// Nekki.SF2.GUI.Scripts.LoadingCircle$$Play @ RVA 0x308C220

void Nekki_SF2_GUI_Scripts_LoadingCircle__Play
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  int iVar1;
  
  iVar1 = (__this->fields)._SegmentsCount;
  (__this->fields).JPMABKNFNNL = (__this->fields)._Timeout;
  (__this->fields).NBDBBMGDDGF.fields.x = 0.0;
  (__this->fields).NBDBBMGDDGF.fields.y = 0.0;
  (__this->fields).NBDBBMGDDGF.fields.z = -360.0 / (float)iVar1;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_0455fa77 == '\0') {
    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
    DAT_0455fa77 = '\x01';
  }
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localEulerAngles
              (__this_00,
               (UnityEngine_Vector3_o)
               (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

