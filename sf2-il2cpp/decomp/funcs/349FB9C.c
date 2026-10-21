// Nekki.SF2.GUI.HintBoxAutoKilled$$Build @ RVA 0x349FB9C

Nekki_SF2_GUI_HintBoxAutoKilled_o *
Nekki_SF2_GUI_HintBoxAutoKilled__Build
          (UnityEngine_GameObject_o *DKIDCBPNMPD,UnityEngine_Transform_o *HOKHHGFLMNA,
          UnityEngine_Vector3_o HHPABFGHALF,float NMFOKOIDMBF,float NMFKJBOAOLK,float DAPHCPICAAC,
          MethodInfo *method)

{
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  undefined4 in_register_00005084;
  
  if ((DAT_0456848e & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintBoxAutoKilled>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456848e = 1;
  }
  if (DAT_0455fa79 == '\0') {
    FUN_01bab630(&UnityEngine_Quaternion_TypeInfo);
    DAT_0455fa79 = '\x01';
  }
  rotation = *(UnityEngine_Quaternion_Fields *)UnityEngine_Quaternion_TypeInfo->static_fields;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)DKIDCBPNMPD,HHPABFGHALF,(UnityEngine_Quaternion_o)rotation,
                      HOKHHGFLMNA,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((__this != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_HintBoxAutoKilled_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (__this,Method_UnityEngine_GameObject_GetComponent<HintBoxAutoKilled>__
                             ), __this_00 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._4_Init.methodPtr)
              (CONCAT44(in_register_00005084,NMFKJBOAOLK),(ulong)(uint)DAPHCPICAAC,__this_00,
               (__this_00->klass->vtable)._4_Init.method);
    *(float *)&(__this_00->fields).super.field_0x4c = NMFOKOIDMBF;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

