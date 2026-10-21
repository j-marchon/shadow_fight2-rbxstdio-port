// GPEHLCDLNDL$$IFFHCBKGMKC @ RVA 0x3127F1C

/* WARNING: Type propagation algorithm not settling */

Nekki_SF2_GUI_Tutorial_TutorialNode_o *
GPEHLCDLNDL__IFFHCBKGMKC(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_array *pSVar3;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this;
  MethodInfo *extraout_x1;
  char *pcVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  long lVar6;
  
  if ((DAT_0456666d & 1) == 0) {
    FUN_01bab630(&Method_GPEHLCDLNDL_AKEOOKGDJDM_CFABNCIJNCM__);
    FUN_01bab630(&GPEHLCDLNDL_AKEOOKGDJDM_TypeInfo);
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Find__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<TutorialNode>_TypeInfo);
    DAT_0456666d = 1;
    method = extraout_x1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(GPEHLCDLNDL_AKEOOKGDJDM_TypeInfo,method);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if ((EIJDDKJONFO != (System_String_o *)0x0) &&
     (pSVar3 = System_String__Split(EIJDDKJONFO,0x2e,0,(MethodInfo *)0x0),
     pIVar2 != (Il2CppObject *)0x0)) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)pSVar3;
    thunk_FUN_01c20e04(pIVar2,pSVar3);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      if ((pIVar2->klass->_1).namespaze == (char *)0x0) {
        return (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
      }
      if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG;
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<TutorialNode>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_00 != (System_Collections_Generic_List_TutorialNode__o *)0x0) {
        __this = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)
                 System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_00,match,
                            Method_System_Collections_Generic_List<TutorialNode>_Find__);
        if (pIVar2->klass != (Il2CppClass *)0x0) {
          pcVar4 = (pIVar2->klass->_1).namespaze;
          if ((int)pcVar4 < 2) {
            return __this;
          }
          lVar6 = 0;
          while( true ) {
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              return (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
            }
            pIVar5 = pIVar2->klass;
            if (pIVar5 == (Il2CppClass *)0x0) break;
            if ((ulong)*(uint *)&(pIVar5->_1).namespaze <= lVar6 + 1U) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            if (__this == (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) break;
            __this = Nekki_SF2_GUI_Tutorial_TutorialNode__GetNode
                               (__this,*(System_String_o **)
                                        (&(pIVar5->_1).byval_arg.bits + lVar6 * 2),(MethodInfo *)0x0
                               );
            lVar6 = lVar6 + 1;
            if (((ulong)pcVar4 & 0xffffffff) - 1 == lVar6) {
              return __this;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

