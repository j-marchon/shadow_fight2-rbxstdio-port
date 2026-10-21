// ICOEHFKOMGO$$LFENGGKOJDO @ RVA 0x329E150

void ICOEHFKOMGO__LFENGGKOJDO
               (System_String_o *KGLJICLJHEL,System_Type_o *DCMHEKHDDIL,System_Type_o *MCEDPEFKJDE,
               System_Collections_Generic_List_string__o *JHNJBELOCMB,
               System_Collections_Generic_List_string__o *CBHCNFMLLCM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Object_array *args;
  long lVar3;
  OGGBALCBCLL_o *__this;
  undefined8 uVar4;
  
  if ((DAT_045673b3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&OGGBALCBCLL_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9396);
    DAT_045673b3 = 1;
  }
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
      if (args != (System_Object_array *)0x0) {
        if ((KGLJICLJHEL != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
LAB_0339e390:
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
          thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
          if ((DCMHEKHDDIL != (System_Type_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(DCMHEKHDDIL,(((args->obj).klass)->_1).element_class),
             lVar3 == 0)) goto LAB_0339e390;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)DCMHEKHDDIL;
            thunk_FUN_01c20e04(args->m_Items + 1,DCMHEKHDDIL);
            if ((MCEDPEFKJDE != (System_Type_o *)0x0) &&
               (lVar3 = thunk_FUN_01bda71c(MCEDPEFKJDE,(((args->obj).klass)->_1).element_class),
               lVar3 == 0)) goto LAB_0339e390;
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = (Il2CppObject *)MCEDPEFKJDE;
              thunk_FUN_01c20e04(args->m_Items + 2,MCEDPEFKJDE);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogFormat(StringLiteral_9396,args,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               ICOEHFKOMGO_TypeInfo->static_fields->CDMCPEABCKN;
      __this = (OGGBALCBCLL_o *)thunk_FUN_01bda818(OGGBALCBCLL_TypeInfo);
      OGGBALCBCLL___ctor(__this,DCMHEKHDDIL,MCEDPEFKJDE,JHNJBELOCMB,CBHCNFMLLCM,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject *)__this,
                   Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

