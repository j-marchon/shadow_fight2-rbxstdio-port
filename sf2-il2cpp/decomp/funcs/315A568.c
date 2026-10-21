// LIDILBBODBM$$.ctor @ RVA 0x315A568

void LIDILBBODBM___ctor(LIDILBBODBM_o *__this,MJPJANJNDCI_CdnMirrorsConfig__o *HLFCHMCOPID,
                       MethodInfo *method)

{
  System_Func_T__o *valueFactory;
  System_Lazy_TimeSpan__o *__this_00;
  System_Lazy_TimeSpan__o **ppSVar1;
  
  if ((DAT_04566861 & 1) == 0) {
    FUN_01bab630(&System_Func<TimeSpan>_TypeInfo);
    FUN_01bab630(&Method_LIDILBBODBM_EOOKNHCKOKI__);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>__ctor__);
    FUN_01bab630(&System_Lazy<TimeSpan>_TypeInfo);
    DAT_04566861 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0325a5f4 to 0335a797 has its CatchHandler @ 0325a5f4
                       catch() { ... } // from try @ 0325a5f4 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325a9c8 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325a9fc with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325ab44 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325ab80 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325abf0 with catch @ 0325a5f4
                       catch() { ... } // from try @ 0325ac30 with catch @ 0325a5f4 */
  (__this->fields).OAOMFCGPCBP = HLFCHMCOPID;
  thunk_FUN_01c20e04(&__this->fields,HLFCHMCOPID);
  valueFactory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<TimeSpan>_TypeInfo);
  System_Func<TimeSpan>___ctor();
  __this_00 = (System_Lazy_TimeSpan__o *)thunk_FUN_01bda818(System_Lazy<TimeSpan>_TypeInfo);
  System_Lazy<TimeSpan>___ctor(__this_00,valueFactory,Method_System_Lazy<TimeSpan>__ctor__);
  ppSVar1 = &(__this->fields).GAFHPBLKILE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

