// AKJJAPEHKCG$$GOCEMJOCNEE @ RVA 0x304EB18

void AKJJAPEHKCG__GOCEMJOCNEE(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04565e32 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13977);
    DAT_04565e32 = 1;
  }
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (LAIGNDBNBJG,Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        *(undefined1 *)&x[1].monitor = 1;
        return;
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)LAIGNDBNBJG,(MethodInfo *)0x0);
      if (args != (System_Object_array *)0x0) {
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_13977,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

