// Nekki.SF2.GUI.Scripts.LoadingCircle$$Update @ RVA 0x308C310

void Nekki_SF2_GUI_Scripts_LoadingCircle__Update
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o value;
  
  fVar2 = (__this->fields).JPMABKNFNNL;
  if (1e-06 < fVar2) {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).JPMABKNFNNL = fVar2 - fVar1;
    return;
  }
  (__this->fields).JPMABKNFNNL = (__this->fields)._Timeout;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar3 = UnityEngine_Transform__get_localEulerAngles(__this_00,(MethodInfo *)0x0);
    value.fields.x = UVar3.fields.x + (__this->fields).NBDBBMGDDGF.fields.x;
    value.fields.y = UVar3.fields.y + (__this->fields).NBDBBMGDDGF.fields.y;
    value.fields.z = UVar3.fields.z + (__this->fields).NBDBBMGDDGF.fields.z;
    UnityEngine_Transform__set_localEulerAngles(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

