// Nekki.SF2.GUI.Profile.KeyIcon$$Instantiate @ RVA 0x3128C70

Nekki_SF2_GUI_Profile_KeyIcon_o *
Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
          (System_String_o *DMCFDIBHCPD,float HDLADBMEOCC,UnityEngine_GameObject_o *HMBLEHNKDIH,
          UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Profile_KeyIcon_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04566675 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<KeyIcon>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566675 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)HMBLEHNKDIH,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,false,(MethodInfo *)0x0);
    __this_01 = (Nekki_SF2_GUI_Profile_KeyIcon_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (__this,Method_UnityEngine_GameObject_GetComponent<KeyIcon>__);
    if (__this_01 != (Nekki_SF2_GUI_Profile_KeyIcon_o *)0x0) {
      Nekki_SF2_GUI_Profile_KeyIcon__Refresh(__this_01,DMCFDIBHCPD,HDLADBMEOCC,method_00);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

