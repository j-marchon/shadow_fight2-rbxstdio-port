// KAKGABBLHGP$$.ctor @ RVA 0x314A560

void KAKGABBLHGP___ctor(KAKGABBLHGP_o *__this,bool GELBJEGLNNM,
                       Core_Configs_Models_PackType_array *LFADLKGPBHC,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar1;
  System_Collections_Generic_IReadOnlyList_PackType__o **ppSVar2;
  
  if ((DAT_045667af & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<PackType>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<PackType>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_045667af = 1;
  }
  (__this->fields).CLHEDDAKFHK = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).EDIEJIKLKAF = GELBJEGLNNM;
  source = System_Linq_Enumerable__Distinct<Int32Enum>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)LFADLKGPBHC,
                      Method_System_Linq_Enumerable_Distinct<PackType>__);
  pSVar1 = System_Linq_Enumerable__ToList<Int32Enum>
                     (source,Method_System_Linq_Enumerable_ToList<PackType>__);
  ppSVar2 = &(__this->fields).LDAAKFJDNJA;
  *ppSVar2 = (System_Collections_Generic_IReadOnlyList_PackType__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

