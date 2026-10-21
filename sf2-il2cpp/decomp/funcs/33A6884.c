// GGLKHCAIGDI$$OHGBPDNOLNH @ RVA 0x33A6884

System_String_o *
GGLKHCAIGDI__OHGBPDNOLNH
          (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  FOKJBDHLIMG_o *__this_02;
  HEFOANCOHDC_o *DDEPKHECINC;
  System_Object_array *args;
  System_String_o *pSVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  System_String_o *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567cf3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_6163);
    FUN_01bab630(&StringLiteral_2451);
    FUN_01bab630(&StringLiteral_6164);
    DAT_04567cf3 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) {
    CNDPGGAFHEA = (NKCMBEFHFII->fields).PCBECBEFJOI;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    EGBBHPHAHAC = NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x1;
    __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,true,in_x4);
    __this_01 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._list =
           (System_Collections_Generic_List_T__o *)
           CONCAT44(local_98.fields._list._4_4_,local_98.fields._list._0_4_);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._current = local_98.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                               ), pIVar6 = local_80.fields._current, bVar2) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
        if (__this_02 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (MethodInfo *)0x0;
        DDEPKHECINC = FOKJBDHLIMG__JMMDGEOBMOC
                                (__this_02,(System_String_o *)pIVar6[1].klass,(MethodInfo *)0x0);
        if (DDEPKHECINC != (HEFOANCOHDC_o *)0x0) {
          bVar2 = GGLKHCAIGDI__EJJDCEMBFPK((GGLKHCAIGDI_o *)DDEPKHECINC,DDEPKHECINC,method_00);
          bVar3 = GGLKHCAIGDI__JMGPKBNPLBI
                            ((GGLKHCAIGDI_o *)(ulong)bVar2,(DDEPKHECINC->fields).JIJLBFGKNJK,
                             EGBBHPHAHAC,method_01);
          if (!bVar3) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar4 = KKCBGIBKOCP__LFEHBAMJCMH(DDEPKHECINC,(MethodInfo *)0x0);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pSVar4 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = (Il2CppObject *)pSVar4;
            thunk_FUN_01c20e04(args->m_Items,pSVar4);
            local_98.fields._list._0_4_ = 0x42700000;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_98);
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[1] = pIVar6;
            thunk_FUN_01c20e04(args->m_Items + 1,pIVar6);
            pSVar4 = StringLiteral_2451;
            puVar1 = &StringLiteral_6164;
            if (!bVar2) {
              puVar1 = &StringLiteral_6163;
            }
            pIVar6 = (Il2CppObject *)*puVar1;
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[2] = pIVar6;
            thunk_FUN_01c20e04(args->m_Items + 2,pIVar6);
            pSVar8 = (DDEPKHECINC->fields).JMGIACHBIKG;
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((uint)args->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[3] = (Il2CppObject *)pSVar8;
            thunk_FUN_01c20e04(args->m_Items + 3,pSVar8);
            if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method_01 = (MethodInfo *)0x0;
            System_Text_StringBuilder__AppendFormat(__this_01,pSVar4,args,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        pSVar4 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

