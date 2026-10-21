// JGHEMMGMLND$$PMLCIOCDHDM @ RVA 0x33DE0C8

Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *
JGHEMMGMLND__PMLCIOCDHDM
          (JGHEMMGMLND_o *__this,UnityEngine_Transform_o *NCKFIGCBCPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *pNVar1;
  JGHEMMGMLND_o **ppJVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *name;
  
  if ((DAT_04567e81 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CapsuleRender>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_04567e81 = 1;
  }
  name = (__this->fields).DEKCPPOJFEH;
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pNVar1 = (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<CapsuleRender>__),
     pNVar1 != (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)0x0)) {
    ppJVar2 = &(pNVar1->fields).Base;
    *ppJVar2 = __this;
    thunk_FUN_01c20e04(ppJVar2,__this);
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,NCKFIGCBCPO,false,(MethodInfo *)0x0);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

