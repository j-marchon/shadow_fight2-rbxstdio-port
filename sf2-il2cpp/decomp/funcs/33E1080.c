// AGKAPHHMGKD$$AIFEEKKPJBP @ RVA 0x33E1080

void AGKAPHHMGKD__AIFEEKKPJBP
               (AGKAPHHMGKD_o *__this,System_Collections_Generic_IEnumerable_string__o *DMFNANCNINE,
               bool HPACPFLKHPK,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *JLNPKGGFFDD;
  System_Action_IEnumerable_string___bool__o *CJNHFNHJHPE;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  AGKAPHHMGKD_c *pAVar3;
  GEJEGHKMPJM_o *__this_00;
  
  if ((DAT_04567e9f & 1) == 0) {
    FUN_01bab630(&Method_AGKAPHHMGKD_AIFEEKKPJBP__);
    FUN_01bab630(&System_Action<IEnumerable<string>,_bool>_TypeInfo);
    FUN_01bab630(&StringLiteral_9888);
    FUN_01bab630(&StringLiteral_4993);
    FUN_01bab630(&StringLiteral_6663);
    DAT_04567e9f = 1;
  }
  puVar1 = &StringLiteral_6663;
  if (!HPACPFLKHPK) {
    puVar1 = &StringLiteral_4993;
  }
  JLNPKGGFFDD = System_String__Concat
                          (StringLiteral_9888,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  __this_00 = (__this->fields).PEEHIKFEJAJ;
  CJNHFNHJHPE = (System_Action_IEnumerable_string___bool__o *)
                thunk_FUN_01bda818(System_Action<IEnumerable<string>,_bool>_TypeInfo);
  System_Action<object,_bool>___ctor();
  if (__this_00 != (GEJEGHKMPJM_o *)0x0) {
    GEJEGHKMPJM__MDLGDNPLOHL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pAVar3 = __this->klass;
    if (HPACPFLKHPK) {
      UNRECOVERED_JUMPTABLE = (pAVar3->vtable)._9_HNIHOIAMDPC.methodPtr;
      pMVar2 = (pAVar3->vtable)._9_HNIHOIAMDPC.method;
    }
    else {
      UNRECOVERED_JUMPTABLE = pAVar3[1]._1.image;
      pMVar2 = pAVar3[1]._1.gc_desc;
    }
                    /* WARNING: Could not recover jumptable at 0x034e119c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(__this,pMVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

