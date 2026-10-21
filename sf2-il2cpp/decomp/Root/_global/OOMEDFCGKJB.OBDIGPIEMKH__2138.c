// TypeDefIndex 2138
// Namespace: 
// [CompilerGenerated]
// private sealed class OOMEDFCGKJB.OBDIGPIEMKH
// Fields:
//   public Nullable<int> ID; // 0x10
//   public string lang; // 0x18
//   public Func<BCGLDKLKKDA, bool> <>9__7; // 0x20

// ===== internal bool HNIALGLGFJK(BCGLDKLKKDA n)  [RVA 0x32D4110]
// OOMEDFCGKJB.OBDIGPIEMKH$$HNIALGLGFJK @ RVA 0x32D4110

bool OOMEDFCGKJB_OBDIGPIEMKH__HNIALGLGFJK
               (OOMEDFCGKJB_OBDIGPIEMKH_o *__this,BCGLDKLKKDA_o *n,MethodInfo *method)

{
  if ((DAT_04567570 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_04567570 = 1;
  }
  if (n != (BCGLDKLKKDA_o *)0x0) {
    return (*(uint *)&(__this->fields).ID.fields & 0xff) != 0 &&
           (n->fields)._MDAJFAPLLOH_k__BackingField == (__this->fields).ID.fields.value;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal List<BCGLDKLKKDA> GMIDFNHOAHN(KeyValuePair<string, List<BCGLDKLKKDA>> p)  [RVA 0x32D417C]
// OOMEDFCGKJB.OBDIGPIEMKH$$GMIDFNHOAHN @ RVA 0x32D417C

System_Collections_Generic_List_BCGLDKLKKDA__o *
OOMEDFCGKJB_OBDIGPIEMKH__GMIDFNHOAHN
          (OOMEDFCGKJB_OBDIGPIEMKH_o *__this,
          System_Collections_Generic_KeyValuePair_string__List_BCGLDKLKKDA___o p,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_BCGLDKLKKDA__o *pSVar1;
  System_Func_BCGLDKLKKDA__bool__o **ppSVar2;
  System_Func_BCGLDKLKKDA__bool__o *predicate;
  
  if ((DAT_04567571 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<BCGLDKLKKDA>__,p.fields.key);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<BCGLDKLKKDA>__);
    FUN_01bab630(&System_Func<BCGLDKLKKDA,_bool>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<BCGLDKLKKDA>>_get_Value__
                );
    FUN_01bab630(&Method_OOMEDFCGKJB_OBDIGPIEMKH_HNIALGLGFJK__);
    DAT_04567571 = 1;
  }
  ppSVar2 = &(__this->fields).__9__7;
  predicate = *ppSVar2;
  if (predicate == (System_Func_BCGLDKLKKDA__bool__o *)0x0) {
    predicate = (System_Func_BCGLDKLKKDA__bool__o *)
                thunk_FUN_01bda818(System_Func<BCGLDKLKKDA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    (__this->fields).__9__7 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  source = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)p.fields.value,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_Where<BCGLDKLKKDA>__);
  pSVar1 = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
           System_Linq_Enumerable__ToList<object>
                     (source,Method_System_Linq_Enumerable_ToList<BCGLDKLKKDA>__);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x32D3714]
// OOMEDFCGKJB.OBDIGPIEMKH$$.ctor @ RVA 0x32D3714

void OOMEDFCGKJB_OBDIGPIEMKH___ctor(OOMEDFCGKJB_OBDIGPIEMKH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool KABEDNCEEBM(KeyValuePair<string, List<BCGLDKLKKDA>> p)  [RVA 0x32D4264]
// OOMEDFCGKJB.OBDIGPIEMKH$$KABEDNCEEBM @ RVA 0x32D4264

bool OOMEDFCGKJB_OBDIGPIEMKH__KABEDNCEEBM
               (OOMEDFCGKJB_OBDIGPIEMKH_o *__this,
               System_Collections_Generic_KeyValuePair_string__List_BCGLDKLKKDA___o p,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567572 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<BCGLDKLKKDA>>_get_Key__
                 ,p.fields.key,p.fields.value);
    DAT_04567572 = 1;
  }
  bVar1 = System_String__op_Equality(p.fields.key,(__this->fields).lang,(MethodInfo *)0x0);
  return bVar1;
}

