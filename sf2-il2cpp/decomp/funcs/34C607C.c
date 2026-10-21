// KKEKJDLEJIL$$DGCODECJJCC @ RVA 0x34C607C

bool KKEKJDLEJIL__DGCODECJJCC(KKEKJDLEJIL_o *__this,KKEKJDLEJIL_o *NECMHLICHNE,MethodInfo *method)

{
  int32_t iVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  
  if ((DAT_04568638 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_KKEKJDLEJIL_OLKFBGMOLMG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04568638 = 1;
  }
  if (NECMHLICHNE != (KKEKJDLEJIL_o *)0x0) {
    if ((((((NECMHLICHNE->fields).PEMECEBIJDM != (__this->fields).PEMECEBIJDM) ||
          ((NECMHLICHNE->fields).IIDEPPHFJPA != (__this->fields).IIDEPPHFJPA)) ||
         ((NECMHLICHNE->fields).HLAAFCIMBAP != (__this->fields).HLAAFCIMBAP)) ||
        (((NECMHLICHNE->fields).PNAAPNFPCPI != (__this->fields).PNAAPNFPCPI ||
         ((NECMHLICHNE->fields).AIDDHEHFBEG != (__this->fields).AIDDHEHFBEG)))) ||
       (((NECMHLICHNE->fields).GFNKONPLPEB != (__this->fields).GFNKONPLPEB ||
        (((NECMHLICHNE->fields).NOKHEGPHOHK != (__this->fields).NOKHEGPHOHK ||
         ((NECMHLICHNE->fields).NBHGHLIPCAP != (__this->fields).NBHGHLIPCAP)))))) {
      return false;
    }
    pSVar3 = (NECMHLICHNE->fields).IIBBDKMIPOF;
    if ((pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) &&
       (pSVar2 = (__this->fields).IIBBDKMIPOF,
       pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
      if ((pSVar3->fields)._size != (pSVar2->fields)._size) {
        return false;
      }
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      source = System_Linq_Enumerable__Where<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                          Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
      iVar1 = System_Linq_Enumerable__Count<object>
                        (source,Method_System_Linq_Enumerable_Count<HOOAAGABMBL>__);
      pSVar3 = (__this->fields).IIBBDKMIPOF;
      if (pSVar3 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        return iVar1 == (pSVar3->fields)._size;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

