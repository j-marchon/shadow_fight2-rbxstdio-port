// DOPEEDABNEK$$NEKCODFNMLD @ RVA 0x32E0A80

void DOPEEDABNEK__NEKCODFNMLD
               (DOPEEDABNEK_o *__this,System_String_o *NNNKLEMIPHP,int32_t JLAFGLDIFOC,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *NMMKGIMBHFF;
  System_Action_T__o *CPECAEHDDDB;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  
  if ((DAT_045675e8 & 1) == 0) {
    FUN_01bab630(&Method_DOPEEDABNEK_AOJFFKODFFM_MIKLGKPCBFO__);
    FUN_01bab630(&Method_DOPEEDABNEK_AOJFFKODFFM_POINKPMNPCE__);
    FUN_01bab630(&DOPEEDABNEK_AOJFFKODFFM_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    DAT_045675e8 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DOPEEDABNEK_AOJFFKODFFM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)NNNKLEMIPHP;
    thunk_FUN_01c20e04(__this_00 + 1,NNNKLEMIPHP);
    *(int32_t *)&__this_00[1].monitor = JLAFGLDIFOC;
    __this_00[2].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 2,__this);
    source = (__this->fields).DIGBEFKAPHM;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    NMMKGIMBHFF = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                             Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
    System_Action<object>___ctor();
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,CPECAEHDDDB,
               Method_DFPABHGJPJJ_NHDPECDJBGO<HOOAAGABMBL>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

