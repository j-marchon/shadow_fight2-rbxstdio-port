// Nekki.SF2.GUI.UIModule$$MountModule @ RVA 0x3490D10

Nekki_SF2_GUI_UIModule_o *
Nekki_SF2_GUI_UIModule__MountModule
          (Nekki_SF2_GUI_UIModule_o *BBFEPHOMGDM,UnityEngine_Transform_o *JJHEGPBBMLG,
          bool GKGCMGDFHAH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *original;
  UnityEngine_Object_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *value;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_UIModule_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04568417 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<UIModule>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568417 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)BBFEPHOMGDM,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return (Nekki_SF2_GUI_UIModule_o *)0x0;
  }
  if (BBFEPHOMGDM != (Nekki_SF2_GUI_UIModule_o *)0x0) {
    original = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)BBFEPHOMGDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)original,Method_UnityEngine_Object_Instantiate<GameObject>__
                       );
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)BBFEPHOMGDM,(MethodInfo *)0x0);
    if ((__this_00 != (UnityEngine_Object_o *)0x0) &&
       (value = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
       __this != (UnityEngine_Object_o *)0x0)) {
      UnityEngine_Object__set_name(__this,value,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar2,JJHEGPBBMLG,false,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
        if (DAT_0455fa7f == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa7f = '\x01';
        }
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (pUVar2,(UnityEngine_Vector3_o)
                            (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)__this,false,(MethodInfo *)0x0);
          __this_01 = (Nekki_SF2_GUI_UIModule_o *)
                      UnityEngine_GameObject__GetComponent<object>
                                ((UnityEngine_GameObject_o *)__this,
                                 Method_UnityEngine_GameObject_GetComponent<UIModule>__);
          if (GKGCMGDFHAH) {
            if (__this_01 == (Nekki_SF2_GUI_UIModule_o *)0x0) goto LAB_03590ec0;
            Nekki_SF2_GUI_UIModule__Activate(__this_01,method_00);
          }
          return __this_01;
        }
      }
    }
  }
LAB_03590ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

