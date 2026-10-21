// TypeDefIndex 867
// Namespace: Nekki.SF2.GUI.Scripts
// public class LoadingCircle : MonoBehaviour
// Fields:
//   private int _SegmentsCount; // 0x20
//   private float _Timeout; // 0x24
//   private float JPMABKNFNNL; // 0x28
//   private Vector3 NBDBBMGDDGF; // 0x2C

// ===== public void Play()  [RVA 0x308C220]
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


// ===== public void Stop()  [RVA 0x308C2C8]
// Nekki.SF2.GUI.Scripts.LoadingCircle$$Stop @ RVA 0x308C2C8

void Nekki_SF2_GUI_Scripts_LoadingCircle__Stop
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsPlaying()  [RVA 0x308C2EC]
// Nekki.SF2.GUI.Scripts.LoadingCircle$$get_IsPlaying @ RVA 0x308C2EC

bool Nekki_SF2_GUI_Scripts_LoadingCircle__get_IsPlaying
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x308C30C]
// Nekki.SF2.GUI.Scripts.LoadingCircle$$Awake @ RVA 0x308C30C

void Nekki_SF2_GUI_Scripts_LoadingCircle__Awake
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x308C310]
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


// ===== public void .ctor()  [RVA 0x308C3A8]
// Nekki.SF2.GUI.Scripts.LoadingCircle$$.ctor @ RVA 0x308C3A8

void Nekki_SF2_GUI_Scripts_LoadingCircle___ctor
               (Nekki_SF2_GUI_Scripts_LoadingCircle_o *__this,MethodInfo *method)

{
  (__this->fields)._SegmentsCount = 0xc;
  (__this->fields)._Timeout = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

