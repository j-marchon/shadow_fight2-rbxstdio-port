// NLPJLHOEAOE$$GELKKNCJPBC @ RVA 0x3208770

void NLPJLHOEAOE__GELKKNCJPBC(NLPJLHOEAOE_o *__this,System_String_o *ALHDMEKMLPH,MethodInfo *method)

{
  System_String_o *IINPPDJHHKC;
  System_String_o *ALHDMEKMLPH_00;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_TSource__o *GHAAKPDHIJJ;
  System_Action_string__StringBuilder__o **ppSVar1;
  Il2CppObject *message;
  System_Action_string__StringBuilder__o *CPECAEHDDDB;
  
  if ((DAT_04566e4e & 1) == 0) {
    FUN_01bab630(&System_Action<string,_StringBuilder>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&Method_OCLJMFBDKOA_NEIAJKGLNLB<string>__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&Method_NLPJLHOEAOE_<>c_LLKKHFFPCKO__);
    FUN_01bab630(&NLPJLHOEAOE_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_11251);
    FUN_01bab630(&StringLiteral_8609);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566e4e = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(__this_00,StringLiteral_8609,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,ALHDMEKMLPH,(MethodInfo *)0x0);
    GHAAKPDHIJJ = System_Linq_Enumerable__ToList<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)
                             (__this->fields).AIMEGOPKLLB,
                             Method_System_Linq_Enumerable_ToList<string>__);
    if ((NLPJLHOEAOE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_<>c_TypeInfo);
    }
    ALHDMEKMLPH_00 = StringLiteral_11251;
    IINPPDJHHKC = StringLiteral_1;
    CPECAEHDDDB = NLPJLHOEAOE_<>c_TypeInfo->static_fields->__9__141_0;
    if (CPECAEHDDDB == (System_Action_string__StringBuilder__o *)0x0) {
      if ((NLPJLHOEAOE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_<>c_TypeInfo);
      }
      CPECAEHDDDB = (System_Action_string__StringBuilder__o *)
                    thunk_FUN_01bda818(System_Action<string,_StringBuilder>_TypeInfo);
      System_Action<object,_object>___ctor();
      ppSVar1 = &NLPJLHOEAOE_<>c_TypeInfo->static_fields->__9__141_0;
      *ppSVar1 = CPECAEHDDDB;
      thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
    }
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCLJMFBDKOA__NEIAJKGLNLB<object>
              ((System_Collections_Generic_IList_T__o *)GHAAKPDHIJJ,ALHDMEKMLPH_00,IINPPDJHHKC,
               (System_Action_T__StringBuilder__o *)CPECAEHDDDB,__this_00,
               Method_OCLJMFBDKOA_NEIAJKGLNLB<string>__);
    message = (Il2CppObject *)
              (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

