// TypeDefIndex 1071
// Namespace: 
// public sealed class BKMILGLGFCM : PDBDELCMKJG
// Fields:
//   public readonly WWWForm CHMPFPNNPCC; // 0x38
//   public readonly Action<DMKKAPNMDKJ> MIMKJIKCPGP; // 0x40

// ===== private void .ctor(string CJFAPGEEPLM, TimeSpan MINHPKOPAIE, object OKECKCEAHNA, ValueTuple<string, string>[] EJAPBMFFKII, CancellationToken DEMAKGLNJNN, WWWForm OFOIILMAIPG, Action<DMKKAPNMDKJ> BLMFLPJJMPF)  [RVA 0x30DC4BC]
// BKMILGLGFCM$$.ctor @ RVA 0x30DC4BC

void BKMILGLGFCM___ctor(BKMILGLGFCM_o *__this,System_String_o *CJFAPGEEPLM,
                       System_TimeSpan_o MINHPKOPAIE,Il2CppObject *OKECKCEAHNA,
                       System_ValueTuple_string__string__array *EJAPBMFFKII,
                       System_Threading_CancellationToken_o DEMAKGLNJNN,
                       UnityEngine_WWWForm_o *OFOIILMAIPG,System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF,
                       MethodInfo *method)

{
  UnityEngine_WWWForm_o **ppUVar1;
  System_Action_DMKKAPNMDKJ__o **ppSVar2;
  
  PDBDELCMKJG___ctor((PDBDELCMKJG_o *)__this,CJFAPGEEPLM,MINHPKOPAIE,OKECKCEAHNA,EJAPBMFFKII,
                     DEMAKGLNJNN,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).CHMPFPNNPCC;
  *ppUVar1 = OFOIILMAIPG;
  thunk_FUN_01c20e04(ppUVar1,OFOIILMAIPG);
  ppSVar2 = &(__this->fields).MIMKJIKCPGP;
  *ppSVar2 = BLMFLPJJMPF;
  thunk_FUN_01c20e04(ppSVar2,BLMFLPJJMPF);
  return;
}


// ===== public override string ToString()  [RVA 0x30DC500]
// BKMILGLGFCM$$ToString @ RVA 0x30DC500

System_String_o * BKMILGLGFCM__ToString(BKMILGLGFCM_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Func_ValueTuple_string__string___string__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar3;
  System_Object_array *args;
  long lVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_ValueTuple_string__string__array *source;
  System_Func_ValueTuple_string__string___string__o *selector;
  System_String_o *pSVar7;
  double local_48;
  
  if ((DAT_04566360 & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<ValueTuple<string,_string>,_string>__);
    FUN_01bab630(&System_Func<ValueTuple<string,_string>,_string>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&Method_BKMILGLGFCM_<>c_JFOKOCHPHMK__);
    FUN_01bab630(&BKMILGLGFCM_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_20762/*"set"*/);
    FUN_01bab630(&StringLiteral_19925/*"null"*/);
    FUN_01bab630(&StringLiteral_1155/*", "*/);
    FUN_01bab630(&StringLiteral_10378/*"PostWebRequestParameters {{ Url = {0}, Timeout = {1}s, UserData = {2}, Headers = [{3}], Form = {4}, Callback = {5} }}"*/);
    DAT_04566360 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).super.EBIPCCLLMCP;
  if ((BKMILGLGFCM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BKMILGLGFCM_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = StringLiteral_1155/*", "*/;
  selector = BKMILGLGFCM_<>c_TypeInfo->static_fields->__9__3_0;
  if (selector == (System_Func_ValueTuple_string__string___string__o *)0x0) {
    if ((BKMILGLGFCM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BKMILGLGFCM_<>c_TypeInfo,method);
    }
    selector = (System_Func_ValueTuple_string__string___string__o *)
               thunk_FUN_01bda818(System_Func<ValueTuple<string,_string>,_string>_TypeInfo);
    System_Func<ValueTuple<object,_object>,_object>___ctor();
    ppSVar2 = &BKMILGLGFCM_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar2 = selector;
    thunk_FUN_01c20e04(ppSVar2,selector);
  }
  values = System_Linq_Enumerable__Select<ValueTuple<object,_object>,_object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__TResult__o *)selector,
                      Method_System_Linq_Enumerable_Select<ValueTuple<string,_string>,_string>__);
  pSVar3 = System_String__Join(pSVar3,(System_Collections_Generic_IEnumerable_string__o *)values,
                               (MethodInfo *)0x0);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,6);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = (__this->fields).super.PHONOLEMBHN;
  if ((pSVar7 != (System_String_o *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_031dc874:
    uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar6,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar7;
    thunk_FUN_01c20e04(args->m_Items,pSVar7);
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_48 = System_TimeSpan__get_TotalSeconds
                         ((System_TimeSpan_o)&(__this->fields).super.KBFOKFPKAKN,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_48);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar4 == 0))
    goto LAB_031dc874;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar5;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar5);
      pIVar5 = (__this->fields).super.OGFMJIABHHI;
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      goto LAB_031dc874;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar5;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar5);
        if ((pSVar3 != (System_String_o *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        goto LAB_031dc874;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)pSVar3;
          thunk_FUN_01c20e04(args->m_Items + 3,pSVar3);
          pSVar3 = StringLiteral_10378/*"PostWebRequestParameters {{ Url = {0}, Timeout = {1}s, UserData = {2}, Headers = [{3}], Form = {4}, Callback = {5} }}"*/;
          puVar1 = &StringLiteral_19925/*"null"*/;
          if ((__this->fields).CHMPFPNNPCC != (UnityEngine_WWWForm_o *)0x0) {
            puVar1 = &StringLiteral_20762/*"set"*/;
          }
          pIVar5 = (Il2CppObject *)*puVar1;
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) goto LAB_031dc874;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar5;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar5);
            puVar1 = &StringLiteral_19925/*"null"*/;
            if ((__this->fields).MIMKJIKCPGP != (System_Action_DMKKAPNMDKJ__o *)0x0) {
              puVar1 = &StringLiteral_20762/*"set"*/;
            }
            pIVar5 = (Il2CppObject *)*puVar1;
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_031dc874;
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = pIVar5;
              thunk_FUN_01c20e04(args->m_Items + 5,pIVar5);
              pSVar3 = System_String__Format(pSVar3,args,(MethodInfo *)0x0);
              return pSVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

