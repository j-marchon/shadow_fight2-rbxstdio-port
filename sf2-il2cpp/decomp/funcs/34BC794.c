// IONAICHLBOO$$IAOGDACAFKH @ RVA 0x34BC794

bool IONAICHLBOO__IAOGDACAFKH
               (System_String_o *CAJGOAPOCOP,
               System_Collections_Generic_Dictionary_Func_string__bool___string__o *IOEBMGEBMOM,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  
  if ((DAT_045685e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_All<KeyValuePair<Func<string,_bool>,_string>>__);
    FUN_01bab630(&System_Func<KeyValuePair<Func<string,_bool>,_string>,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_OAMNHEMLLFO_LNFPEEFDEGM__);
    FUN_01bab630(&IONAICHLBOO_OAMNHEMLLFO_TypeInfo);
    DAT_045685e9 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IONAICHLBOO_OAMNHEMLLFO_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CAJGOAPOCOP;
    thunk_FUN_01c20e04(__this + 1,CAJGOAPOCOP);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(
                                  System_Func<KeyValuePair<Func<string,_bool>,_string>,_bool>_TypeInfo
                                  );
    System_Func<KeyValuePair<object,_object>,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__All<KeyValuePair<object,_object>>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)IOEBMGEBMOM,predicate,
                       Method_System_Linq_Enumerable_All<KeyValuePair<Func<string,_bool>,_string>>__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

