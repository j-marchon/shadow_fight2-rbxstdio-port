// GEBHIBIEAJE$$PMLCIOCDHDM @ RVA 0x35ACCEC

Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *
GEBHIBIEAJE__PMLCIOCDHDM
          (GEBHIBIEAJE_o *__this,UnityEngine_Transform_o *NCKFIGCBCPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  System_String_o *name;
  
  if ((DAT_04568e5d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<EdgeRender>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_04568e5d = 1;
  }
  name = (__this->fields).JIJLBFGKNJK;
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<EdgeRender>__),
     __this_01 != (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *)0x0)) {
    Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__set_Edge(__this_01,__this,(MethodInfo *)0x0);
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_02,NCKFIGCBCPO,false,(MethodInfo *)0x0);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

