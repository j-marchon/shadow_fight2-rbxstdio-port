// GMGALNFPLPA$$ODHMPKGLNPP @ RVA 0x306D92C

bool GMGALNFPLPA__ODHMPKGLNPP
               (GMGALNFPLPA_o *__this,System_String_o *JEGPDLEAOAD,float OAGELANKMBH,
               float IOJNHKIPJOK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_ParticleSystem_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_ParticleSystem_o **ppUVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04565f45 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ParticleSystem>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_9297);
    FUN_01bab630(&StringLiteral_10158);
    DAT_04565f45 = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load<object>
                (JEGPDLEAOAD,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)x,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316db60;
    pUVar2 = (UnityEngine_ParticleSystem_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    ppUVar4 = &(__this->fields).HGMMHCMHINJ;
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
    if (*ppUVar4 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0316db60;
    UnityEngine_ParticleSystem__Pause(*ppUVar4,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = System_String__Concat(StringLiteral_10158,JEGPDLEAOAD,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_9297,JEGPDLEAOAD,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0316db60;
    pUVar2 = (UnityEngine_ParticleSystem_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<ParticleSystem>__);
    ppUVar4 = &(__this->fields).HGMMHCMHINJ;
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
  }
  __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = IOJNHKIPJOK;
    value.fields.x = OAGELANKMBH;
    value.fields.z = -0.1;
    UnityEngine_Transform__set_localPosition(__this_01,value,(MethodInfo *)0x0);
    return true;
  }
LAB_0316db60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

