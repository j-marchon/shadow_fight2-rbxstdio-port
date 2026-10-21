// JBMMBPOLLKD$$HEPDJNBIHEN @ RVA 0x309D17C

void JBMMBPOLLKD__HEPDJNBIHEN
               (JBMMBPOLLKD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,HOOAAGABMBL_o **IKKAMAMLIKA,
               int32_t *EPINGPGECOM,float *ABAGBODPCCP,bool *AHBKHGFDGHN,int64_t *IIPPKMHCDBI,
               int64_t *AINBPAEDKKN,System_String_o **MOMHCKDCKNE,bool *MMKNJBOMOEH,
               MethodInfo *method)

{
  int64_t iVar1;
  int iVar2;
  bool bVar3;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar4;
  System_String_o *pSVar5;
  System_String_array *collection;
  System_Collections_Generic_List_object__o *__this_02;
  System_String_o *pSVar6;
  DOPEEDABNEK_o *__this_03;
  HOOAAGABMBL_o *pHVar7;
  System_Object_array *args;
  long lVar8;
  undefined8 uVar9;
  int32_t iVar10;
  double *method_00;
  double dVar11;
  double __this_04;
  
  if ((DAT_04566128 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10653);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566128 = 1;
  }
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar4 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar4 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar4,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).MLPKGJACOFA,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
       (pSVar5 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method),
       pSVar6 = StringLiteral_1, pSVar5 != (System_String_o *)0x0)) {
      collection = System_String__Split(pSVar5,0x7c,0,(MethodInfo *)0x0);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>__ctor__);
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar2 = (__this_02->fields)._size;
        pSVar5 = pSVar6;
        if ((0 < iVar2) &&
           (pSVar5 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               (__this_02,0,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           iVar2 != 1)) {
          pSVar6 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             (__this_02,1,Method_System_Collections_Generic_List<string>_get_Item__)
          ;
        }
        bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
        if (bVar3) {
          EILGGBOIMGE__KFMNMGGDHFD
                    ((EILGGBOIMGE_o *)__this_01,pSVar6,__this_00,false,(System_String_o *)0x0,
                     (MethodInfo *)0x0);
          dVar11 = (__this_00->fields).HNFHNNLOLGK;
          iVar10 = -0x80000000;
          if (dVar11 != INFINITY) {
            iVar10 = (int)dVar11;
          }
        }
        else {
          iVar10 = -1;
        }
        *EPINGPGECOM = iVar10;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).BNCDLNFEPKG,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        method_00 = &(__this_00->fields).HNFHNNLOLGK;
        *ABAGBODPCCP = (float)*method_00;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).HKEHEHOOBOF,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        *AHBKHGFDGHN = 0.0 < *method_00;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).CFLAFFKFOCJ,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        iVar1 = -0x8000000000000000;
        if (*method_00 != INFINITY) {
          iVar1 = (long)*method_00;
        }
        *IIPPKMHCDBI = iVar1;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).OEMGHPJIEGH,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        iVar1 = -0x8000000000000000;
        if (*method_00 != INFINITY) {
          iVar1 = (long)*method_00;
        }
        *AINBPAEDKKN = iVar1;
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).JIGDHKJPMJC,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality
                          ((__this->fields).JIGDHKJPMJC,StringLiteral_1,(MethodInfo *)0x0);
        if ((bVar3) &&
           (bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(__this_00,(MethodInfo *)0x0), bVar3)) {
          pSVar6 = System_Double__ToString(__this_04,(MethodInfo *)method_00);
        }
        else {
          pSVar6 = (__this_00->fields).DFJBJLBLBGB;
        }
        *MOMHCKDCKNE = pSVar6;
        thunk_FUN_01c20e04();
        EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
        EILGGBOIMGE__KFMNMGGDHFD
                  ((EILGGBOIMGE_o *)__this_01,(__this->fields).ACBMPKCDCJM,__this_00,false,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        *MMKNJBOMOEH = 0.0 < (__this_00->fields).HNFHNNLOLGK;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_03 != (DOPEEDABNEK_o *)0x0) {
          pHVar7 = DOPEEDABNEK__CKKIPBAIEMN(__this_03,pSVar5,(MethodInfo *)0x0);
          *IKKAMAMLIKA = pHVar7;
          thunk_FUN_01c20e04(IKKAMAMLIKA,pHVar7);
          if (*IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
            return;
          }
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
          if (args != (System_Object_array *)0x0) {
            if ((pSVar5 != (System_String_o *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class),
               lVar8 == 0)) {
LAB_0319d710:
              uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar9,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar5;
              thunk_FUN_01c20e04(args->m_Items,pSVar5);
              pSVar6 = (__this->fields).MLPKGJACOFA;
              if ((pSVar6 != (System_String_o *)0x0) &&
                 (lVar8 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class),
                 lVar8 == 0)) goto LAB_0319d710;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = (Il2CppObject *)pSVar6;
                thunk_FUN_01c20e04(args->m_Items + 1,pSVar6);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10653,args,(MethodInfo *)0x0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

