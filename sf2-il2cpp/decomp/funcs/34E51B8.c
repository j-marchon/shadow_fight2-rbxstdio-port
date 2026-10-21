// BCAEBMNHBAN$$HFNHKAEBEKH @ RVA 0x34E51B8

UnityEngine_Material_o *
BCAEBMNHBAN__HFNHKAEBEKH
          (BCAEBMNHBAN_o *__this,UnityEngine_Texture_o *KPIOMBGACKP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Shader_o *pUVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Shader_o **ppUVar4;
  UnityEngine_Object_o *pUVar5;
  
  if ((DAT_04568757 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12312);
    FUN_01bab630(&StringLiteral_4961);
    DAT_04568757 = 1;
  }
  ppUVar4 = &(__this->fields).IOEOBADINPK;
  pUVar5 = (UnityEngine_Object_o *)*ppUVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Shader__Find(StringLiteral_4961,(MethodInfo *)0x0);
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
  }
  pUVar2 = *ppUVar4;
  pUVar5 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar5,pUVar2,(MethodInfo *)0x0);
  if (KPIOMBGACKP != (UnityEngine_Texture_o *)0x0) {
    pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)KPIOMBGACKP,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_12312,pSVar3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar5,pSVar3,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).PLBHNKLOJNC;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,(Il2CppObject *)KPIOMBGACKP,(Il2CppObject *)pUVar5,
                   Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
        return (UnityEngine_Material_o *)pUVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

