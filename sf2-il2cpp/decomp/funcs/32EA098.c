// KOGMOACEOAM$$ILMOLCLNCPI @ RVA 0x32EA098

float KOGMOACEOAM__ILMOLCLNCPI
                (KOGMOACEOAM_o *__this,int32_t BDCMEGDFMOB,System_String_o *BCPAFBNLBDE,
                MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  float fVar5;
  
  method_00 = (MethodInfo *)BCPAFBNLBDE;
  if ((DAT_04567630 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ElementAt<float[]>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>_get_Count__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_19889);
    DAT_04567630 = 1;
  }
  fVar5 = 0.0;
  if (BDCMEGDFMOB < (__this->fields).super._size) {
    uVar1 = KOGMOACEOAM__IDKLPIGHDGI(__this,BCPAFBNLBDE,method_00);
    if ((int)uVar1 < 0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_033ea1f0;
      if ((BCPAFBNLBDE != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(BCPAFBNLBDE,(((args->obj).klass)->_1).element_class),
         lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) goto LAB_033ea1f4;
      args->m_Items[0] = (Il2CppObject *)BCPAFBNLBDE;
      thunk_FUN_01c20e04(args->m_Items,BCPAFBNLBDE);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_19889,args,(MethodInfo *)0x0);
      fVar5 = 0.0;
    }
    else {
      pIVar2 = System_Linq_Enumerable__ElementAt<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this,BDCMEGDFMOB,
                          Method_System_Linq_Enumerable_ElementAt<float[]>__);
      if (pIVar2 == (Il2CppObject *)0x0) {
LAB_033ea1f0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(uint *)&pIVar2[1].monitor <= uVar1) {
LAB_033ea1f4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      fVar5 = *(float *)((long)&pIVar2[2].klass + (ulong)uVar1 * 4);
    }
  }
  return fVar5;
}

