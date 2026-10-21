// BCAEBMNHBAN$$BLHDMONEFKA @ RVA 0x34E5480

UnityEngine_Material_o *
BCAEBMNHBAN__BLHDMONEFKA
          (BCAEBMNHBAN_o *__this,UnityEngine_Texture_o *KPIOMBGACKP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Shader_o *pUVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  BCAEBMNHBAN_Fields *pBVar4;
  UnityEngine_Object_o *pUVar5;
  
  if ((DAT_0456875b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>_Add__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4960);
    FUN_01bab630(&StringLiteral_12311);
    DAT_0456875b = 1;
  }
  pBVar4 = &__this->fields;
  pUVar5 = (UnityEngine_Object_o *)pBVar4->OLBJIPEFFAJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Shader__Find(StringLiteral_4960,(MethodInfo *)0x0);
    pBVar4->OLBJIPEFFAJ = pUVar2;
    thunk_FUN_01c20e04(pBVar4,pUVar2);
  }
  pUVar2 = pBVar4->OLBJIPEFFAJ;
  pUVar5 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar5,pUVar2,(MethodInfo *)0x0);
  if (KPIOMBGACKP != (UnityEngine_Texture_o *)0x0) {
    pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)KPIOMBGACKP,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_12311,pSVar3,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar5,pSVar3,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).DOLIDMOELJG;
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

